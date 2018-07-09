//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "INewABTestLogicExt.h"
#import "MMService.h"

@class NSMutableArray, NSString;

@interface NewABTestMgr : MMService <INewABTestLogicExt, MMService>
{
    BOOL _bABTestCacheLoaded;
    unsigned int _uiNextUpdateTime;
    NSMutableArray *_aryABTestList;
}

+ (void)LazyRegisterExtension;
@property(nonatomic) BOOL bABTestCacheLoaded; // @synthesize bABTestCacheLoaded=_bABTestCacheLoaded;
@property(nonatomic) unsigned int uiNextUpdateTime; // @synthesize uiNextUpdateTime=_uiNextUpdateTime;
@property(retain, nonatomic) NSMutableArray *aryABTestList; // @synthesize aryABTestList=_aryABTestList;
- (void).cxx_destruct;
- (id)getExpItemsArray;
- (void)onGetABTestItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(BOOL)arg3;
- (void)getABTestItemsForRequest:(id)arg1;
- (void)dealloc;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)handleNewABTestList:(id)arg1;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (BOOL)saveNewABTestCache;
- (void)filterExpireExp;
- (BOOL)tryLoadNewABTestCache;
- (id)pathForNewABTestCache;
- (void)reportABTestLog:(id)arg1 expId:(id)arg2 logId:(unsigned int)arg3 logExt:(id)arg4;
- (void)reportABTestRunning:(id)arg1;
- (id)getABTestListWithBizId:(id)arg1;
- (id)getABTestItemWithLayerId:(id)arg1;
- (id)getABTestAry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

