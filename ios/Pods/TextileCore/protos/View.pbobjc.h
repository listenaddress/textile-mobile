// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: view.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class AddThreadConfig_Schema;
@class Comment;
@class Directory;
@class FeedItem;
@class File;
@class FileIndex;
@class Files;
@class GPBAny;
@class GPBTimestamp;
@class InviteView;
@class Like;
@class Link;
@class Text;
@class User;
GPB_ENUM_FWD_DECLARE(Thread_Sharing);
GPB_ENUM_FWD_DECLARE(Thread_Type);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum AddThreadConfig_Schema_Preset

typedef GPB_ENUM(AddThreadConfig_Schema_Preset) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  AddThreadConfig_Schema_Preset_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  AddThreadConfig_Schema_Preset_None = 0,
  AddThreadConfig_Schema_Preset_Blob = 1,
  AddThreadConfig_Schema_Preset_CameraRoll = 2,
  AddThreadConfig_Schema_Preset_Media = 3,
};

GPBEnumDescriptor *AddThreadConfig_Schema_Preset_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL AddThreadConfig_Schema_Preset_IsValidValue(int32_t value);

#pragma mark - Enum FeedRequest_Mode

typedef GPB_ENUM(FeedRequest_Mode) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  FeedRequest_Mode_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  FeedRequest_Mode_Chrono = 0,
  FeedRequest_Mode_Annotated = 1,
  FeedRequest_Mode_Stacks = 2,
};

GPBEnumDescriptor *FeedRequest_Mode_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL FeedRequest_Mode_IsValidValue(int32_t value);

#pragma mark - Enum WalletUpdate_Type

typedef GPB_ENUM(WalletUpdate_Type) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  WalletUpdate_Type_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  WalletUpdate_Type_ThreadAdded = 0,
  WalletUpdate_Type_ThreadRemoved = 1,
  WalletUpdate_Type_AccountPeerAdded = 2,
  WalletUpdate_Type_AccountPeerRemoved = 3,
};

GPBEnumDescriptor *WalletUpdate_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL WalletUpdate_Type_IsValidValue(int32_t value);

#pragma mark - Enum LogLevel_Level

typedef GPB_ENUM(LogLevel_Level) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  LogLevel_Level_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  LogLevel_Level_Critical = 0,
  LogLevel_Level_Error = 1,
  LogLevel_Level_Warning = 2,
  LogLevel_Level_Notice = 3,
  LogLevel_Level_Info = 4,
  LogLevel_Level_Debug = 5,
};

GPBEnumDescriptor *LogLevel_Level_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL LogLevel_Level_IsValidValue(int32_t value);

#pragma mark - ViewRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ViewRoot : GPBRootObject
@end

#pragma mark - AddThreadConfig

typedef GPB_ENUM(AddThreadConfig_FieldNumber) {
  AddThreadConfig_FieldNumber_Key = 1,
  AddThreadConfig_FieldNumber_Name = 2,
  AddThreadConfig_FieldNumber_Schema = 3,
  AddThreadConfig_FieldNumber_Type = 4,
  AddThreadConfig_FieldNumber_Sharing = 5,
  AddThreadConfig_FieldNumber_MembersArray = 6,
  AddThreadConfig_FieldNumber_Force = 7,
};

@interface AddThreadConfig : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, strong, null_resettable) AddThreadConfig_Schema *schema;
/** Test to see if @c schema has been set. */
@property(nonatomic, readwrite) BOOL hasSchema;

@property(nonatomic, readwrite) enum Thread_Type type;

@property(nonatomic, readwrite) enum Thread_Sharing sharing;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *membersArray;
/** The number of items in @c membersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger membersArray_Count;

/** force key by auto-incrementing */
@property(nonatomic, readwrite) BOOL force;

@end

