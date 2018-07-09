//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "FaceRecog3rdVerifyConfirmViewControllerDelegate.h"

@class JSEvent, NSMutableDictionary, NSString;

@interface WebviewJSEventHandler_requestWxFacePictureVerify : WebviewJSEventHandlerBase <FaceRecog3rdVerifyConfirmViewControllerDelegate>
{
    unsigned long long _startTime;
    unsigned int _tryCount;
    JSEvent *_cbEvent;
    NSMutableDictionary *_errorMap;
}

@property(retain, nonatomic) NSMutableDictionary *errorMap; // @synthesize errorMap=_errorMap;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void).cxx_destruct;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)faceRecogDidResultWithTryCount:(unsigned int)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

