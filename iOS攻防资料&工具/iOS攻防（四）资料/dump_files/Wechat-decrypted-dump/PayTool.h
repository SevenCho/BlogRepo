//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PayTool : NSObject
{
}

+ (void)finishTransactions:(id)arg1 operation:(id)arg2;
+ (BOOL)isRiskError:(int)arg1;
+ (void)finishTransaction:(id)arg1 orderInfo:(id)arg2 userInfo:(id)arg3;
+ (id)constructIapProvideDict:(id)arg1;
+ (id)getH5ChannelPagePathByOrderInfo:(id)arg1 userInfo:(id)arg2 landscape:(BOOL)arg3;
+ (id)getH5ResultPagePathByOrderInfo:(id)arg1 userInfo:(id)arg2 withgameName:(id)arg3 withMpJson:(id)arg4 withProductListJson:(id)arg5 landscape:(BOOL)arg6;
+ (id)getH5Host;
+ (void)releaseInstance;
+ (id)singleton;
- (void)dealloc;

@end

