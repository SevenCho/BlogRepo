//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCGIDelegate.h"

@class NSString, OpenIMSyncMgr;

@interface SyncCGI : NSObject <MMCGIDelegate>
{
    long long ct1;
    OpenIMSyncMgr *m_openIMSyncMgr;
    BOOL m_isStop;
    unsigned int _m_scene;
    unsigned int _m_selector;
    id <SyncCGIExt> _delegate;
}

@property id <SyncCGIExt> delegate; // @synthesize delegate=_delegate;
@property unsigned int m_selector; // @synthesize m_selector=_m_selector;
@property unsigned int m_scene; // @synthesize m_scene=_m_scene;
@property BOOL m_isStop; // @synthesize m_isStop;
- (void).cxx_destruct;
- (void)callSyncFail;
- (void)callSyncSuccAndContinue;
- (void)callSyncSucc;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (BOOL)shouldContinue:(id)arg1 withResponse:(id)arg2;
- (void)handleSyncOpLogOK:(id)arg1;
- (BOOL)handleSyncResponse:(id)arg1;
- (void)handleOpenIMSyncResponse:(id)arg1 sessionId:(unsigned int)arg2;
- (void)handleNewSyncResponse:(id)arg1 sessionId:(unsigned int)arg2;
- (void)doOpenIMSyncRequest;
- (void)doNewSyncRequest;
- (void)startSync;
- (void)OnReceiveNotifyData:(id)arg1;
- (void)FixOpenIMSync;
- (void)TimerSync;
- (void)ProcessStartSync;
- (void)BackGroundToForeGroundSync;
- (void)NeedToSync:(unsigned int)arg1;
- (void)Stop;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

