//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WCLabsLogicService : MMService <PBMessageObserverDelegate, IMsgExt, MMKernelExt, MMService>
{
    BOOL _isUpdatingABTestFromSvr;
    unsigned long _uiNextUpdateTime;
    unsigned long _uiClientLastUpdateTime;
}

@property(nonatomic) BOOL isUpdatingABTestFromSvr; // @synthesize isUpdatingABTestFromSvr=_isUpdatingABTestFromSvr;
@property(nonatomic) unsigned long uiClientLastUpdateTime; // @synthesize uiClientLastUpdateTime=_uiClientLastUpdateTime;
@property(nonatomic) unsigned long uiNextUpdateTime; // @synthesize uiNextUpdateTime=_uiNextUpdateTime;
- (BOOL)saveUpdateTimeToFile:(unsigned long)arg1 fileName:(id)arg2;
- (unsigned long)getUpdateTimeFromFile:(id)arg1;
- (BOOL)saveNewClientLastUpdateTimeForCache:(unsigned long)arg1;
- (unsigned long)getClientLastUpdateTimeFromCache;
- (void)updateClientLastUpdateTime:(unsigned long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)saveLastUpdateTimeForCache:(unsigned long)arg1;
- (unsigned long)getLastUpdateTimeFromCache;
- (BOOL)saveNewUpdateTimeForCache:(unsigned long)arg1;
- (unsigned long)getNextUpdateTimeFromCache;
- (void)updateNextUpdateTime:(unsigned long)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)willEnterForeground;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)onAuthOKWithVersionChangeFrom:(unsigned long)arg1 to:(unsigned long)arg2;
- (void)getABTestFromSvrWithFlag:(int)arg1;
- (void)tryUpdateABTestFromSvr;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

