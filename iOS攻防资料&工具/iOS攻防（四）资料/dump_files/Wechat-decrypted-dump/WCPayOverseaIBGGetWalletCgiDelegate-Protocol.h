//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PayIBGGetOverseaWalletResp, WCPayOverseaIBGGetWalletCgiCache;

@protocol WCPayOverseaIBGGetWalletCgiDelegate <NSObject>
- (void)onWCPayOverseaIBGGetWalletCgiOkWithRespObject:(WCPayOverseaIBGGetWalletCgiCache *)arg1 withOriginRespObject:(PayIBGGetOverseaWalletResp *)arg2;
- (void)onWCPayOverseaIBGGetWalletCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(NSString *)arg2;
@end

