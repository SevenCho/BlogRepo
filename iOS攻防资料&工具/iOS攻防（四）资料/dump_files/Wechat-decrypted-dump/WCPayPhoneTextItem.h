//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayInputTextInfoCtrlItem.h"

@class MMUIViewController, NSString, UIButton;

@interface WCPayPhoneTextItem : WCPayInputTextInfoCtrlItem
{
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

- (void).cxx_destruct;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)setTipBtnShowed:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)showPhoneTip;
- (void)initView:(struct CGRect)arg1;
- (void)dealloc;

@end

