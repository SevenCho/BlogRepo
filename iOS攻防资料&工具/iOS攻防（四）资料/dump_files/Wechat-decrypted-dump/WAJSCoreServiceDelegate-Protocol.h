//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAJSCoreService, WAPermissionResult;

@protocol WAJSCoreServiceDelegate <NSObject>
- (BOOL)reportPerformance;
- (void)triggerStrictBanMode:(NSString *)arg1;
- (BOOL)checkServiceRunInMainThread:(NSString *)arg1;
- (BOOL)checkServiceRunMode:(NSString *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3 fromAppService:(WAJSCoreService *)arg4;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 fromAppService:(WAJSCoreService *)arg2;
@end

