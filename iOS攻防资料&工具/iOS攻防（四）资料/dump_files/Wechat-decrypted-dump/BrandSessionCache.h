//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@interface BrandSessionCache : NSObject
{
    BOOL hasNewArrival;
    NSString *latestMsgOwner;
    unsigned long unreadCount;
    BOOL showUnReadAsRedDot;
    unsigned long lastMsgTime;
    unsigned long starMsgCount;
    unsigned long massSendMsgCount;
    unsigned long notifyMsgCount;
    unsigned long notifyFlag;
    CMessageWrap *latestMsg;
}

@property(retain, nonatomic) CMessageWrap *latestMsg; // @synthesize latestMsg;
@property(nonatomic) unsigned long notifyFlag; // @synthesize notifyFlag;
@property(nonatomic) unsigned long notifyMsgCount; // @synthesize notifyMsgCount;
@property(nonatomic) unsigned long massSendMsgCount; // @synthesize massSendMsgCount;
@property(nonatomic) unsigned long starMsgCount; // @synthesize starMsgCount;
@property(nonatomic) unsigned long lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) BOOL showUnReadAsRedDot; // @synthesize showUnReadAsRedDot;
@property(nonatomic) unsigned long unreadCount; // @synthesize unreadCount;
@property(copy, nonatomic) NSString *latestMsgOwner; // @synthesize latestMsgOwner;
@property(nonatomic) BOOL hasNewArrival; // @synthesize hasNewArrival;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

