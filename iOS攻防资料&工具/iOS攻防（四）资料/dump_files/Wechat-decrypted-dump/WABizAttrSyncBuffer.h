//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface WABizAttrSyncBuffer : NSObject <WCTTableCoding>
{
    NSString *_userName;
    unsigned long _lastUpdateTime;
    NSData *_version;
}

+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)lastUpdateTime;
+ (const struct WCTProperty *)userName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(nonatomic) unsigned long lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