/**
 * Fetches the raw value of a @c AddThreadConfig's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t AddThreadConfig_Type_RawValue(AddThreadConfig *message);
/**
 * Sets the raw value of an @c AddThreadConfig's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAddThreadConfig_Type_RawValue(AddThreadConfig *message, int32_t value);

/**
 * Fetches the raw value of a @c AddThreadConfig's @c sharing property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t AddThreadConfig_Sharing_RawValue(AddThreadConfig *message);
/**
 * Sets the raw value of an @c AddThreadConfig's @c sharing property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAddThreadConfig_Sharing_RawValue(AddThreadConfig *message, int32_t value);

#pragma mark - AddThreadConfig_Schema

typedef GPB_ENUM(AddThreadConfig_Schema_FieldNumber) {
  AddThreadConfig_Schema_FieldNumber_Id_p = 1,
  AddThreadConfig_Schema_FieldNumber_Json = 2,
  AddThreadConfig_Schema_FieldNumber_Preset = 3,
};

@interface AddThreadConfig_Schema : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *json;

@property(nonatomic, readwrite) AddThreadConfig_Schema_Preset preset;

@end

/**
 * Fetches the raw value of a @c AddThreadConfig_Schema's @c preset property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t AddThreadConfig_Schema_Preset_RawValue(AddThreadConfig_Schema *message);
/**
 * Sets the raw value of an @c AddThreadConfig_Schema's @c preset property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAddThreadConfig_Schema_Preset_RawValue(AddThreadConfig_Schema *message, int32_t value);

#pragma mark - Step

typedef GPB_ENUM(Step_FieldNumber) {
  Step_FieldNumber_Name = 1,
  Step_FieldNumber_Link = 2,
};

@interface Step : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, strong, null_resettable) Link *link;
/** Test to see if @c link has been set. */
@property(nonatomic, readwrite) BOOL hasLink;

@end

#pragma mark - Directory

typedef GPB_ENUM(Directory_FieldNumber) {
  Directory_FieldNumber_Files = 1,
};

@interface Directory : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, FileIndex*> *files;
/** The number of items in @c files without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger files_Count;

@end

#pragma mark - DirectoryList

typedef GPB_ENUM(DirectoryList_FieldNumber) {
  DirectoryList_FieldNumber_ItemsArray = 1,
};

@interface DirectoryList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Directory*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

#pragma mark - Keys

typedef GPB_ENUM(Keys_FieldNumber) {
  Keys_FieldNumber_Files = 1,
};

@interface Keys : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, NSString*> *files;
/** The number of items in @c files without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger files_Count;

@end

#pragma mark - NewInvite

typedef GPB_ENUM(NewInvite_FieldNumber) {
  NewInvite_FieldNumber_Id_p = 1,
  NewInvite_FieldNumber_Key = 2,
  NewInvite_FieldNumber_Inviter = 3,
};

@interface NewInvite : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readwrite, copy, null_resettable) NSString *inviter;

@end

#pragma mark - InviteView

typedef GPB_ENUM(InviteView_FieldNumber) {
  InviteView_FieldNumber_Id_p = 1,
  InviteView_FieldNumber_Name = 2,
  InviteView_FieldNumber_Inviter = 3,
  InviteView_FieldNumber_Date = 4,
};

@interface InviteView : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, strong, null_resettable) User *inviter;
/** Test to see if @c inviter has been set. */
@property(nonatomic, readwrite) BOOL hasInviter;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@end

#pragma mark - InviteViewList

typedef GPB_ENUM(InviteViewList_FieldNumber) {
  InviteViewList_FieldNumber_ItemsArray = 1,
};

@interface InviteViewList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<InviteView*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

#pragma mark - FeedRequest

typedef GPB_ENUM(FeedRequest_FieldNumber) {
  FeedRequest_FieldNumber_Thread = 1,
  FeedRequest_FieldNumber_Offset = 2,
  FeedRequest_FieldNumber_Limit = 3,
  FeedRequest_FieldNumber_Mode = 4,
};

@interface FeedRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *thread;

@property(nonatomic, readwrite, copy, null_resettable) NSString *offset;

@property(nonatomic, readwrite) int32_t limit;

@property(nonatomic, readwrite) FeedRequest_Mode mode;

@end

/**
 * Fetches the raw value of a @c FeedRequest's @c mode property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t FeedRequest_Mode_RawValue(FeedRequest *message);
/**
 * Sets the raw value of an @c FeedRequest's @c mode property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetFeedRequest_Mode_RawValue(FeedRequest *message, int32_t value);

#pragma mark - FeedItem

typedef GPB_ENUM(FeedItem_FieldNumber) {
  FeedItem_FieldNumber_Block = 1,
  FeedItem_FieldNumber_Thread = 2,
  FeedItem_FieldNumber_Payload = 3,
};

@interface FeedItem : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, copy, null_resettable) NSString *thread;

@property(nonatomic, readwrite, strong, null_resettable) GPBAny *payload;
/** Test to see if @c payload has been set. */
@property(nonatomic, readwrite) BOOL hasPayload;

