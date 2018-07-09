//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetReportStrategyReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasDeviceModel:1;
    unsigned int hasDeviceBrand:1;
    unsigned int hasOsName:1;
    unsigned int hasOsVersion:1;
    unsigned int hasLanguageVer:1;
    unsigned int hasLogid:1;
    int logid;
    BaseRequest *baseRequest;
    NSString *deviceModel;
    NSString *deviceBrand;
    NSString *osName;
    NSString *osVersion;
    NSString *languageVer;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetLogid:) int logid; // @synthesize logid;
@property(readonly, nonatomic) BOOL hasLogid; // @synthesize hasLogid;
@property(retain, nonatomic, setter=SetLanguageVer:) NSString *languageVer; // @synthesize languageVer;
@property(readonly, nonatomic) BOOL hasLanguageVer; // @synthesize hasLanguageVer;
@property(retain, nonatomic, setter=SetOsVersion:) NSString *osVersion; // @synthesize osVersion;
@property(readonly, nonatomic) BOOL hasOsVersion; // @synthesize hasOsVersion;
@property(retain, nonatomic, setter=SetOsName:) NSString *osName; // @synthesize osName;
@property(readonly, nonatomic) BOOL hasOsName; // @synthesize hasOsName;
@property(retain, nonatomic, setter=SetDeviceBrand:) NSString *deviceBrand; // @synthesize deviceBrand;
@property(readonly, nonatomic) BOOL hasDeviceBrand; // @synthesize hasDeviceBrand;
@property(retain, nonatomic, setter=SetDeviceModel:) NSString *deviceModel; // @synthesize deviceModel;
@property(readonly, nonatomic) BOOL hasDeviceModel; // @synthesize hasDeviceModel;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

