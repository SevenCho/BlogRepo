//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableString, NSSet, NSString;

@interface ClickStreamMgr : MMService <MMService>
{
    struct timeval m_tvStart;
    NSString *m_nsLastPageID;
    NSString *m_nsInterruptPageID;
    NSMutableString *m_nsReport;
    NSSet *m_setIgnorePageIDs;
}

- (void).cxx_destruct;
- (void)insertWithKey:(id)arg1 Value:(id)arg2;
- (void)clearClickStreamReport;
- (id)getClickStreamReport;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)recordPage:(id)arg1 withTime:(long)arg2;
- (void)checkWriteReportLog;
- (void)writeReportLog:(BOOL)arg1;
- (id)genRedunDantReport;
- (void)inActivePage:(id)arg1;
- (void)activePage:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