@end

#pragma mark - FeedItemList

typedef GPB_ENUM(FeedItemList_FieldNumber) {
  FeedItemList_FieldNumber_ItemsArray = 1,
  FeedItemList_FieldNumber_Count = 2,
  FeedItemList_FieldNumber_Next = 3,
};

@interface FeedItemList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FeedItem*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@property(nonatomic, readwrite) int32_t count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *next;

@end

#pragma mark - Merge

typedef GPB_ENUM(Merge_FieldNumber) {
  Merge_FieldNumber_Block = 1,
  Merge_FieldNumber_Date = 2,
  Merge_FieldNumber_User = 3,
  Merge_FieldNumber_TargetsArray = 4,
};

@interface Merge : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FeedItem*> *targetsArray;
/** The number of items in @c targetsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger targetsArray_Count;

@end

#pragma mark - Ignore

typedef GPB_ENUM(Ignore_FieldNumber) {
  Ignore_FieldNumber_Block = 1,
  Ignore_FieldNumber_Date = 2,
  Ignore_FieldNumber_User = 3,
  Ignore_FieldNumber_Target = 4,
};

@interface Ignore : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) FeedItem *target;
/** Test to see if @c target has been set. */
@property(nonatomic, readwrite) BOOL hasTarget;

@end

#pragma mark - Flag

typedef GPB_ENUM(Flag_FieldNumber) {
  Flag_FieldNumber_Block = 1,
  Flag_FieldNumber_Date = 2,
  Flag_FieldNumber_User = 3,
  Flag_FieldNumber_Target = 4,
};

@interface Flag : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) FeedItem *target;
/** Test to see if @c target has been set. */
@property(nonatomic, readwrite) BOOL hasTarget;

@end

#pragma mark - Join

typedef GPB_ENUM(Join_FieldNumber) {
  Join_FieldNumber_Block = 1,
  Join_FieldNumber_Date = 2,
  Join_FieldNumber_User = 3,
  Join_FieldNumber_LikesArray = 4,
};

@interface Join : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Like*> *likesArray;
/** The number of items in @c likesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger likesArray_Count;

@end

#pragma mark - Announce

typedef GPB_ENUM(Announce_FieldNumber) {
  Announce_FieldNumber_Block = 1,
  Announce_FieldNumber_Date = 2,
  Announce_FieldNumber_User = 3,
};

@interface Announce : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@end

#pragma mark - Leave

typedef GPB_ENUM(Leave_FieldNumber) {
  Leave_FieldNumber_Block = 1,
  Leave_FieldNumber_Date = 2,
  Leave_FieldNumber_User = 3,
  Leave_FieldNumber_LikesArray = 4,
};

@interface Leave : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Like*> *likesArray;
/** The number of items in @c likesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger likesArray_Count;

@end

#pragma mark - Text

typedef GPB_ENUM(Text_FieldNumber) {
  Text_FieldNumber_Block = 1,
  Text_FieldNumber_Date = 2,
  Text_FieldNumber_User = 3,
  Text_FieldNumber_Body = 4,
  Text_FieldNumber_CommentsArray = 5,
  Text_FieldNumber_LikesArray = 6,
};

@interface Text : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, copy, null_resettable) NSString *body;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Comment*> *commentsArray;
/** The number of items in @c commentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger commentsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Like*> *likesArray;
/** The number of items in @c likesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger likesArray_Count;

@end

#pragma mark - TextList

typedef GPB_ENUM(TextList_FieldNumber) {
  TextList_FieldNumber_ItemsArray = 1,
};

@interface TextList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Text*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

#pragma mark - File

typedef GPB_ENUM(File_FieldNumber) {
  File_FieldNumber_Index = 1,
  File_FieldNumber_File = 2,
  File_FieldNumber_Links = 3,
};

@interface File : GPBMessage

@property(nonatomic, readwrite) int32_t index;

@property(nonatomic, readwrite, strong, null_resettable) FileIndex *file;
/** Test to see if @c file has been set. */
@property(nonatomic, readwrite) BOOL hasFile;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, FileIndex*> *links;
/** The number of items in @c links without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger links_Count;

@end

#pragma mark - Files

typedef GPB_ENUM(Files_FieldNumber) {
  Files_FieldNumber_Block = 1,
  Files_FieldNumber_Target = 2,
  Files_FieldNumber_Date = 3,
  Files_FieldNumber_User = 4,
  Files_FieldNumber_Caption = 5,
  Files_FieldNumber_FilesArray = 6,
  Files_FieldNumber_CommentsArray = 7,
  Files_FieldNumber_LikesArray = 8,
  Files_FieldNumber_ThreadsArray = 9,
};

@interface Files : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *block;

@property(nonatomic, readwrite, copy, null_resettable) NSString *target;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, copy, null_resettable) NSString *caption;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<File*> *filesArray;
/** The number of items in @c filesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger filesArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Comment*> *commentsArray;
/** The number of items in @c commentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger commentsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Like*> *likesArray;
/** The number of items in @c likesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger likesArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *threadsArray;
/** The number of items in @c threadsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger threadsArray_Count;

@end

#pragma mark - FilesList

typedef GPB_ENUM(FilesList_FieldNumber) {
  FilesList_FieldNumber_ItemsArray = 1,
};

@interface FilesList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Files*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

#pragma mark - Comment

typedef GPB_ENUM(Comment_FieldNumber) {
  Comment_FieldNumber_Id_p = 1,
  Comment_FieldNumber_Date = 2,
  Comment_FieldNumber_User = 3,
  Comment_FieldNumber_Body = 4,
  Comment_FieldNumber_Target = 5,
};

@interface Comment : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, copy, null_resettable) NSString *body;

@property(nonatomic, readwrite, strong, null_resettable) FeedItem *target;
/** Test to see if @c target has been set. */
@property(nonatomic, readwrite) BOOL hasTarget;

