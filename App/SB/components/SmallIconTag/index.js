import React from 'react'
import { View, Text } from 'react-native'
import styles from './statics/styles'
import Avatar from '../../../Components/Avatar'

const SmallIconTag = props => {
  const { text, avatar, textStyle, avatarStyle, style } = props
  return (
    <View style={[styles.detail, style]}>
      <Avatar style={{ ...avatarStyle, width: 27, height: 27 }} target={avatar} />
      <View style={[styles.detailTextView]}>
        <Text style={[styles.detailText, textStyle]}>{text}</Text>
      </View>
    </View>
  )
}

export default SmallIconTag
