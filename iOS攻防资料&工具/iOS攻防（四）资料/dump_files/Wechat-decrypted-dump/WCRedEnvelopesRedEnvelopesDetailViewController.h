//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate.h"
#import "WebAddContactDelegate.h"

@class AVAudioPlayer, ContactUpdateHelper, MMTableView, NSString, UIButton, UIImageView, UIView, WCRedEnvelopesCommentInputToolView, WCUITextField;

@interface WCRedEnvelopesRedEnvelopesDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> m_delegate;
    BOOL m_loadingMoreOrderList;
    MMTableView *m_tableView;
    BOOL m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    AVAudioPlayer *luckyPlayer;
    AVAudioPlayer *whistlePlayer;
    BOOL m_bEnterpriseRedEnvelopes;
    int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
    unsigned long m_uiStatFromScene;
    ContactUpdateHelper *_m_helperForSenderNickName;
    ContactUpdateHelper *_m_helperForSenderNickNameAnimation;
    UIView *_m_pinImageViewAnimation;
    UIView *_m_pinImageView;
}

@property(retain, nonatomic) UIView *m_pinImageView; // @synthesize m_pinImageView=_m_pinImageView;
@property(retain, nonatomic) UIView *m_pinImageViewAnimation; // @synthesize m_pinImageViewAnimation=_m_pinImageViewAnimation;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickNameAnimation; // @synthesize m_helperForSenderNickNameAnimation=_m_helperForSenderNickNameAnimation;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickName; // @synthesize m_helperForSenderNickName=_m_helperForSenderNickName;
@property(nonatomic) unsigned long m_uiStatFromScene; // @synthesize m_uiStatFromScene;
@property(nonatomic) BOOL m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(nonatomic) int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene; // @synthesize enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
- (void).cxx_destruct;
- (id)addBorderViewBottomAtView:(id)arg1;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (id)generateEmitterLayer:(BOOL)arg1 withColors:(id)arg2;
- (void)showLuckyAnimationWithLuckyPath:(id)arg1 needWhistle:(BOOL)arg2 withWhistlePath:(id)arg3;
- (void)setLeftCloseBarButton;
- (void)animationForLabel;
- (void)startOpenAnimation;
- (void)OnToolViewDissmiss;
- (void)SendTextMessageToolView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned int)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)watchMyRedEnvelopesList;
- (void)handleTailOperation;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)gotoUrl;
- (void)gotoBalanceDetail;
- (void)commentRedEnvelopes;
- (void)refreshViewWithData:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (id)GetHeaderView:(id)arg1;
- (id)GetViewHeader:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)getAnimationView:(id)arg1;
- (void)initTableView;
- (id)getNoMoreBottomView;
- (id)getBottomView;
- (void)statExpourseOperation;
- (void)viewDidLoad;
- (void)loadMoreOrderList;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnLeftBarButtonDone;
- (BOOL)useTransparentNavibar;
- (void)initNavigationBar;
- (BOOL)showSmallShareButton;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