@end

#pragma mark - CommentList

typedef GPB_ENUM(CommentList_FieldNumber) {
  CommentList_FieldNumber_ItemsArray = 1,
};

@interface CommentList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Comment*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

#pragma mark - Like

typedef GPB_ENUM(Like_FieldNumber) {
  Like_FieldNumber_Id_p = 1,
  Like_FieldNumber_Date = 2,
  Like_FieldNumber_User = 3,
  Like_FieldNumber_Target = 4,
};

@interface Like : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *date;
/** Test to see if @c date has been set. */
@property(nonatomic, readwrite) BOOL hasDate;

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) FeedItem *target;
/** Test to see if @c target has been set. */
@property(nonatomic, readwrite) BOOL hasTarget;

@end

#pragma mark - LikeList

typedef GPB_ENUM(LikeList_FieldNumber) {
  LikeList_FieldNumber_ItemsArray = 1,
};

@interface LikeList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Like*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

#pragma mark - WalletUpdate

typedef GPB_ENUM(WalletUpdate_FieldNumber) {
  WalletUpdate_FieldNumber_Id_p = 1,
  WalletUpdate_FieldNumber_Key = 2,
  WalletUpdate_FieldNumber_Type = 3,
};

@interface WalletUpdate : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readwrite) WalletUpdate_Type type;

@end

/**
 * Fetches the raw value of a @c WalletUpdate's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t WalletUpdate_Type_RawValue(WalletUpdate *message);
/**
 * Sets the raw value of an @c WalletUpdate's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetWalletUpdate_Type_RawValue(WalletUpdate *message, int32_t value);

#pragma mark - Summary

typedef GPB_ENUM(Summary_FieldNumber) {
  Summary_FieldNumber_AccountPeerCount = 1,
  Summary_FieldNumber_ThreadCount = 2,
  Summary_FieldNumber_FileCount = 3,
  Summary_FieldNumber_ContactCount = 4,
};

@interface Summary : GPBMessage

@property(nonatomic, readwrite) int32_t accountPeerCount;

@property(nonatomic, readwrite) int32_t threadCount;

@property(nonatomic, readwrite) int32_t fileCount;

@property(nonatomic, readwrite) int32_t contactCount;

@end

#pragma mark - LogLevel

typedef GPB_ENUM(LogLevel_FieldNumber) {
  LogLevel_FieldNumber_Systems = 1,
};

@interface LogLevel : GPBMessage

// |systems| values are |LogLevel_Level|
@property(nonatomic, readwrite, strong, null_resettable) GPBStringEnumDictionary *systems;
/** The number of items in @c systems without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger systems_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
