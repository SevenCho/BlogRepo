//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayCheckUserAuthJSApiCgiDelegate.h"
#import "WCPayNewPwdViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class JSEvent, NSData, NSString, WCPayCheckUserAuthJSApiCgi;

@interface WCPayJSApiVerifyPayPasswordControlLogic : WCPayControlLogic <WCPayNewPwdViewControllerDelegate, WCPayCheckUserAuthJSApiCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate>
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    unsigned long m_verifyPayPwdStatus;
    BOOL _m_bHasBiotricAuth;
    id <WCPayJSApiVerifyDelegate> _paramDelegate;
    WCPayCheckUserAuthJSApiCgi *_checkUserAuthJSApiCgi;
    NSData *_m_lastAuthBiotricData;
}

@property(nonatomic) BOOL m_bHasBiotricAuth; // @synthesize m_bHasBiotricAuth=_m_bHasBiotricAuth;
@property(retain, nonatomic) NSData *m_lastAuthBiotricData; // @synthesize m_lastAuthBiotricData=_m_lastAuthBiotricData;
@property(retain, nonatomic) WCPayCheckUserAuthJSApiCgi *checkUserAuthJSApiCgi; // @synthesize checkUserAuthJSApiCgi=_checkUserAuthJSApiCgi;
@property(nonatomic) __weak id <WCPayJSApiVerifyDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void).cxx_destruct;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)onAlertResetPwdConfirm:(id)arg1;
- (void)onAlertResetPwdCancel:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)verifyPayBiotricNext:(id)arg1;
- (void)verifyPayPwdNext:(id)arg1;
- (void)OnWCPayNewPwdViewControllerBack;
- (void)checkStopLogic;
- (void)stopLogic;
- (void)OnGetCheckUserAuthJSApiResponseError:(id)arg1 errorCode:(unsigned long)arg2;
- (void)OnGetCheckUserAuthJSApiResponseOK:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

