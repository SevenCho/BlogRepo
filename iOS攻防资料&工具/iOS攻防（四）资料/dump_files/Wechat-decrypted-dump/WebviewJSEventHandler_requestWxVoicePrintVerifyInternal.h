//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "VoicePrintHandlerDelegate.h"

@class JSEvent, NSString, VoicePrintHandler;

@interface WebviewJSEventHandler_requestWxVoicePrintVerifyInternal : WebviewJSEventHandlerBase <VoicePrintHandlerDelegate>
{
    JSEvent *_cbEvent;
    VoicePrintHandler *_rsaVerifyHandler;
}

@property(retain, nonatomic) VoicePrintHandler *rsaVerifyHandler; // @synthesize rsaVerifyHandler=_rsaVerifyHandler;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void).cxx_destruct;
- (void)OnVerifySuccessful;
- (void)OnVerifyCancel;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

