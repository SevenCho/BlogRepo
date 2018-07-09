//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAAppTaskReferrerInfo, WAAppTaskWebLaunchInfo, WAApptaskPluginResInfo, WAPageFlowAppInfo, WAPageFlowSessionInfo;

@interface WAAppTaskExtInfo : NSObject
{
    BOOL _beSpecificPage;
    BOOL _isRemoteMode;
    BOOL _ignoreDomain;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAApptaskPluginResInfo *_pluginResInfo;
    WAAppTaskWebLaunchInfo *_webLaunchInfo;
    NSString *_chatName;
    NSString *_shareKey;
    WAPageFlowAppInfo *_taskAppInfo;
    WAPageFlowSessionInfo *_taskSessionInfo;
    NSString *_opensdkAppID;
    NSString *_userName;
    NSString *_roomID;
    NSString *_pkgInfo;
    unsigned long _channelType;
    unsigned long _proxyPort;
    unsigned long _supportCompressAlgo;
}

@property(nonatomic) unsigned long supportCompressAlgo; // @synthesize supportCompressAlgo=_supportCompressAlgo;
@property(nonatomic) BOOL ignoreDomain; // @synthesize ignoreDomain=_ignoreDomain;
@property(nonatomic) unsigned long proxyPort; // @synthesize proxyPort=_proxyPort;
@property(nonatomic) unsigned long channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *pkgInfo; // @synthesize pkgInfo=_pkgInfo;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) BOOL isRemoteMode; // @synthesize isRemoteMode=_isRemoteMode;
@property(copy, nonatomic) NSString *opensdkAppID; // @synthesize opensdkAppID=_opensdkAppID;
@property(retain, nonatomic) WAPageFlowSessionInfo *taskSessionInfo; // @synthesize taskSessionInfo=_taskSessionInfo;
@property(retain, nonatomic) WAPageFlowAppInfo *taskAppInfo; // @synthesize taskAppInfo=_taskAppInfo;
@property(nonatomic) BOOL beSpecificPage; // @synthesize beSpecificPage=_beSpecificPage;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) WAAppTaskWebLaunchInfo *webLaunchInfo; // @synthesize webLaunchInfo=_webLaunchInfo;
@property(retain, nonatomic) WAApptaskPluginResInfo *pluginResInfo; // @synthesize pluginResInfo=_pluginResInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
- (void).cxx_destruct;

@end

