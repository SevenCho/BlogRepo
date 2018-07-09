//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface AuthAppItem : NSObject <PBCoding>
{
    NSString *appID;
    NSString *appIconURL;
    NSString *appTypeList;
    NSString *appName;
    int appSettingFlag;
    NSString *devInfo;
    NSString *authInfo;
    NSString *extInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(retain, nonatomic) NSString *authInfo; // @synthesize authInfo;
@property(retain, nonatomic) NSString *devInfo; // @synthesize devInfo;
@property(nonatomic) int appSettingFlag; // @synthesize appSettingFlag;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *appTypeList; // @synthesize appTypeList;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

