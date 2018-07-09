//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBFavoritesItem : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned long _localId;
    unsigned long _favId;
    unsigned long _type;
    unsigned long _time;
    unsigned long _status;
    unsigned long _updateSeq;
    unsigned long _localUpdateSeq;
    NSString *_fromUser;
    NSString *_toUser;
    NSString *_realChatName;
    unsigned long _sourceType;
    unsigned long _localStatus;
    NSString *_sourceId;
    NSString *_xml;
    unsigned long _dataTotalSize;
    unsigned long _IntRes2;
    unsigned long _IntRes3;
    NSString *_StrRes1;
    NSString *_StrRes2;
    NSString *_StrRes3;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)StrRes3;
+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)IntRes3;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)dataTotalSize;
+ (const struct WCTProperty *)xml;
+ (const struct WCTProperty *)sourceId;
+ (const struct WCTProperty *)localStatus;
+ (const struct WCTProperty *)sourceType;
+ (const struct WCTProperty *)realChatName;
+ (const struct WCTProperty *)toUser;
+ (const struct WCTProperty *)fromUser;
+ (const struct WCTProperty *)localUpdateSeq;
+ (const struct WCTProperty *)updateSeq;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)time;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)favId;
+ (const struct WCTProperty *)localId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3=_StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2=_StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1=_StrRes1;
@property(nonatomic) unsigned long IntRes3; // @synthesize IntRes3=_IntRes3;
@property(nonatomic) unsigned long IntRes2; // @synthesize IntRes2=_IntRes2;
@property(nonatomic) unsigned long dataTotalSize; // @synthesize dataTotalSize=_dataTotalSize;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned long localStatus; // @synthesize localStatus=_localStatus;
@property(nonatomic) unsigned long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(nonatomic) unsigned long localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned long updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned long status; // @synthesize status=_status;
@property(nonatomic) unsigned long time; // @synthesize time=_time;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
@property(nonatomic) unsigned long favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned long localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end

