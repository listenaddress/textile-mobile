import React, { Component } from 'react'
import Redux, { Dispatch } from 'redux'
import { View, StatusBar, ActivityIndicator, Platform, PermissionsAndroid } from 'react-native'
import { Overlay } from 'react-native-elements'
import { NavigationContainerComponent } from 'react-navigation'
import AppNavigation from '../Navigation/AppNavigation'
import { connect } from 'react-redux'
import NavigationService from '../Services/NavigationService'
import { RootState, RootAction } from '../Redux/Types'
import TriggersActions from '../Redux/TriggersRedux'

// Styles
import styles from './Styles/RootContainerStyles'

type StateProps = {
  showOverlay: boolean
  monitorLocation: boolean
}

type DispatchProps = {
  locationUpdate: () => void
}

type Props = StateProps & DispatchProps

class RootContainer extends Component<Props> {

  // TODO: Move all this location handling out of here!!!

  handleNewPosition () {
    this.props.locationUpdate()
  }

  setupLocationMonitoring () {
    if (Platform.OS === 'android') {
      this.setupAndroid()
    } else {
      this.watchPosition()
    }
  }

  async setupAndroid() {
    const hasPermission = await PermissionsAndroid.checkPermission(PermissionsAndroid.PERMISSIONS.ACCESS_FINE_LOCATION)
    if (hasPermission) {
      this.watchPosition()
    }
  }

  watchPosition () {
    // Only watchPosition if the user has enabled it in settings
    if (this.props.monitorLocation) {
      navigator.geolocation.watchPosition(this.handleNewPosition.bind(this), undefined, { useSignificantChanges: true })
    }
  }

  componentDidMount () {
    this.setupLocationMonitoring()
  }

  render () {
    const barStyle = Platform.OS === 'ios' ? 'dark-content' : 'light-content'
    return (
      <View style={styles.applicationView}>
        <StatusBar barStyle={barStyle} />
        <AppNavigation ref={(navRef: NavigationContainerComponent) => { NavigationService.setTopLevelNavigator(navRef) }} />
        <Overlay
          isVisible={this.props.showOverlay}
          windowBackgroundColor='rgba(0, 0, 0, .1)'
          overlayBackgroundColor='rgba(0, 0, 0, .8)'
          borderRadius={8}
          width='auto'
          height='auto'
        >
          <ActivityIndicator size='large' color='#ffffff' />
        </Overlay>
      </View>
    )
  }
}

const mapStateToProps = (state: RootState): StateProps => {
  return {
    showOverlay: state.auth.processing,
    monitorLocation: state.preferences.services.backgroundLocation.status
  }
}

// wraps dispatch to create nicer functions to call within our component
const mapDispatchToProps = (dispatch: Dispatch<RootAction>): DispatchProps => ({
  locationUpdate: () => dispatch(TriggersActions.locationUpdate())
})

export default connect(mapStateToProps, mapDispatchToProps)(RootContainer)
