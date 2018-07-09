//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface ChatroomMuteExptDBItem : MMObject <WCTTableCoding>
{
    NSString *_chatroomName;
    NSString *_daySec;
    NSString *_nickName;
    unsigned long _isMute;
    unsigned long _unReadCount;
    unsigned long _sendCount;
    unsigned long _enterCount;
    unsigned long _disRedDotCount;
    unsigned long _stayTime;
    float _score;
}

+ (const struct WCTProperty *)score;
+ (const struct WCTProperty *)stayTime;
+ (const struct WCTProperty *)disRedDotCount;
+ (const struct WCTProperty *)enterCount;
+ (const struct WCTProperty *)sendCount;
+ (const struct WCTProperty *)unReadCount;
+ (const struct WCTProperty *)isMute;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)daySec;
+ (const struct WCTProperty *)chatroomName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) unsigned long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned long disRedDotCount; // @synthesize disRedDotCount=_disRedDotCount;
@property(nonatomic) unsigned long enterCount; // @synthesize enterCount=_enterCount;
@property(nonatomic) unsigned long sendCount; // @synthesize sendCount=_sendCount;
@property(nonatomic) unsigned long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) unsigned long isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *daySec; // @synthesize daySec=_daySec;
@property(retain, nonatomic) NSString *chatroomName; // @synthesize chatroomName=_chatroomName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

