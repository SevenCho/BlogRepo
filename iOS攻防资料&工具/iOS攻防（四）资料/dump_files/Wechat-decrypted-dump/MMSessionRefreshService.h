//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMTimer, NSMutableArray, NSString;

@interface MMSessionRefreshService : MMService <MMService>
{
    MMTimer *m_refreshTimer;
    NSMutableArray *m_objectNameArray;
    unsigned int m_currentRefreshIndex;
    BOOL m_bInBackground;
    unsigned int m_updateCount;
    unsigned int m_triggerRefreshCount;
}

- (void).cxx_destruct;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)timeToUpdate;
- (void)triggerTimer;
- (void)registerToBeTriggered:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

