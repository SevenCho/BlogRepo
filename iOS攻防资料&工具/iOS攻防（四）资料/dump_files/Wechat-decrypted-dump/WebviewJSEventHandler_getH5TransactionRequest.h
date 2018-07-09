//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "PBMessageObserverDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"

@class NSString;

@interface WebviewJSEventHandler_getH5TransactionRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WCPayPaidOrderDetailViewControllerDelegate>
{
    BOOL _closeWebAfterPayDetailBack;
}

@property(nonatomic) BOOL closeWebAfterPayDetailBack; // @synthesize closeWebAfterPayDetailBack=_closeWebAfterPayDetailBack;
- (id)getActivityInfo:(id)arg1;
- (id)getDiscountArray:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)showOrderDetail:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendResult:(BOOL)arg1 jsEvent:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

