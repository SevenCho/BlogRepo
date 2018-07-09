//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@protocol IClearDataMgrExt <NSObject>

@optional
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned long)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)onCleanCacheDone;
- (void)onInnerDeleteData;
- (void)onCleanedOver3MonthFileSize:(unsigned long long)arg1;
- (void)onCleanedCacheSize:(unsigned long long)arg1;
- (void)onReloadDataItem;
- (void)onLoadDataFinished;
@end

