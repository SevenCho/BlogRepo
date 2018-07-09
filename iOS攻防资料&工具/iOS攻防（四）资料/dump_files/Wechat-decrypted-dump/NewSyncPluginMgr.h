//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "INewSyncExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface NewSyncPluginMgr : MMService <INewSyncExt, MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_dicSelectorList;
    NSRecursiveLock *m_oMgrLock;
}

@property(retain, nonatomic) NSMutableDictionary *m_dicSelectorList; // @synthesize m_dicSelectorList;
- (void).cxx_destruct;
- (void)onNewSyncPlugin:(unsigned long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)CheckSelector:(unsigned long)arg1 Request:(id)arg2;
- (void)MergeKeyBufferByType:(unsigned long)arg1 Buffer:(id)arg2;
- (id)GetKeyBufferByType:(unsigned long)arg1;
- (BOOL)IsMd5Different:(unsigned long)arg1 Md5:(id)arg2;
- (void)SetSyncKeyMd5BySelector:(unsigned long)arg1 Md5:(id)arg2;
- (id)GetSyncWrapBySelector:(unsigned long)arg1;
- (unsigned long)GetCgiBySelector:(unsigned long)arg1;
- (unsigned long)GetSelectorByCgi:(unsigned long)arg1;
- (void)SetContinueFlag:(BOOL)arg1 Selector:(unsigned long)arg2;
- (void)SetSyncIngFlag:(BOOL)arg1 Selector:(unsigned long)arg2;
- (BOOL)IsSelectorContinue:(unsigned long)arg1;
- (BOOL)IsSelectorSyncIng:(unsigned long)arg1;
- (void)ResetNewSyncWrap:(unsigned long)arg1;
- (void)InitSelectorList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

