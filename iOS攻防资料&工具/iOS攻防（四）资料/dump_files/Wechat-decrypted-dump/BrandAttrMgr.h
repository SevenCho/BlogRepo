//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IMsgExt.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class BizAttrSyncCtrl, NSMutableDictionary, NSString;

@interface BrandAttrMgr : MMService <IContactMgrExt, MMService, PBMessageObserverDelegate, IMsgExt, MMConfigMgrExt>
{
    NSMutableDictionary *_syncBufList;
    BizAttrSyncCtrl *_syncCtrl;
}

- (void).cxx_destruct;
- (void)loadCtrlInfo;
- (void)saveCtrlInfo;
- (void)tryLoadSyncCtrl;
- (void)loadBufCache;
- (void)saveBufCache;
- (void)tryLoadSyncBufList;
- (void)deleteSyncBufferWithBrandUserNameList:(id)arg1;
- (void)deleteSyncBuf:(id)arg1;
- (void)updateBrandContact:(id)arg1 withSyncBuf:(id)arg2;
- (void)onDeleteContact:(id)arg1;
- (unsigned long long)loadRequestIntervalFromDynamicConfig;
- (void)onMMDynamicConfigUpdated;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onFetchBizProfile:(id)arg1;
- (BOOL)fetchBizProfile:(id)arg1;
- (void)onGetContactByNewAttrCGI:(id)arg1;
- (BOOL)getBrandInfoByNewAttrCGI:(id)arg1;
- (BOOL)shouldUseNewAttrCGIToUpdate:(id)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

