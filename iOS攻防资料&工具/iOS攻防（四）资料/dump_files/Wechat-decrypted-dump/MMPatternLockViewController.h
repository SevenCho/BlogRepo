//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAnimationTipViewDelegate.h"
#import "MMPatternLockViewDelegate.h"

@class MMAnimationTipView, MMPatternLockTipsView, MMPatternLockView, NSString, UIButton, WCBizLoadingView;

@interface MMPatternLockViewController : MMUIViewController <MMAnimationTipViewDelegate, MMPatternLockViewDelegate>
{
    BOOL _isConfirm;
    BOOL _isOpSuccess;
    BOOL _isNeedSvrVerify;
    BOOL _isBlock2Root;
    id <MMPatternLockViewControllerDelegate> _delegate;
    int _curScene;
    MMPatternLockView *_lockView;
    MMPatternLockView *_confirmLockView;
    MMPatternLockTipsView *_tipsView;
    MMPatternLockTipsView *_confirmTipsView;
    UIButton *_forgetPwdBtn;
    MMAnimationTipView *_resultToastView;
    WCBizLoadingView *_loadingView;
    NSString *_firstResult;
    NSString *_confirmResult;
    unsigned long _retryTime;
}

@property(nonatomic) BOOL isBlock2Root; // @synthesize isBlock2Root=_isBlock2Root;
@property(nonatomic) BOOL isNeedSvrVerify; // @synthesize isNeedSvrVerify=_isNeedSvrVerify;
@property(nonatomic) BOOL isOpSuccess; // @synthesize isOpSuccess=_isOpSuccess;
@property(nonatomic) unsigned long retryTime; // @synthesize retryTime=_retryTime;
@property(retain, nonatomic) NSString *confirmResult; // @synthesize confirmResult=_confirmResult;
@property(retain, nonatomic) NSString *firstResult; // @synthesize firstResult=_firstResult;
@property(nonatomic) BOOL isConfirm; // @synthesize isConfirm=_isConfirm;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMAnimationTipView *resultToastView; // @synthesize resultToastView=_resultToastView;
@property(retain, nonatomic) UIButton *forgetPwdBtn; // @synthesize forgetPwdBtn=_forgetPwdBtn;
@property(retain, nonatomic) MMPatternLockTipsView *confirmTipsView; // @synthesize confirmTipsView=_confirmTipsView;
@property(retain, nonatomic) MMPatternLockTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MMPatternLockView *confirmLockView; // @synthesize confirmLockView=_confirmLockView;
@property(retain, nonatomic) MMPatternLockView *lockView; // @synthesize lockView=_lockView;
@property(nonatomic) int curScene; // @synthesize curScene=_curScene;
@property(nonatomic) __weak id <MMPatternLockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fadeShowEnd;
- (void)onCancelPress:(id)arg1;
- (BOOL)isContinueWhenlockViewResultInValid:(id)arg1;
- (void)lockView:(id)arg1 didEndWithPattern:(id)arg2;
- (void)goBack2WalletEnteranceViewController:(id)arg1;
- (void)onPwdErrorBeyondLimit;
- (void)onOpSucess;
- (void)onOpCancel;
- (void)resetViewPosition;
- (void)onAlertViewClickForgetPwd;
- (void)onAlertViewClickCancel;
- (void)onPwdErrorAlertViewClickCancel;
- (void)handleDidGetPatternPwd:(id)arg1;
- (void)handlePatternLockViewConfirmErrorTransform;
- (void)handlePatternLockViewConfirmTransform;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onForgetPwdBtnPress:(id)arg1;
- (id)getDisplayTitle;
- (void)updateLeftBarbuttonWhenPresent;
- (void)closePatternLockPwdFail;
- (void)closePatternLockPwdSuccess;
- (void)modifyPatternLockPwdFail;
- (void)modifyPatternLockPwdSuccess;
- (void)verifyPatternLockPwdFail;
- (void)verifyPatternLockPwdError;
- (void)verifyPatternLockPwdCorrect:(id)arg1;
- (void)setupNewPatternLockPwdFail;
- (void)setupNewPatternLockPwdSuccess;
- (void)didReceiveMemoryWarning;
- (void)applicationWillTerminate:(id)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initLoadingView;
- (void)initData;
- (id)initWithPatternLockScene:(int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

