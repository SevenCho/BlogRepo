//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAAppItemOperation : MMObject <PBCoding>
{
    BOOL _excuteSync;
    BOOL _isOperating;
    NSString *usrname;
    unsigned long appType;
    unsigned long opType;
    unsigned long retryCount;
    unsigned long scene;
    unsigned long isFromBackground;
    unsigned long recordType;
    unsigned long _reason;
    NSString *_sessionId;
    NSString *_appMd5Str;
}

+ (void)initialize;
@property(nonatomic) BOOL isOperating; // @synthesize isOperating=_isOperating;
@property(nonatomic) BOOL excuteSync; // @synthesize excuteSync=_excuteSync;
@property(copy, nonatomic) NSString *appMd5Str; // @synthesize appMd5Str=_appMd5Str;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long recordType; // @synthesize recordType;
@property(nonatomic) unsigned long isFromBackground; // @synthesize isFromBackground;
@property(nonatomic) unsigned long scene; // @synthesize scene;
@property(nonatomic) unsigned long retryCount; // @synthesize retryCount;
@property(nonatomic) unsigned long opType; // @synthesize opType;
@property(nonatomic) unsigned long appType; // @synthesize appType;
@property(copy, nonatomic) NSString *usrname; // @synthesize usrname;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

