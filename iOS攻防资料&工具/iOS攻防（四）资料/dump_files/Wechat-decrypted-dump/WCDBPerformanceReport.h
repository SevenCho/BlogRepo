//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "crashReportConnectionDelegate.h"

@class MMCrashReportConnection, NSMutableArray, NSString;

@interface WCDBPerformanceReport : NSObject <crashReportConnectionDelegate>
{
    MMCrashReportConnection *_connection;
    int _timeInterval;
    int _maxSize;
    NSMutableArray *_transactionContents;
}

+ (id)pathOfReportInfo;
+ (id)dirOfReportInfo;
@property(retain, nonatomic) NSMutableArray *transactionContents; // @synthesize transactionContents=_transactionContents;
- (void).cxx_destruct;
- (void)appendTransactionContent:(id)arg1;
- (void)clearTransactionContent;
- (void)onUploadCrashCompleted:(BOOL)arg1 CrashWrap:(id)arg2;
- (id)currentUserName;
- (void)report;
- (BOOL)shouldReport;
- (void)addTransactionContent:(id)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

