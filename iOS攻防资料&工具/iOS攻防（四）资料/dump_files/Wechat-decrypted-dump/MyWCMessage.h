//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface MyWCMessage : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned long _m_localId;
    unsigned long _m_type;
    unsigned long _m_source;
    unsigned long _m_flag;
    unsigned long _m_createTime;
    NSString *_m_id;
    NSString *_m_parentId;
    NSString *_m_fromUser;
    NSString *_m_fromNickname;
    NSString *_m_toUser;
    NSString *_m_toNickname;
    NSString *_m_content;
    NSData *_m_ref;
    NSData *_m_metaData;
    NSString *_m_commentId;
    NSString *_m_clientId;
    NSString *_m_comment64Id;
    unsigned long _m_commentFlag;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)m_commentFlag;
+ (const struct WCTProperty *)m_comment64Id;
+ (const struct WCTProperty *)m_clientId;
+ (const struct WCTProperty *)m_commentId;
+ (const struct WCTProperty *)m_metaData;
+ (const struct WCTProperty *)m_ref;
+ (const struct WCTProperty *)m_content;
+ (const struct WCTProperty *)m_toNickname;
+ (const struct WCTProperty *)m_toUser;
+ (const struct WCTProperty *)m_fromNickname;
+ (const struct WCTProperty *)m_fromUser;
+ (const struct WCTProperty *)m_parentId;
+ (const struct WCTProperty *)m_id;
+ (const struct WCTProperty *)m_createTime;
+ (const struct WCTProperty *)m_flag;
+ (const struct WCTProperty *)m_source;
+ (const struct WCTProperty *)m_type;
+ (const struct WCTProperty *)m_localId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long m_commentFlag; // @synthesize m_commentFlag=_m_commentFlag;
@property(retain, nonatomic) NSString *m_comment64Id; // @synthesize m_comment64Id=_m_comment64Id;
@property(retain, nonatomic) NSString *m_clientId; // @synthesize m_clientId=_m_clientId;
@property(retain, nonatomic) NSString *m_commentId; // @synthesize m_commentId=_m_commentId;
@property(retain, nonatomic) NSData *m_metaData; // @synthesize m_metaData=_m_metaData;
@property(retain, nonatomic) NSData *m_ref; // @synthesize m_ref=_m_ref;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content=_m_content;
@property(retain, nonatomic) NSString *m_toNickname; // @synthesize m_toNickname=_m_toNickname;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser=_m_toUser;
@property(retain, nonatomic) NSString *m_fromNickname; // @synthesize m_fromNickname=_m_fromNickname;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_parentId; // @synthesize m_parentId=_m_parentId;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned long m_createTime; // @synthesize m_createTime=_m_createTime;
@property(nonatomic) unsigned long m_flag; // @synthesize m_flag=_m_flag;
@property(nonatomic) unsigned long m_source; // @synthesize m_source=_m_source;
@property(nonatomic) unsigned long m_type; // @synthesize m_type=_m_type;
@property(nonatomic) unsigned long m_localId; // @synthesize m_localId=_m_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end

