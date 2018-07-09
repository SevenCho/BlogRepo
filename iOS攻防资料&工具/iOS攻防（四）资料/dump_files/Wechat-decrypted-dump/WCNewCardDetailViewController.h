//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AccessCardLogicDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCardGeneralCardContentDelegate.h"
#import "WCCardInvoiceCardContentViewDelegate.h"
#import "WCCardMemberCardContentDelegate.h"
#import "WCCardNewTicketContentDelegate.h"
#import "WCGroupTagViewControllerDelegate.h"
#import "WCNewCardDetailLogicDelegate.h"
#import "WCNewShareCardConsumedViewDelegate.h"
#import "WCShareCardCodeViewDelegate.h"
#import "WCShareCardUserListViewControllerDelegate.h"

@class AccessCardLogicController, MMToastViewController, NSIndexPath, NSMutableArray, NSString, ShareMessageConfirmLogicHelper, UIScrollView, WCActionSheet, WCCardBaseCardDetailContentView, WCNewCardDetailLogicController, WCNewShareCardConsumedView, WCShareCardCodeView;

@interface WCNewCardDetailViewController : MMUIViewController <WCNewCardDetailLogicDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, WCNewShareCardConsumedViewDelegate, SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, WCShareCardCodeViewDelegate, WCCardGeneralCardContentDelegate, WCCardMemberCardContentDelegate, WCShareCardUserListViewControllerDelegate, WCGroupTagViewControllerDelegate, UIAlertViewDelegate, WCCardInvoiceCardContentViewDelegate, AccessCardLogicDelegate, WCCardNewTicketContentDelegate>
{
    AccessCardLogicController *_accessCardLogic;
    BOOL _isFromScanQRCode;
    BOOL _isPresent;
    BOOL _hiddenRightBar;
    BOOL _hiddenUserHeaderView;
    BOOL _hiddenDeleteItem;
    BOOL _isFromShareCardList;
    BOOL _isFromGiftCard;
    BOOL _isAddCard;
    BOOL _bIsFromSDKAuth;
    BOOL _bHideAcceptBtn;
    BOOL _bIsGetConsumedReward;
    BOOL _bHasTryShowConsumedView;
    BOOL _bIsStartResumeFromShareCardCodeView;
    BOOL _bIsEndResumeFromShareCardCodeView;
    BOOL _bIsOpenOperationView;
    BOOL _bIsOpenOffinePayView;
    BOOL _bIsSelectTagGroup;
    id <WCNewCardDetailViewControllerDelegate> _delegate;
    NSIndexPath *_lastIndex;
    unsigned int _appBrandModeType;
    WCNewCardDetailLogicController *_logicController;
    NSString *_shareToUsername;
    ShareMessageConfirmLogicHelper *_shareToFriendHelper;
    WCActionSheet *_actionSheet;
    WCCardBaseCardDetailContentView *_curContentView;
    UIScrollView *_emptyContentView;
    MMToastViewController *_toastVC;
    WCShareCardCodeView *_cardCodeView;
    WCNewShareCardConsumedView *_consumedView;
    NSMutableArray *_arrGroupUser;
    NSMutableArray *_arrBlackUser;
    NSMutableArray *_arrGroupUserLabelID;
    NSMutableArray *_arrBlackUserLabelID;
    int _currentTipViewIndex;
}

