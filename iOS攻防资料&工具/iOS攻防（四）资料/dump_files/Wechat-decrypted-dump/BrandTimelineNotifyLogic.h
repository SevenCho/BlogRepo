//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "BrandTimelineMsgMgrExt.h"

@class CMessageWrap;

@interface BrandTimelineNotifyLogic : MMObject <BrandTimelineMsgMgrExt>
{
    id <BrandTimelineNotifyLogicDelegate> _delegate;
    unsigned long _notifyCount;
    CMessageWrap *_latestMsgWrap;
}

@property(readonly, nonatomic) CMessageWrap *latestMsgWrap; // @synthesize latestMsgWrap=_latestMsgWrap;
@property(readonly, nonatomic) unsigned long notifyCount; // @synthesize notifyCount=_notifyCount;
@property(nonatomic) __weak id <BrandTimelineNotifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNotificationUnreadCountChange;
- (id)init;
- (void)dealloc;

@end

