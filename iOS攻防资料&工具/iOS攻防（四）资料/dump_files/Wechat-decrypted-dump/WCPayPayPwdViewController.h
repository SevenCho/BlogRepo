//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCPayPwdCtrlPanelView;

@interface WCPayPayPwdViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id <WCPayPayPwdViewControllerDelegate> m_delegate;
    int _vcTag;
}

@property(nonatomic) int vcTag; // @synthesize vcTag=_vcTag;
- (void).cxx_destruct;
- (void)setNavigationBarTitle:(id)arg1 Stype:(int)arg2;
- (void)becomeInputViewFirstResponse;
- (void)resignInputViewFirstResponse;
- (void)clearPwdInput;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setFooterBtnTitle:(id)arg1;
- (void)showSecondPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(BOOL)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 fromError:(BOOL)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 WithTip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(BOOL)arg3;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (void)leftBarButtonClick;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)dealloc;
- (id)init;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)setTitle:(id)arg1;

@end

