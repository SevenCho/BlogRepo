//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMPatternLockMgrExt.h"
#import "MMPatternLockViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class MMPatternLockViewController, MMUINavigationController, NSString;

@interface MMPatternLockLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, MMPatternLockViewControllerDelegate, MMPatternLockMgrExt>
{
    BOOL _isNeedOut2BizMain;
    BOOL _isPresent;
    BOOL _isCancel;
    id <MMPatternLockLogicDelegate> _delegate;
    int _curScene;
    NSString *_userToken;
    NSString *_oldHash;
    MMPatternLockViewController *_lockViewController;
    MMUINavigationController *_enteranceViewController;
}

@property(retain, nonatomic) MMUINavigationController *enteranceViewController; // @synthesize enteranceViewController=_enteranceViewController;
@property(retain, nonatomic) MMPatternLockViewController *lockViewController; // @synthesize lockViewController=_lockViewController;
@property(nonatomic) BOOL isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) BOOL isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) NSString *oldHash; // @synthesize oldHash=_oldHash;
@property(nonatomic) BOOL isNeedOut2BizMain; // @synthesize isNeedOut2BizMain=_isNeedOut2BizMain;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) int curScene; // @synthesize curScene=_curScene;
@property(nonatomic) __weak id <MMPatternLockLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onVerifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdError;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onModifyPatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onClosePatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onSetupNewPatternLockPwdFail;
- (void)onSetupNewPatternLockPwdSuccess;
- (BOOL)needBlockViewControllerLeftBarbuttonItemInEnteranceScene;
- (void)onPressBackOnPresnetedLockVC;
- (BOOL)isNeedSvrVerify;
- (void)onClosePatternLockPwdWithPatternHash:(id)arg1;
- (void)onModifyPatternLockWithNewPatternHash:(id)arg1;
- (void)onPatternLockVerifyPatternLockPwdWithPatternHash:(id)arg1;
- (void)onPatternLockSetupNewWithPatternHash:(id)arg1;
- (void)onPatternLockViewControllerDidErrorBeyondLimit;
- (void)onPatternLockViewControllerDidForgetPwd;
- (void)onPatternLockViewControllerDidOperateSuccess;
- (void)onPatternLockViewControllerDidOperateCancel;
- (void)goBack2EnteranceViewController;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned long)arg3;
- (void)onPayPasswordErrorAlertViewDismiss:(id)arg1;
- (void)onAlertResetPwd:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)OnAlertGiveUpLogic;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)showGiveUpLogicAlert;
- (void)handlePatternLockEnterUnNeedPwd;
- (void)handlePatternLockBlock;
- (void)handlePatternLockEnterance;
- (void)handlePatterLockClose;
- (void)handlePatternLockModify;
- (void)handlePatternLockForget;
- (void)handlePatternLockSetup;
- (void)showPatternLockViewControllerIsPresnet:(BOOL)arg1;
- (void)onVerifyPayPwdSuccess;
- (void)showWCPayPwdViewController;
- (BOOL)checkIsPatternLockBlock;
- (void)startLogic;
- (void)initDataWithPatternScene:(int)arg1;
- (id)initWithPatternLockScene:(int)arg1 andDelegate:(id)arg2 isPresent:(BOOL)arg3;
- (void)cancel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

