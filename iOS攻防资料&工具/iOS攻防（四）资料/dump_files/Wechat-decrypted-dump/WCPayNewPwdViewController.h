//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCBaseInfoItemDelegate.h"

@class NSString, UIButton, UIView, WCPayTenpayPasswordCtrlItem;

@interface WCPayNewPwdViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayNewPwdViewControllerDelegate> m_delegate;
    BOOL _isUseFaceId;
    BOOL _canUseBiotricAuth;
    unsigned int _authType;
    NSString *_vcPwdTitle;
    NSString *_vcPwdTips;
    NSString *_vcBiotricTitle;
    NSString *_vcTouchIdTips;
    NSString *_vcFaceIdTips;
    UIView *_verifyPasswordView;
    UIView *_verifyBiotricView;
    UIView *_currentView;
    UIButton *_footerButton;
    UIButton *_changeToBiotricAuthBtn;
    UIButton *_changeToPwdAuthBtn;
    WCPayTenpayPasswordCtrlItem *_passwordTextField;
}

@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) BOOL canUseBiotricAuth; // @synthesize canUseBiotricAuth=_canUseBiotricAuth;
@property(nonatomic) BOOL isUseFaceId; // @synthesize isUseFaceId=_isUseFaceId;
@property(retain, nonatomic) UIButton *changeToPwdAuthBtn; // @synthesize changeToPwdAuthBtn=_changeToPwdAuthBtn;
@property(retain, nonatomic) UIButton *changeToBiotricAuthBtn; // @synthesize changeToBiotricAuthBtn=_changeToBiotricAuthBtn;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *verifyBiotricView; // @synthesize verifyBiotricView=_verifyBiotricView;
@property(retain, nonatomic) UIView *verifyPasswordView; // @synthesize verifyPasswordView=_verifyPasswordView;
@property(retain, nonatomic) NSString *vcFaceIdTips; // @synthesize vcFaceIdTips=_vcFaceIdTips;
@property(retain, nonatomic) NSString *vcTouchIdTips; // @synthesize vcTouchIdTips=_vcTouchIdTips;
@property(retain, nonatomic) NSString *vcBiotricTitle; // @synthesize vcBiotricTitle=_vcBiotricTitle;
@property(retain, nonatomic) NSString *vcPwdTips; // @synthesize vcPwdTips=_vcPwdTips;
@property(retain, nonatomic) NSString *vcPwdTitle; // @synthesize vcPwdTitle=_vcPwdTitle;
@property(nonatomic) unsigned int authType; // @synthesize authType=_authType;
- (void).cxx_destruct;
- (void)animateToPwdCtrl;
- (void)clearPwdInput;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)showVerifyBiotricCtrl;
- (void)showVerifyPwdCtrl;
- (void)updateAuthView:(id)arg1 pwdTips:(id)arg2 biotricTitle:(id)arg3 touchIdTips:(id)arg4 faceIdTips:(id)arg5 canUseBiotricAuth:(BOOL)arg6;
- (void)onBiotricAuthNext;
- (void)updateBiotricCtrlWithTitle:(id)arg1 touchTips:(id)arg2 faceidTips:(id)arg3;
- (void)onChangeToPwdAuth;
- (void)onChangeToBiotricAuth;
- (void)updatePwdCtrlWithTitle:(id)arg1 tips:(id)arg2;
- (void)onCancelVerify;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateSwitchBiotricLabel:(float)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

