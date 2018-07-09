//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface MMBetaInviteData : NSObject <WCTTableCoding>
{
    BOOL _hasAccepted;
    BOOL _isRead;
    unsigned long long _commitCount;
    NSString *_clientVersion;
    unsigned long long _scene;
    unsigned long long _expire;
    NSString *_inviteLink;
}

+ (const struct WCTProperty *)isRead;
+ (const struct WCTProperty *)hasAccepted;
+ (const struct WCTProperty *)inviteLink;
+ (const struct WCTProperty *)expire;
+ (const struct WCTProperty *)scene;
+ (const struct WCTProperty *)clientVersion;
+ (const struct WCTProperty *)commitCount;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) BOOL isRead; // @synthesize isRead=_isRead;
@property(nonatomic) BOOL hasAccepted; // @synthesize hasAccepted=_hasAccepted;
@property(retain, nonatomic) NSString *inviteLink; // @synthesize inviteLink=_inviteLink;
@property(nonatomic) unsigned long long expire; // @synthesize expire=_expire;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned long long commitCount; // @synthesize commitCount=_commitCount;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

