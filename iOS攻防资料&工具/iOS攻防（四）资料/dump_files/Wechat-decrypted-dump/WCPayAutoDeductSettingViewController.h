//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, UISwitch, WCPayEntrustPayInfo, WCPayOrderDetail;

@interface WCPayAutoDeductSettingViewController : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayAutoDeductSettingViewControllerDelegate> m_delegate;
    UISwitch *_switchButton;
    RichTextView *_richTextView;
    WCPayOrderDetail *_order;
    WCPayEntrustPayInfo *_entrustPayInfo;
}

@property(retain, nonatomic) WCPayEntrustPayInfo *entrustPayInfo; // @synthesize entrustPayInfo=_entrustPayInfo;
@property(retain, nonatomic) WCPayOrderDetail *order; // @synthesize order=_order;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (BOOL)isCNY;
- (void)OnFooterButtonClick:(id)arg1;
- (void)changeSwitch:(id)arg1;
- (void)OnCancel;
- (void)setupData;
- (void)setDelegate:(id)arg1;
- (id)getShowInfoView:(id)arg1;
- (void)setupBottomTextView;
- (id)footerView;
- (void)makeInfoSectionContentView:(id)arg1;
- (void)makeHeaderContent;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

