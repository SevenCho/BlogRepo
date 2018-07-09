//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayNavigationView.h"

#import "WCBaseInfoItemDelegate.h"

@class NSString, UIButton, UILabel, UIView, WCPayTenpayPasswordCtrlItem;

@interface WCPayBizF2FZeroPayConfirmView : WCPayNavigationView <WCBaseInfoItemDelegate>
{
    BOOL _m_usingBiotric;
    id <WCPayBizF2FZeroPayConfirmViewDelegate> _m_delegate;
    UIView *_m_panelView;
    UIButton *_m_cancelButton;
    UILabel *_m_navigationTitleLabel;
    UIView *_m_lineView;
    UILabel *_m_payTitleLabel;
    UILabel *_m_moneyLabel;
    UIButton *_m_payButton;
    WCPayTenpayPasswordCtrlItem *_m_passwordItem;
    float _m_panelViewMarginUp;
    NSString *_m_payTitle;
    NSString *_m_moneyString;
}

@property(retain, nonatomic) NSString *m_moneyString; // @synthesize m_moneyString=_m_moneyString;
@property(retain, nonatomic) NSString *m_payTitle; // @synthesize m_payTitle=_m_payTitle;
@property(nonatomic) BOOL m_usingBiotric; // @synthesize m_usingBiotric=_m_usingBiotric;
@property(nonatomic) float m_panelViewMarginUp; // @synthesize m_panelViewMarginUp=_m_panelViewMarginUp;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_passwordItem; // @synthesize m_passwordItem=_m_passwordItem;
@property(retain, nonatomic) UIButton *m_payButton; // @synthesize m_payButton=_m_payButton;
@property(retain, nonatomic) UILabel *m_moneyLabel; // @synthesize m_moneyLabel=_m_moneyLabel;
@property(retain, nonatomic) UILabel *m_payTitleLabel; // @synthesize m_payTitleLabel=_m_payTitleLabel;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UILabel *m_navigationTitleLabel; // @synthesize m_navigationTitleLabel=_m_navigationTitleLabel;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton=_m_cancelButton;
@property(retain, nonatomic) UIView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(nonatomic) __weak id <WCPayBizF2FZeroPayConfirmViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onPayButtonClick;
- (void)closeView;
- (void)onCancelButtonClick;
- (void)updatePasswordItem;
- (void)updatePayButton;
- (void)updateMoneyLabel;
- (void)updatePayTitleLabel;
- (void)updateLineView;
- (void)updateNavigationTitleLabel;
- (void)updateCancelButton;
- (void)adjustPanelView;
- (void)updatePanelView;
- (void)updateView;
- (void)layoutSubviews;
- (void)showWithBiotricAuth:(BOOL)arg1 payTitle:(id)arg2 moneyString:(id)arg3 baseView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