@property(nonatomic) int currentTipViewIndex; // @synthesize currentTipViewIndex=_currentTipViewIndex;
@property(retain, nonatomic) NSMutableArray *arrBlackUserLabelID; // @synthesize arrBlackUserLabelID=_arrBlackUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrGroupUserLabelID; // @synthesize arrGroupUserLabelID=_arrGroupUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrBlackUser; // @synthesize arrBlackUser=_arrBlackUser;
@property(retain, nonatomic) NSMutableArray *arrGroupUser; // @synthesize arrGroupUser=_arrGroupUser;
@property(nonatomic) BOOL bIsSelectTagGroup; // @synthesize bIsSelectTagGroup=_bIsSelectTagGroup;
@property(nonatomic) BOOL bIsOpenOffinePayView; // @synthesize bIsOpenOffinePayView=_bIsOpenOffinePayView;
@property(nonatomic) BOOL bIsOpenOperationView; // @synthesize bIsOpenOperationView=_bIsOpenOperationView;
@property(nonatomic) BOOL bIsEndResumeFromShareCardCodeView; // @synthesize bIsEndResumeFromShareCardCodeView=_bIsEndResumeFromShareCardCodeView;
@property(nonatomic) BOOL bIsStartResumeFromShareCardCodeView; // @synthesize bIsStartResumeFromShareCardCodeView=_bIsStartResumeFromShareCardCodeView;
@property(nonatomic) BOOL bHasTryShowConsumedView; // @synthesize bHasTryShowConsumedView=_bHasTryShowConsumedView;
@property(retain, nonatomic) WCNewShareCardConsumedView *consumedView; // @synthesize consumedView=_consumedView;
@property(retain, nonatomic) WCShareCardCodeView *cardCodeView; // @synthesize cardCodeView=_cardCodeView;
@property(retain, nonatomic) MMToastViewController *toastVC; // @synthesize toastVC=_toastVC;
@property(retain, nonatomic) UIScrollView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) WCCardBaseCardDetailContentView *curContentView; // @synthesize curContentView=_curContentView;
@property(retain, nonatomic) WCActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) ShareMessageConfirmLogicHelper *shareToFriendHelper; // @synthesize shareToFriendHelper=_shareToFriendHelper;
@property(retain, nonatomic) NSString *shareToUsername; // @synthesize shareToUsername=_shareToUsername;
@property(nonatomic) BOOL bIsGetConsumedReward; // @synthesize bIsGetConsumedReward=_bIsGetConsumedReward;
@property(nonatomic) BOOL bHideAcceptBtn; // @synthesize bHideAcceptBtn=_bHideAcceptBtn;
@property(nonatomic) BOOL bIsFromSDKAuth; // @synthesize bIsFromSDKAuth=_bIsFromSDKAuth;
@property(retain, nonatomic) WCNewCardDetailLogicController *logicController; // @synthesize logicController=_logicController;
@property(nonatomic) unsigned int appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
@property(nonatomic) BOOL isAddCard; // @synthesize isAddCard=_isAddCard;
@property(nonatomic) BOOL isFromGiftCard; // @synthesize isFromGiftCard=_isFromGiftCard;
@property(nonatomic) BOOL isFromShareCardList; // @synthesize isFromShareCardList=_isFromShareCardList;
@property(nonatomic) BOOL hiddenDeleteItem; // @synthesize hiddenDeleteItem=_hiddenDeleteItem;
@property(nonatomic) BOOL hiddenUserHeaderView; // @synthesize hiddenUserHeaderView=_hiddenUserHeaderView;
@property(nonatomic) BOOL hiddenRightBar; // @synthesize hiddenRightBar=_hiddenRightBar;
@property(nonatomic) BOOL isPresent; // @synthesize isPresent=_isPresent;
@property(nonatomic) BOOL isFromScanQRCode; // @synthesize isFromScanQRCode=_isFromScanQRCode;
@property(retain, nonatomic) NSIndexPath *lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) __weak id <WCNewCardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCloseLargeView;
- (void)onGetOfflineCodeError;
- (void)onSelectShareUserWithShareData:(id)arg1;
- (void)clickEnterUserListBtn;
- (id)processCurrentScreenShot;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)GroupTagViewControllerWillDissappear;
- (void)payOrQrCodeButtonDidClick;
- (void)onShareCardAfterConsumed:(BOOL)arg1;
- (void)onClickNotifyBtn:(BOOL)arg1;
- (void)onCloseCodeView;
- (void)showCodeView;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 tipTag:(int)arg3;
- (void)showFirstUseShareCardTip;
- (void)onShowShareCardTips;
- (void)setHasEnterShareCardListBefore;
- (void)setHasShowShareCardTipsBefore;
- (BOOL)hasShowShareCardTipsBefore;
- (id)getContollerTitle;
- (void)showAdd2CardPkgTip;
- (void)setHasEnterCardDetailBefore;
- (BOOL)hasEnterCardDetailBefore;
- (void)setHasShowMemberCardTip;
- (BOOL)hasShowMemberCardTip;
- (void)reloadContentView;
- (void)reloadViewController;
- (id)getBrandColor;
- (BOOL)hasBrandColor;
- (void)viewDidLayoutSubviews;
- (void)refreshIfOfflineCodeScheme;
- (void)onPayButtonDidClick;
- (void)hidePresentNavigation:(BOOL)arg1;
- (void)refreshCode;
- (void)onReasonButtonClick;
- (unsigned long)getOfflineCodeStatus;
- (id)getOfflineCode;
- (id)getDynamicCodeGenerator;
- (id)getDynamicCode;
- (void)onClickMemberCardAnnounce:(id)arg1;
- (id)getUsedStoreList;
- (void)onClickNearbyPhoneBtn;
- (void)onClickWhoCanSeeBtn;
- (void)onClickEnterUserListBtn;
- (unsigned int)getShareCardShareUserCount;
- (id)getShareCardShareUserName;
- (void)onShareCardBtnClick;
- (void)onAcceptCardBtnClick:(BOOL)arg1;
- (void)onCardHeaderViewOperateBtnClick;
- (void)onCardHeaderViewApplyBtnClick;
- (void)recommendToFriend;
- (void)giftCardToFriend;
- (void)showTipViewFor3rdDomain;
- (void)openCellList0Item:(id)arg1;
- (void)openGiftCardInfoViewConroller;
- (void)openBrandProfileView;
- (void)openUsedStoresView;
- (void)openNearbyShopInfo;
- (void)openCardDetailView;
- (void)doOperation:(double)arg1;
- (void)doOpenOperationView:(double)arg1;
- (void)openOperationView;
- (void)openSecondaryField:(id)arg1;
- (void)openAppBranWithUserName:(id)arg1 brandPass:(id)arg2;
- (void)openUrl:(id)arg1 returnBlock:(CDUnknownBlockType)arg2;
- (void)openUrl:(id)arg1;
- (BOOL)bIsCardFromOutAppScene;
- (float)getViewControllerContentViewHeight;
- (id)getGiftCardShareFromUserName;
- (BOOL)shouldShowGiftFromUserHeaderView;
- (BOOL)isNeedToDisplayDeeplinkJunmpTips;
- (int)getCardStatus;
- (BOOL)shouldHideAcceptBtn;
- (BOOL)canShowUseBtnInHeader;
- (void)onShareCardDelete:(BOOL)arg1 withShareCard:(id)arg2;
- (void)stepInOfflinePayWithExpireTime:(double)arg1;
- (void)onMarkShareCardWithRet:(BOOL)arg1 isMark:(BOOL)arg2 andMarkUsr:(id)arg3 markCardId:(id)arg4 expireTime:(float)arg5 qrCodeWording:(id)arg6;
- (void)onMarkShareCardError;
- (void)onShareCardConsumedWithShareCardTpInfoList:(id)arg1 shareCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)onCurShareCardUpdate:(id)arg1;
- (void)onShareCardReqRetSystemErr:(BOOL)arg1;
- (BOOL)shouldRefreshWithShareCard;
- (void)onShareCardReqRetWithCardInfo:(id)arg1;
- (void)onShareCardSuccessWithCardData:(id)arg1;
- (void)onCardHasBeenUsed:(id)arg1;
- (void)onGiftCardRet:(int)arg1 cardData:(id)arg2;
- (void)onShowTipsAndReloadData;
- (void)onAcceptCardRet:(BOOL)arg1 withLoadingStr:(id)arg2 withAcceptInfoJsonStr:(id)arg3 isShareCard:(BOOL)arg4;
- (void)onGetCardDataFromSvrErr:(int)arg1;
- (void)onViewControllerAllContentNeedReload;
- (void)onViewControllerNeedReload;
- (void)onShareCardDataNotPrepare;
- (void)actionFromSvrActionSheet:(id)arg1;
- (void)jumpToContactInfoViewController:(id)arg1;
- (void)showBrandProfile;
- (void)deleteCard;
- (void)shareCardAction;
- (void)shareToSNS;
- (void)shareToFriend;
- (void)showJsonView;
- (void)deleteShareCard;
- (void)showReportView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showActionList;
- (void)onReturn;
- (void)showTableView;
- (void)showEmptyView;
- (void)updateRightBarButtonStatus;
- (void)reloadViewControllerBackgroundColor;
- (void)updateCardData:(id)arg1;
- (void)setForBatchViewCard;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)initContentView;
- (void)initEmptyView;
- (void)showErrMsg;
- (void)onUserAuthorizedLocationWithCardID:(id)arg1;
- (void)tryUpdateAccessCard;
- (void)viewDidLoad;
- (id)initWithShareCard:(id)arg1 withShareCardListIfExist:(id)arg2 andScene:(int)arg3;
- (id)initWithCardEnterInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

