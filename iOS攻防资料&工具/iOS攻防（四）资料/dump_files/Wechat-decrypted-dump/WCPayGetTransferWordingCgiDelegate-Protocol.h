//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate.h"

@class GetTransferWordingResponse, WCPayBaseNetworkingError, WCPayGetTransferWordingCgi;

@protocol WCPayGetTransferWordingCgiDelegate <WCPayBaseCgiDelegate>
- (void)wcpayGetTransferWordingCgi:(WCPayGetTransferWordingCgi *)arg1 didGetResponse:(GetTransferWordingResponse *)arg2;

@optional
- (void)wcpayGetTransferWordingCgi:(WCPayGetTransferWordingCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
@end

