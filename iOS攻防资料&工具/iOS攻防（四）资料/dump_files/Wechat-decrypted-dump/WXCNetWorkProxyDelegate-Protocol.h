//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol WXCNetWorkProxyDelegate <NSObject>
- (NSString *)getWxUserName;
- (BOOL)proxySendRequest:(int)arg1 reqData:(NSData *)arg2 cmd:(int)arg3;
- (BOOL)isProxyInit;
@end

