//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAPermissionInfo;

@protocol WAPermissionMgrExtension <NSObject>

@optional
- (void)onLaunchPermissionUpdateHistoryList:(NSString *)arg1;
- (void)onGetLaunchPermissionInfo:(WAPermissionInfo *)arg1 isSuccess:(BOOL)arg2 errorCode:(long)arg3;
@end

