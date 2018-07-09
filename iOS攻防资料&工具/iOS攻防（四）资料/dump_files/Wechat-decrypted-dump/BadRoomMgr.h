//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMNewSessionMgrExt.h"
#import "INewSyncExt.h"
#import "MMService.h"
#import "MessageDBExt.h"

@class NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface BadRoomMgr : MMService <MessageDBExt, IMMNewSessionMgrExt, INewSyncExt, MMService>
{
    NSObject<OS_dispatch_queue> *m_updateDigestQueue;
    NSRecursiveLock *_m_oLock;
}

@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
- (void).cxx_destruct;
- (id)HandleSysMsg:(id)arg1 revokeMsgId:(long long *)arg2;
- (void)notifyWithData:(id)arg1;
- (void)onWillDeleteSession:(id)arg1;
- (void)onDeleteBadRoomMsg:(long long)arg1 createTime:(unsigned long)arg2 chatName:(id)arg3;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)onDeleteBrokenMsg:(unsigned long)arg1 chatName:(id)arg2;
- (void)updateSessionInfos:(id)arg1;
- (id)genSessionByDigest:(id)arg1;
- (id)convertDataToDigest:(id)arg1;
- (void)batchHandleDigestDatas:(id)arg1;
- (void)onNewSyncBadRoomBatchHandleDigest:(id)arg1;
- (void)onNewSyncBadRoomClearUnread:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (void)saveDeleteMsg:(id)arg1;
- (id)loadDeleteMsg;
- (id)getPBPath;
- (void)AddDeletedMsg:(long long)arg1 createTime:(unsigned long)arg2;
- (BOOL)existsInDeletedMsg:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

