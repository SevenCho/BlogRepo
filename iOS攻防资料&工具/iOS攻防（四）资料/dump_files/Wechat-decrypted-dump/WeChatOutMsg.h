//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "WCTTableCoding.h"

@class NSString;

@interface WeChatOutMsg : MMObject <WCTTableCoding, NSCopying>
{
    BOOL isAutoIncrement;
    unsigned long localID;
    unsigned long createTime;
    unsigned long readStatus;
    unsigned long wcoMsgType;
    NSString *title;
    NSString *content;
    unsigned long pushTime;
    long reserve1;
    unsigned long reserve2;
    NSString *reserve3;
    NSString *reserve4;
    unsigned long long svrID;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)reserve4;
+ (const struct WCTProperty *)reserve3;
+ (const struct WCTProperty *)reserve2;
+ (const struct WCTProperty *)reserve1;
+ (const struct WCTProperty *)pushTime;
+ (const struct WCTProperty *)content;
+ (const struct WCTProperty *)title;
+ (const struct WCTProperty *)wcoMsgType;
+ (const struct WCTProperty *)readStatus;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)svrID;
+ (const struct WCTProperty *)localID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSString *reserve4; // @synthesize reserve4;
@property(retain, nonatomic) NSString *reserve3; // @synthesize reserve3;
@property(nonatomic) unsigned long reserve2; // @synthesize reserve2;
@property(nonatomic) long reserve1; // @synthesize reserve1;
@property(nonatomic) unsigned long pushTime; // @synthesize pushTime;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned long wcoMsgType; // @synthesize wcoMsgType;
@property(nonatomic) unsigned long readStatus; // @synthesize readStatus;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
@property(nonatomic) unsigned long long svrID; // @synthesize svrID;
@property(nonatomic) unsigned long localID; // @synthesize localID;
- (void).cxx_destruct;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

