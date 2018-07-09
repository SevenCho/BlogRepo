//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUtility : NSObject
{
}

+ (BOOL)hasRetinaScreen;
+ (BOOL)isBeingDebugged;
+ (BOOL)isEnterpriseSingleUsrName:(id)arg1;
+ (BOOL)isArchivedUsrName:(id)arg1;
+ (BOOL)isEnterpriseUsrName:(id)arg1;
+ (id)IntToIPString:(unsigned int)arg1;
+ (id)SockAddrToIPV4String:(struct sockaddr_in *)arg1;
+ (unsigned int)IPStringToInt:(id)arg1;
+ (id)SafeUnarchiveFromData:(id)arg1;
+ (id)SafeUnarchive:(id)arg1 hasError:(char *)arg2;
+ (id)SafeUnarchive:(id)arg1;
+ (unsigned int)GenID;
+ (id)getCompressExtensionSet;
+ (id)getColorFromhexStr:(id)arg1;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)EncodeWithBase64:(id)arg1;
+ (id)DecodeBase64:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)EncodeBase64:(id)arg1;
+ (double)convertSizeToMB:(unsigned long long)arg1;
+ (long long)daysBetweenFrom:(id)arg1 To:(id)arg2;
+ (id)getShortStringByTime:(unsigned int)arg1;
+ (id)getFormatTimeWithUIntTime:(unsigned int)arg1;
+ (id)GetBuildTimeStamp;
+ (id)GetSystemTimeZoneString;
+ (unsigned int)GetCurrentTime;
+ (unsigned long long)GetCurrentTimeInMs;
+ (id)getAppNameCanOpenFile:(id)arg1;
+ (BOOL)isNumber:(id)arg1;
+ (BOOL)isEnglishWord:(id)arg1;
+ (id)transformToPinyin:(id)arg1;
+ (id)filterString:(id)arg1;
+ (id)trimString:(id)arg1;
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)HashData:(id)arg1;
+ (id)HashString:(id)arg1;
+ (id)ReplaceSingleQuote:(id)arg1;
+ (id)SafeUtf8WithCString:(const char *)arg1;
+ (char *)NewStrFromNSStr:(id)arg1;
+ (BOOL)HasWechatInstance;
+ (unsigned int)GetChannelNumber;
+ (id)GetRandomKeyWithSalt:(id)arg1;
+ (id)GetRandomKey;
+ (id)safeUnarchive:(id)arg1;
+ (id)GetUUID;
+ (id)GetRandomUUID;
+ (id)GetHashDeviceId;
+ (id)GetDeviceId;
+ (id)GetDeviceType;
+ (id)cgiVersionString;
+ (id)displayedVersionString;
+ (id)ParseFullVersionString:(unsigned int)arg1;
+ (id)ParseVersionString:(unsigned int)arg1;
+ (void)ParseVersion:(unsigned int)arg1 Major:(unsigned int *)arg2 Minor:(unsigned int *)arg3 Minorex:(unsigned int *)arg4;
+ (unsigned int)BuildNumber;
+ (unsigned int)GetVersion;
+ (id)mapsURLWithLatitude:(double)arg1 longitude:(double)arg2 provider:(unsigned long long)arg3;
+ (BOOL)appleMapsAvailable;
+ (void)ReloadSessionForMsgSync;
+ (void)ReloadMessageForMsgSync:(id)arg1;
+ (id)GetSessionNamesForMsgSync;
+ (unsigned int)GenerateSendMsgTime;
+ (id)GenFileTransferFailedMsg:(id)arg1 msgId:(long long)arg2 isDownload:(BOOL)arg3 fileName:(id)arg4;
+ (void)AddFileTransferFailedMsg:(id)arg1 msgId:(long long)arg2 isDownload:(BOOL)arg3 fileName:(id)arg4;
+ (void)AddGroupMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
+ (void)AddGroupCreateMsg:(id)arg1 ContactList:(id)arg2;
+ (BOOL)DeleteGroupMessage:(id)arg1;
+ (id)GenSelfContact;
+ (BOOL)hasChinese:(id)arg1;
+ (BOOL)IsIgnoreChar:(unsigned short)arg1;
+ (BOOL)IsEnChar:(unsigned short)arg1;
+ (BOOL)isEmoji:(id)arg1;
+ (BOOL)IsSameLanguage:(id)arg1;
+ (BOOL)IsSysRegionChina;
+ (id)GetRealCurSystemLanguage;
+ (id)GetCurSystemLanguage;
+ (id)IsSupportedLanguage:(id)arg1;
+ (id)obfuscate:(id)arg1 withKey:(id)arg2;
+ (unsigned long long)getTotalDiskSpace;
+ (id)getCurUsrMd5;
+ (unsigned long long)getFreeDiskSpace;
+ (unsigned int)genServerCurrentTime;
+ (void)updateDiffServerTime:(int)arg1;
+ (id)GetChatNameForMsgData:(id)arg1 Des:(unsigned int *)arg2;
+ (id)GenPushContactFromMsgData:(id)arg1;
+ (unsigned int)GetPushContactSceneFromMsg:(id)arg1;
+ (void)UpdateContactFromServer:(id)arg1;
+ (BOOL)GetStrangerContactsFromServer:(id)arg1;
+ (BOOL)GetContactsFromServer:(id)arg1;
+ (BOOL)RemoveChatContactForSession:(id)arg1;
+ (BOOL)ModifyContactImgStatus:(id)arg1 imgStatus:(id)arg2;
+ (id)GetContactList:(unsigned int)arg1 ContactType:(unsigned int)arg2;
+ (id)GetContactByUsrName:(id)arg1;
+ (id)GetContactAfterCheckExist:(id)arg1;
+ (id)GetContactForBackup:(id)arg1;
+ (id)GetContactForSession:(id)arg1;
+ (BOOL)IsContactExistForSession:(id)arg1;
+ (unsigned int)GetCurrentWeixinUin;
+ (unsigned int)GetCurrentQQUin;
+ (id)GetCurrentWeiboUserName;
+ (id)GetCurrentUserName;
+ (BOOL)IsSelfUserName:(id)arg1;
+ (id)GetPluginDisplayName:(id)arg1;
+ (BOOL)IsQQMailUserName:(id)arg1;
+ (BOOL)IsTencentNewsPlugin:(id)arg1;
+ (BOOL)IsWeiboContact:(id)arg1;
+ (BOOL)IsUnsupportSubscription:(id)arg1;
+ (BOOL)IsInChatTableBlacklist:(id)arg1;
+ (BOOL)IsEncodeUserName:(id)arg1;
+ (BOOL)IsPluginUsrName:(id)arg1;
+ (BOOL)IsLocalHardCodeContact:(id)arg1;
+ (BOOL)IsFileHelper:(id)arg1;
+ (BOOL)IsWeAppSessionHolder:(id)arg1;
+ (BOOL)IsTemplateMsgHolder:(id)arg1;
+ (BOOL)IsOfficialAccountFolder:(id)arg1;
+ (BOOL)IsBrandSessionHolder:(id)arg1;
+ (BOOL)IsWeixinTeamContact:(id)arg1;
+ (BOOL)IsWeiXinValidContact:(id)arg1;
+ (BOOL)IsWeiXinMsgContact:(id)arg1;
+ (id)PreHandleUserName:(id)arg1;
+ (BOOL)IsNormalContact:(id)arg1;
+ (unsigned int)GetChatNameType:(id)arg1;
+ (void)kernelRemoveAccountRelateService;
+ (void)kernelManualLogout;
+ (void)kernelInitService;
+ (void)kernelRegisterClsMethod;
+ (void)RemoveServiceOnPreAuthOK:(id)arg1;
+ (void)KernelRemoveUserPrivacyFilesWithUserName:(id)arg1;
+ (void)KernelRemoveUserFolderWithUserName:(id)arg1;
+ (void)KernelRemoveUserFolder;
+ (void)KernelRemoveMsgFolder;
+ (void)KernelClearKeyInfoData;
+ (void)KernelOnBackground;
+ (void)KernelOnForeground;
+ (void)KernelOnAppExit;
+ (void)KernelOnBeforeAppExit;
+ (void)KernelOnUserLogout;
+ (void)KernelOnAppInit;
+ (void)KernelOnAppLaunch;
+ (void)addSubView:(id)arg1 toViewStyleCenter:(id)arg2;
+ (void)CleanupAllMediaRes:(id)arg1;
+ (id)GetMsgLocalUsrName:(id)arg1;
+ (id)GetClientIDOfMsg:(id)arg1 LocalID:(unsigned int)arg2 Time:(unsigned int)arg3;
+ (void)OnDeleteContact_Thread:(id)arg1;
+ (void)OnModContacts_Thread:(id)arg1;
+ (id)GetMemberListDisplayName:(id)arg1;
+ (void)CopyLocalFieldToNewMemberContact:(id)arg1 oldContact:(id)arg2;
+ (void)CopyLocalFieldToNewContact:(id)arg1 oldContact:(id)arg2;
+ (id)GenContactDataFromModContact:(id)arg1;
+ (unsigned int)ChatNotifyC2S:(unsigned int)arg1;
+ (unsigned int)ChatNotifyS2C:(unsigned int)arg1;

@end

