//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ILinkEventExt.h"
#import "IMsgRevokeExt.h"
#import "ITranslateMsgMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "TextFloatPreviewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTipsViewController, NSArray, NSString, NavigateLogicController, RichTextView, TextFloatViewController, TextMessageViewModel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, WCUIActionSheet;

@interface TextMessageCellView : CommonMessageCellView <ILinkEventExt, RichTextLayoutDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, TextFloatPreviewDelegate, ITranslateMsgMgrExt, IMsgRevokeExt>
{
    RichTextView *m_richTextView;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *m_uiActionSheet;
    NavigateLogicController *m_navigationLogic;
    UIView *m_translateView;
    RichTextView *m_translateRichTextView;
    UIActivityIndicatorView *m_oTranslateLoadingView;
    UILabel *m_translateSuccessLabel;
    UIImageView *m_translateSuccessIconView;
    NSArray *m_translateMenus;
    TextFloatViewController *m_oFloatViewController;
    UIButton *m_warningBtn;
}

- (void).cxx_destruct;
- (id)getOperateMenuItem;
- (BOOL)addCoverViewToControllerTable:(BOOL)arg1;
- (BOOL)highLightSearchKeyWords:(id)arg1;
- (id)getTranslateMenuItems;
- (BOOL)pressIntoSelectCopyStatusWithTranlateText:(BOOL)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onAddressClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkHighlighted:(BOOL)arg1 url:(id)arg2;
- (BOOL)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 tipTag:(int)arg3;
- (id)getViewController;
- (id)getMediaWrap;
- (void)onWindowHide;
- (void)onLongTouch:(struct CGPoint)arg1;
- (void)onTouchDownRepeat;
- (void)translateMsg;
- (void)onTranslateMsg:(id)arg1;
- (void)onCopy:(id)arg1;
- (BOOL)canShowTranslateMenuItem;
- (id)operationMenuItems;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopyLinkText:(id)arg1;
- (BOOL)translatePreventLongPressLink;
- (BOOL)preventLongPressLink;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (BOOL)canPeek;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)onClickFullBtn;
- (void)initRichTextView;
- (void)onDisappear;
- (void)setNeedsDisplay;
- (float)contentViewCenterY;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateStatus;
- (void)updateContentOffset;
- (void)retryTranslate;
- (BOOL)isNetworkAvailable;
- (void)onReTryTranslate:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopyTranslate:(id)arg1;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)addTranslateViewMenus;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onTapTranslateView:(id)arg1;
- (void)setTranslateText;
- (void)updateTranslateSuccessView;
- (void)updateTranslateStatusButton;
- (void)initTranslateRichTextView;
- (void)initTranslateView;
- (void)initWarningButton;
- (void)layoutContentView;
- (BOOL)canBeReused;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TextMessageViewModel *viewModel; // @dynamic viewModel;

@end

