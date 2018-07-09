//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface ServiceAppData : MMObject <PBCoding>
{
    NSString *_appID;
    NSString *_appName;
    NSString *_appNameEn;
    NSString *_appNameTW;
    NSString *_appNameHK;
    NSString *_appIconUrlAttView;
    NSString *_appIconUrlListView;
    NSString *_appForwardUrl;
    unsigned long _appType;
    unsigned long _appInfoFlag;
    unsigned long _appJumpType;
    unsigned long _appShowFlag;
    BOOL _appNotShowNew;
    BOOL appNotShowNew;
    NSString *appID;
    NSString *appName;
    NSString *appNameEn;
    NSString *appNameTW;
    NSString *appIconUrlAttView;
    NSString *appForwardUrl;
    unsigned long appType;
    unsigned long appInfoFlag;
    NSString *appIconUrlListView;
    unsigned long appJumpType;
    unsigned long appShowFlag;
    NSString *appNameHK;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *appNameHK; // @synthesize appNameHK;
@property(nonatomic) unsigned long appShowFlag; // @synthesize appShowFlag;
@property(nonatomic) unsigned long appJumpType; // @synthesize appJumpType;
@property(nonatomic) BOOL appNotShowNew; // @synthesize appNotShowNew;
@property(retain, nonatomic) NSString *appIconUrlListView; // @synthesize appIconUrlListView;
@property(nonatomic) unsigned long appInfoFlag; // @synthesize appInfoFlag;
@property(nonatomic) unsigned long appType; // @synthesize appType;
@property(retain, nonatomic) NSString *appForwardUrl; // @synthesize appForwardUrl;
@property(retain, nonatomic) NSString *appIconUrlAttView; // @synthesize appIconUrlAttView;
@property(retain, nonatomic) NSString *appNameTW; // @synthesize appNameTW;
@property(retain, nonatomic) NSString *appNameEn; // @synthesize appNameEn;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
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

