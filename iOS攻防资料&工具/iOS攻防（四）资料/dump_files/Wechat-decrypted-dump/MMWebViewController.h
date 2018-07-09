//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseConnectorLogicDelegate.h"
#import "H5GameScrollActionSheetDelegate.h"
#import "ISysCallCheckExt.h"
#import "IUiUtilExt.h"
#import "MMExposeViewControllerDelegate.h"
#import "MMJSApiVerifyMgrDelegate.h"
#import "MMScrollActionSheetDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "MMWebPopInteractiveTransitionDelegate.h"
#import "MMWebSearchViewDelegate.h"
#import "MMWebViewDelegate.h"
#import "MMWebViewFontFloatViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCForceTouchPopProtocol.h"
#import "WXCustomWebViewControllerProtocol.h"
#import "WebViewA8KeyLogicDelegate.h"
#import "WebViewJSLogicDelegate.h"
#import "YYWebViewDelegate.h"

@class CAGradientLayer, CContact, EnterpriseConnectorLogic, MMJSApiVerifyMgr, MMScrollActionSheet, MMTimer, MMTipsViewController, MMURLHandler, MMWebBottomToolBar, MMWebCustomLog, MMWebCustomNavBar, MMWebProgressBar, MMWebTransitionController, MMWebViewPluginScheduler, MMWebViewPresetUI, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURLRequest, TipsView, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView, UIViewController, WCDeepLinkHandler, WKWebView<YYWebViewInterface>, WebViewA8KeyLogicImpl, WebViewJSLogicImpl, WebViewMenuCustomizeLogic, WebViewOAuthLogic, WebViewTimeProfileData;

@interface MMWebViewController : MMUIViewController <MMWebSearchViewDelegate, MMWebViewDelegate, MMScrollActionSheetDelegate, EnterpriseConnectorLogicDelegate, MMExposeViewControllerDelegate, H5GameScrollActionSheetDelegate, WCForceTouchPopProtocol, UIGestureRecognizerDelegate, IUiUtilExt, MMTipsViewControllerDelegate, ISysCallCheckExt, MMWebPopInteractiveTransitionDelegate, WCActionSheetDelegate, UIAlertViewDelegate, MMWebViewFontFloatViewDelegate, WebViewA8KeyLogicDelegate, WebViewJSLogicDelegate, UIScrollViewDelegate, MMJSApiVerifyMgrDelegate, YYWebViewDelegate, WXCustomWebViewControllerProtocol>
{
    WKWebView<YYWebViewInterface> *webView;
    MMURLHandler *m_urlHandler;
    NSString *m_initUrl;
    WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
    WebViewJSLogicImpl *m_jsLogicImpl;
    unsigned long m_uiBackCount;
    BOOL m_isPageDidLoaded;
    UIButton *m_loadFailView;
    NSMutableArray *m_actionSheetRow1;
    NSMutableArray *m_actionSheetRow2;
    MMScrollActionSheet *m_scrollActionSheet;
    WebViewMenuCustomizeLogic *m_menuCustomizeLogic;
    NSMutableDictionary *m_jsInitInfo;
    WCDeepLinkHandler *m_deepLinkHandler;
    EnterpriseConnectorLogic *m_enterpriseConnectorLogic;
    BOOL m_isScrollMenuScroll;
    MMJSApiVerifyMgr *m_apiVerifyMgr;
    CDUnknownBlockType _OnInitReadyNotifyBlock;
    CDUnknownBlockType m_blockOnWebViewWillReturn;
    BOOL _bIsHideShareMenuByJsApi;
    UILabel *m_previewTopBar;
    UIView *m_previewTopBarBg;
    BOOL m_isPreviewing;
    BOOL m_isFinishLoaded;
    UIView *_previewSourceView;
    UIViewController *_previewFromController;
    BOOL m_bShowOnNewMainFrameBanner;
    BOOL m_bReadingArticleBanner;
    BOOL m_bPreloadInMem;
    BOOL m_isPageLoadFail;
    BOOL m_bFullScreen;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    vector_ecc2264a _pIDKeyList;
    BOOL _bIsDraggingScroll;
    NSMutableSet *m_jsTempAllowApiCalls;
    WebViewTimeProfileData *m_webTimeProfileData;
    id <MMWebViewDelegate> m_delegate;
    BOOL m_bAutoSetTitle;
    BOOL m_disalbeStartLoadGetA8Key;
    BOOL m_bShouldForcedRotationToPortrait;
    unsigned long m_stat_enterTime;
    int m_loadingCount;
    BOOL m_openAllPermission;
    NSString *m_jump;
    BOOL m_viewDidAppear;
    NSString *m_oLoadingUrl;
    BOOL m_bHasAnimated;
    BOOL m_bIFrame;
    NSString *_httpHeadReferer;
    float _fLastStartOffsetY;
    NSMutableArray *_arrRouteUrl;
    unsigned long _startTime;
    BOOL _bIsBackForwardNavigationType;
    BOOL _bIsViewHasAppeared;
    NSString *_lastURL;
    MMTipsViewController *tipsAlertJumpAppstoreVC;
    BOOL _bIsAutoLoginMode;
    BOOL _alwayIntercept;
    BOOL _bHasInitNotification;
    BOOL _newWebLoading;
    BOOL m_bIsPortraitBeforeOpenUrl;
    BOOL _m_bIsStatusBarBlack;
    BOOL _m_bUseColorfulNavBar;
    BOOL _m_canCache;
    BOOL _m_bDeepLink;
    BOOL _m_bUserHasClickLink;
    BOOL _m_bIsDelayPushWebView;
    BOOL _m_bIsRestrictAppstore;
    BOOL _m_isLanscape;
    BOOL _m_bIsJsapiUploadVideoUploading;
    BOOL _reportInstantly;
    BOOL _m_bPreloadInMem;
    BOOL _shouldHandleShrink;
    BOOL _shouldUsePopAni;
    BOOL _m_bFullScreen;
    BOOL _bIsForceShowCloseButton;
    BOOL _m_isDisableShareMenu;
    BOOL _shouldShowBottom;
    BOOL _canSetMPTitleByOut;
    BOOL _unableAutoSetStatusBar;
    BOOL _saveMiniWhenClose;
    BOOL _bHasTriggerOpenUrl;
    BOOL _bIsReportSchemeWickedAlready;
    BOOL _bIsAlreadyReloadWebviewFromJsapi;
    BOOL _m_bHasFinishLoadOnce;
    NSMutableDictionary *m_extraInfo;
    MMWebViewPluginScheduler *_pluginScheduler;
    CContact *_brandContact;
    MMWebProgressBar *_m_progressBar;
    UILabel *_m_addressLabel;
    MMWebViewPresetUI *_presetUI;
    MMWebCustomLog *_customLog;
    int _reportId;
    NSMutableArray *_reportFormatDataList;
    unsigned int _reportBeginTime;
    unsigned int _reportDesinatedBeginTime;
    NSMutableArray *_visibleStateArray;
    MMTimer *_wepkgLoadingTimer;
    CDUnknownBlockType _interceptCloseBlock;
    NSMutableDictionary *_brandIconDic;
    float _lastContentOffsetY;
    float _lastSecondContentOffsetY;
    int _unTrackScrollingNum;
    float _beiginContentOffsetY;
    float _navBarShrinkRemainHeight;
    int _scrollNavBarState;
    MMWebTransitionController *_transitionController;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    int _popGesState;
    UIView *_tailBgView;
    UIImageView *_m_addressBarView;
    UILabel *_m_deeplinkRedirecting;
    MMWebBottomToolBar *_bottomBar;
    UIView *_maskTitleView;
    CAGradientLayer *_maskTitleLayer;
    UIImageView *_maskImageView;
    UILabel *_tempLabel;
    MMWebCustomNavBar *_m_navBarView;
    TipsView *_dagerTipsView;
    WebViewOAuthLogic *_oauthLogic;
    NSString *_jumpAppStoreUrl;
    NSString *_encodeSchemeStr;
    int _useSchemeCount;
}

@property(nonatomic) BOOL m_bHasFinishLoadOnce; // @synthesize m_bHasFinishLoadOnce=_m_bHasFinishLoadOnce;
@property(nonatomic) BOOL bIsAlreadyReloadWebviewFromJsapi; // @synthesize bIsAlreadyReloadWebviewFromJsapi=_bIsAlreadyReloadWebviewFromJsapi;
@property(nonatomic) BOOL bIsReportSchemeWickedAlready; // @synthesize bIsReportSchemeWickedAlready=_bIsReportSchemeWickedAlready;
@property(nonatomic) BOOL bHasTriggerOpenUrl; // @synthesize bHasTriggerOpenUrl=_bHasTriggerOpenUrl;
@property(nonatomic) int useSchemeCount; // @synthesize useSchemeCount=_useSchemeCount;
@property(retain, nonatomic) NSString *encodeSchemeStr; // @synthesize encodeSchemeStr=_encodeSchemeStr;
@property(retain, nonatomic) NSString *jumpAppStoreUrl; // @synthesize jumpAppStoreUrl=_jumpAppStoreUrl;
@property(retain, nonatomic) WebViewOAuthLogic *oauthLogic; // @synthesize oauthLogic=_oauthLogic;
@property(nonatomic) BOOL saveMiniWhenClose; // @synthesize saveMiniWhenClose=_saveMiniWhenClose;
@property(nonatomic) BOOL unableAutoSetStatusBar; // @synthesize unableAutoSetStatusBar=_unableAutoSetStatusBar;
@property(nonatomic) BOOL canSetMPTitleByOut; // @synthesize canSetMPTitleByOut=_canSetMPTitleByOut;
@property(nonatomic) __weak TipsView *dagerTipsView; // @synthesize dagerTipsView=_dagerTipsView;
@property(retain, nonatomic) MMWebCustomNavBar *m_navBarView; // @synthesize m_navBarView=_m_navBarView;
@property(retain, nonatomic) UILabel *tempLabel; // @synthesize tempLabel=_tempLabel;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) CAGradientLayer *maskTitleLayer; // @synthesize maskTitleLayer=_maskTitleLayer;
@property(retain, nonatomic) UIView *maskTitleView; // @synthesize maskTitleView=_maskTitleView;
@property(nonatomic) BOOL shouldShowBottom; // @synthesize shouldShowBottom=_shouldShowBottom;
@property(retain, nonatomic) MMWebBottomToolBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UILabel *m_deeplinkRedirecting; // @synthesize m_deeplinkRedirecting=_m_deeplinkRedirecting;
@property(retain, nonatomic) UIImageView *m_addressBarView; // @synthesize m_addressBarView=_m_addressBarView;
@property(retain, nonatomic) UIView *tailBgView; // @synthesize tailBgView=_tailBgView;
@property(nonatomic) BOOL m_isDisableShareMenu; // @synthesize m_isDisableShareMenu=_m_isDisableShareMenu;
@property(nonatomic) BOOL bIsForceShowCloseButton; // @synthesize bIsForceShowCloseButton=_bIsForceShowCloseButton;
@property(nonatomic) BOOL m_bFullScreen; // @synthesize m_bFullScreen=_m_bFullScreen;
@property(nonatomic) int popGesState; // @synthesize popGesState=_popGesState;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) MMWebTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) BOOL shouldUsePopAni; // @synthesize shouldUsePopAni=_shouldUsePopAni;
@property(nonatomic) int scrollNavBarState; // @synthesize scrollNavBarState=_scrollNavBarState;
@property(nonatomic) float navBarShrinkRemainHeight; // @synthesize navBarShrinkRemainHeight=_navBarShrinkRemainHeight;
@property(nonatomic) float beiginContentOffsetY; // @synthesize beiginContentOffsetY=_beiginContentOffsetY;
@property(nonatomic) int unTrackScrollingNum; // @synthesize unTrackScrollingNum=_unTrackScrollingNum;
@property(nonatomic) float lastSecondContentOffsetY; // @synthesize lastSecondContentOffsetY=_lastSecondContentOffsetY;
@property(nonatomic) float lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(nonatomic) BOOL shouldHandleShrink; // @synthesize shouldHandleShrink=_shouldHandleShrink;
@property(retain, nonatomic) NSMutableDictionary *brandIconDic; // @synthesize brandIconDic=_brandIconDic;
@property(nonatomic) BOOL m_bPreloadInMem; // @synthesize m_bPreloadInMem=_m_bPreloadInMem;
@property(copy, nonatomic) CDUnknownBlockType interceptCloseBlock; // @synthesize interceptCloseBlock=_interceptCloseBlock;
@property(retain, nonatomic) MMTimer *wepkgLoadingTimer; // @synthesize wepkgLoadingTimer=_wepkgLoadingTimer;
@property(retain, nonatomic) NSMutableArray *visibleStateArray; // @synthesize visibleStateArray=_visibleStateArray;
@property(nonatomic) unsigned int reportDesinatedBeginTime; // @synthesize reportDesinatedBeginTime=_reportDesinatedBeginTime;
@property(nonatomic) unsigned int reportBeginTime; // @synthesize reportBeginTime=_reportBeginTime;
@property(retain, nonatomic) NSMutableArray *reportFormatDataList; // @synthesize reportFormatDataList=_reportFormatDataList;
@property(nonatomic) BOOL reportInstantly; // @synthesize reportInstantly=_reportInstantly;
@property(nonatomic) int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) MMWebCustomLog *customLog; // @synthesize customLog=_customLog;
@property(retain, nonatomic) MMWebViewPresetUI *presetUI; // @synthesize presetUI=_presetUI;
@property(nonatomic) BOOL m_bIsJsapiUploadVideoUploading; // @synthesize m_bIsJsapiUploadVideoUploading=_m_bIsJsapiUploadVideoUploading;
@property(nonatomic) BOOL m_isLanscape; // @synthesize m_isLanscape=_m_isLanscape;
@property(nonatomic) BOOL m_bIsRestrictAppstore; // @synthesize m_bIsRestrictAppstore=_m_bIsRestrictAppstore;
@property(nonatomic) BOOL m_bIsDelayPushWebView; // @synthesize m_bIsDelayPushWebView=_m_bIsDelayPushWebView;
@property(retain, nonatomic) UILabel *m_addressLabel; // @synthesize m_addressLabel=_m_addressLabel;
@property(retain, nonatomic) MMWebProgressBar *m_progressBar; // @synthesize m_progressBar=_m_progressBar;
@property(nonatomic) BOOL m_bUserHasClickLink; // @synthesize m_bUserHasClickLink=_m_bUserHasClickLink;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) BOOL m_bDeepLink; // @synthesize m_bDeepLink=_m_bDeepLink;
@property(nonatomic) BOOL m_canCache; // @synthesize m_canCache=_m_canCache;
@property(retain, nonatomic) MMWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) BOOL m_bUseColorfulNavBar; // @synthesize m_bUseColorfulNavBar=_m_bUseColorfulNavBar;
@property(nonatomic) BOOL m_bIsStatusBarBlack; // @synthesize m_bIsStatusBarBlack=_m_bIsStatusBarBlack;
@property(nonatomic) BOOL m_bReadingArticleBanner; // @synthesize m_bReadingArticleBanner;
@property(nonatomic) BOOL m_bShowOnNewMainFrameBanner; // @synthesize m_bShowOnNewMainFrameBanner;
@property(nonatomic) BOOL m_bIsPortraitBeforeOpenUrl; // @synthesize m_bIsPortraitBeforeOpenUrl;
@property(readonly, nonatomic) BOOL m_isPreviewing; // @synthesize m_isPreviewing;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl; // @synthesize m_a8KeyLogicImpl;
@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl;
@property(nonatomic) __weak id <MMWebViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *webView; // @synthesize webView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getCurrentOfflinePageA8KeyData;
- (id)tagForCurrentPage;
- (void)forceShowCloseButton;
- (void)interceptClose;
- (BOOL)shouldInterceptClose;
- (void)configInterceptClose:(CDUnknownBlockType)arg1 alwayIntercept:(BOOL)arg2;
- (void)configInterceptClose:(CDUnknownBlockType)arg1;
- (void)setNotifyWillReturnBlock:(CDUnknownBlockType)arg1;
- (void)setDelayLoadActionBlock:(CDUnknownBlockType)arg1;
- (id)getLeftBarButton;
- (void)tryStartOutlinkDetect;
- (unsigned char)getPermissionWithName:(id)arg1;
- (void)sendGetA8KeyEvent:(id)arg1;
- (void)removeSendAppMessageJsapiTempAllowAuthority;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)doJsApiInitEvent;
- (void)setCurrentUrl:(id)arg1;
- (unsigned long)getCurrentScene;
- (BOOL)isContentOriginal;
- (BOOL)isCanShowAllMenus;
- (BOOL)isPageDidLoad;
- (id)getCurrentUrl;
- (void)stopForcedRotationToPortrait;
- (void)startForcedRotationToPortrait;
- (id)getWebViewTimeProfileData;
- (void)permitTempAccessOfJSApi:(id)arg1;
- (void)shareToFB;
- (void)immediateDismissWebViewController;
- (void)dismissWebViewController;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (BOOL)isMenuAction:(id)arg1;
- (id)getRequestingOrCurrentUrl;
- (void)onSelectFont:(unsigned long)arg1;
- (BOOL)shoudDelaySetFont;
- (void)cleanJSAPIDelegate;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)forcedRotationToPortrait;
- (void)stopWepkgLoadingView;
- (void)delaySetFontsWithSize:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (BOOL)hasUrlPermission:(id)arg1;
- (id)getLastUrl;
- (id)getRoutUrls;
- (unsigned long)GetGeneralBitSetForUrl:(id)arg1;
- (BOOL)IsBitsetSet:(unsigned long)arg1 forUrl:(id)arg2;
- (BOOL)allowShowAppMsgTailName;
- (BOOL)allowCallJsapiBeforeLoad;
- (BOOL)allowFayByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowScanQRCodeByImage;
- (unsigned long)GetPermissionBitSet3;
- (unsigned long)GetPermissionBitSet2;
- (unsigned long)GetPermissionBitSet;
- (unsigned long long)GetDeepLinkBitSet;
@property(readonly, nonatomic) BOOL m_bOfflinePage;
- (id)getInitUrl;
- (id)getShareUrl;
- (id)getCurrentAppId;
- (void)shouldShowGoBackBtn;
- (void)setSwipeBackInteractiveEnable:(BOOL)arg1;
- (void)setPublisher:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)isViewDidAppear;
- (id)extraInfo;
- (void)setExtraInfoValue:(id)arg1 forKey:(id)arg2;
- (void)setDisableShareMenu:(BOOL)arg1;
- (void)setAutoSetTitle:(BOOL)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(CDUnknownBlockType)arg2;
- (void)OnClose;
- (void)backToAppIfNeed;
- (void)OnReturn;
- (void)doBackActionCleanWithType:(BOOL)arg1;
- (void)onClickFailView:(id)arg1;
- (void)done:(id)arg1;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)goToURL:(id)arg1;
- (void)goForward;
- (void)goBack;
- (void)stop;
- (void)reload;
- (void)StartLoadWeb;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)keyboardDidShow:(id)arg1;
- (void)onMenuControllerDidShow:(id)arg1;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)removeNotificationAndObservers;
- (void)initNotificationAndObservers;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (id)getJSFunctionDef:(id)arg1;
- (void)onShowAutoOAuthViewWithSchemeUrl:(id)arg1 Success:(BOOL)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;
- (void)onStartGetA8Key;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8KeyWithMediaAutoPlay;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (id)webviewController;
- (void)handleMonitorMessage:(id)arg1 params:(id)arg2;
- (void)onCopy:(id)arg1;
- (BOOL)isTempAccessOfJSApiPermitted:(id)arg1;
- (void)onPageStateChange:(id)arg1;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(CDUnknownBlockType)arg3 failHandleBlock:(CDUnknownBlockType)arg4 apiPermission:(unsigned char)arg5;
- (unsigned char)getJSApiPermission:(id)arg1;
- (BOOL)isGetingA8Key;
- (id)getCurrentWebviewViewController;
- (BOOL)isSvrErrorTipForbidden;
- (void)willDisappear;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)willDismissAndShow;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didAppear;
- (void)willAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (id)getWXHookScriptStr;
- (id)getPreInjectScriptStr;
- (BOOL)allowsAutoMediaPlay;
- (BOOL)allowsInlineMediaPlay;
- (void)webViewDidReceiveResponse:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)recordArrRouteUrl:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)tryHandleHttpRefer:(id)arg1;
- (BOOL)trySyncGetA8KeyRequest:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 isMainFrame:(BOOL)arg4;
- (void)initCustomHandler:(id)arg1;
- (void)initJsInitInfo:(id)arg1;
- (void)initWebView:(id)arg1;
- (void)initWebViewA8key:(id)arg1;
- (void)initCustomParams:(id)arg1;
- (void)internalInitWithUrl:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 presetUI:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 presetUI:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 referer:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3;
- (unsigned int)getOneSectionTime:(unsigned int)arg1 EndTime:(unsigned int)arg2 ReportEndTime:(unsigned int)arg3;
- (unsigned int)calcAllVisibleTimeDuration:(unsigned int)arg1;
- (int)getTimeToAdd:(id)arg1;
- (id)processingPlaceHolder:(id)arg1 PlaceHolder:(id)arg2 TimeDuration:(unsigned int)arg3;
- (void)reportTimeEnd;
- (BOOL)addWebviewVisibleState:(BOOL)arg1 Reason:(id)arg2;
- (void)reportTimeBegin;
- (BOOL)isGamePage;
- (void)onTapBlurEffectView;
- (void)onFinalBackButtonClick:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)willEndSearch:(id)arg1;
- (void)didBeginSearch:(id)arg1;
- (void)willBeginSearch:(id)arg1;
- (void)cancelWebSearchAnimated:(BOOL)arg1;
- (BOOL)isWebSearchActive;
- (void)prepareHistoryWebSearchForBrandContact:(id)arg1;
- (float)getWebBottomBarHeight;
- (void)restoreDefaultBackgroundColorAndCleanFooterBounceColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDisableWebViewScrollViewBounces;
- (void)setPayTitle:(id)arg1;
- (void)resetStatusBarFromWebSearch;
- (void)setDisableProgressView:(BOOL)arg1;
- (void)setUIDisableShareMenu:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)hideLoadFailView;
- (void)relayoutLoadFailView;
- (void)showLoadFailView:(unsigned long)arg1 errorCode:(int)arg2;
- (void)handleUIWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)handleUIwillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setShareBarItem:(id)arg1;
- (void)updateRightBarButtonWithURL:(id)arg1;
- (void)setTailBackGroundColor:(id)arg1;
- (void)restoreToDefaultNavBar;
- (void)setNavBarBgColor:(id)arg1;
- (void)restoreFontView;
- (void)restoreTailBGView;
- (void)restoreMainTabBarNavBkgWhenInSplitView;
- (void)restoreAddressBar;
- (void)initMaskView;
- (void)initBottomBar;
- (void)initAddressBarView;
- (void)initDeeplinkRedirectingView;
- (void)initNavBarView;
- (void)initProgressView;
- (void)configBackCon;
- (void)configNavigationBarItem;
- (void)configStatusBar;
- (void)initCommonViewWithUrl:(id)arg1 presentModal:(BOOL)arg2;
- (void)relayoutWebContent;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2;
- (void)jumpDeepLink:(id)arg1;
- (BOOL)canAccessDeepLink:(id)arg1 Url:(id)arg2;
- (void)hideAllNonBaseMenuItem;
- (void)showAllNonBaseMenuItem;
- (void)showMenuitemBatch:(id)arg1;
- (void)hideMenuitemBatch:(id)arg1;
- (void)modifyPermissionValue:(id)arg1 permissionValue:(unsigned char)arg2;
- (void)clearWebviewCacheAndCookie:(BOOL)arg1;
- (void)cleanWebCacheFromReloadMenuAction;
- (void)doCleanCookiesForUrl:(id)arg1;
- (void)cleanCookiesIfNeed;
- (void)handleOnShowAutoOAuthViewWithSchemeUrl:(id)arg1 Success:(BOOL)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;
- (void)handleOAuth:(id)arg1;
- (BOOL)needHandleNativeOAuth:(id)arg1;
- (void)setEnterpriseConnectorLogic:(id)arg1;
- (id)getEnterpriseConnectorLogic;
- (void)voiceTic;
- (BOOL)checkAutoMediaPlayFor:(id)arg1 withRegStr:(id)arg2;
- (id)getCurrentBrandIcon;
- (void)doDNS;
- (BOOL)judgeAllowsAutoMediaPlay;
- (BOOL)isMPArticleByURL:(id)arg1;
- (id)imageWithColor:(id)arg1 origin:(id)arg2;
- (id)getOperationButtonImageNameWithURL:(id)arg1;
- (id)getJumpOutAppStoreAlertTitleWithUrl:(id)arg1;
- (id)getWebviewBannerTitle;
- (id)getAddressBarHostText:(id)arg1;
- (float)maxReduceNavibarHeight;
- (id)titleView;
- (float)navigationBarHeight;
- (float)statusBarHeight;
- (BOOL)isScrollViewExceedsBottom;
- (BOOL)isScrollViewExceedsTop;
- (void)setTitleView:(id)arg1;
- (void)onNavigationBarShrink:(float)arg1 maxReduceNavibarHeight:(float)arg2;
- (void)setNavigationBarTitleShrink:(float)arg1 withFakeAnimation:(BOOL)arg2;
- (void)setNavigationBarTitleShrink:(float)arg1;
- (void)setScrollState:(id)arg1;
- (void)setNavigationBarAlpha:(float)arg1 withTitleIncluded:(BOOL)arg2;
- (void)fixScrollViewContentOffset;
- (void)setNavigationBarY:(float)arg1 shouldFilterSame:(BOOL)arg2;
- (void)setNavigationBarY:(float)arg1;
- (void)restoreWebContentAnimate:(BOOL)arg1;
- (void)setFullWebContentSize;
- (void)handleStopScrolling:(id)arg1;
- (void)handleDidScrolling:(id)arg1;
- (void)handleBeginScrolling:(id)arg1;
- (BOOL)shrinkScrollViewShouldScrollToTop:(id)arg1;
- (void)shrinkScrollViewDidEndDecelerating:(id)arg1;
- (void)shrinkScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)shrinkScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)shrinkScrollViewDidScroll:(id)arg1;
- (void)shrinkScrollViewWillBeginDecelerating:(id)arg1;
- (void)viewDidLayoutSubviewsInNavBar;
- (void)shrinkViewDidAppearInVarBar:(BOOL)arg1;
- (void)shrinkViewWillDisappearInNavBar:(BOOL)arg1;
- (void)shrinkViewWillAppearInNavBar:(BOOL)arg1;
- (void)showJSLog:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)DismissMyWebViewAnimated:(BOOL)arg1;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)setShouldPop:(BOOL)arg1;
- (void)showSearchTextKeyboard;
- (void)removeAllHighlights;
- (void)highlightAllOccurencesOfString:(id)arg1 searchIndex:(unsigned int)arg2;
- (void)injectSearchInPageJS;
- (void)tryLogWebViewJumpOut;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
- (void)handleClickTipsBtn:(id)arg1 Index:(int)arg2 withText:(id)arg3;
- (void)handleClickEmptyBackgroundViewToHideTips;
- (void)showAlertBeforeJumpAppStoreWithUrl:(id)arg1;
- (void)delayPopForAppStore;
- (void)delayHandleUrl:(id)arg1;
- (void)handleScanQrCodeUrl:(id)arg1;
- (BOOL)shouldHandleScanQrCodeUrl:(id)arg1;
- (void)handleJumpUrl:(id)arg1;
- (BOOL)shouldHandleJumpUrl:(id)arg1;
- (void)handleJumpProfileUrl:(id)arg1;
- (BOOL)shouldHandleJumpProfileUrl:(id)arg1;
- (void)handleUrlHandler:(id)arg1;
- (void)handleAppStroeUrlString:(id)arg1;
- (void)handleFeedBackWithUrlString:(id)arg1;
- (BOOL)shouldHandleDlFeedBackRange:(id)arg1;
- (void)handleDeepLinkWithUrlString:(id)arg1;
- (void)promptForAuthInfo:(id)arg1;
- (void)checkApiAuthorization:(id)arg1;
- (id)onWebViewPassParams:(id)arg1;
- (void)startWebSearch:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)setCustomMenu;
- (void)reportFailToLoadCachePage;
- (void)reportLoadPageTime:(double)arg1 url:(id)arg2;
- (void)reportDidFailLoadWebView:(id)arg1 loadingUrl:(id)arg2 error:(id)arg3;
- (void)reportDidFinishedLoadWebView:(id)arg1 loadingUrl:(id)arg2;
- (void)reportShouldStartHttpsUrl:(id)arg1;
- (void)reportJSCall:(id)arg1 withParam:(id)arg2;
- (void)tryReportMonitorMessage:(id)arg1 params:(id)arg2;
- (void)reportCopyContent:(id)arg1;
- (void)reportIDKeyForWKWebViewTerminateBackground;
- (void)reportIDKeyForWKWebViewTerminateForceground;
- (void)reportIDKeyForLoadFinish:(long long)arg1;
- (void)reportIDKeyForSystemError:(int)arg1;
- (void)reportIDKeyForAllRequest;
- (void)logFeature11576WithOpType:(unsigned long)arg1;
- (void)onLongPressOnWebview:(id)arg1;
- (void)enableLongPressDetect;
- (BOOL)shouldShowCustomMenuAction;
- (BOOL)shoudlDisableMenuItem:(id)arg1;
- (BOOL)isShowMenuItem:(id)arg1;
- (BOOL)isAuthMonitor:(id)arg1 event:(id)arg2;
- (void)reportWhenClickMenuWithActionType:(unsigned int)arg1;
- (void)onExposeComplete;
- (void)showEnterpriseConnectResult:(id)arg1;
- (void)onEnterpriseConnectFail:(id)arg1;
- (void)onEnterpriseConnectSucceed:(id)arg1;
- (void)onEnterpriseSelectChat:(id)arg1 brand:(id)arg2 logic:(id)arg3;
- (void)onEnterpriseSelectBrand:(id)arg1 logic:(id)arg2;
- (void)onWebViewEditTag;
- (void)onWebViewDelete;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidScroll:(id)arg1;
- (void)logFeature11577WithOpType:(unsigned int)arg1;
- (void)miniMizeAniWithDeleLay:(unsigned long)arg1;
- (void)didSelecteMenuItem:(id)arg1;
- (void)scrollActionSheet:(id)arg1 clickCustomBtn:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)setupRow1;
- (void)setupRow2;
- (void)setupIconActionSheetCells;
- (void)addWebviewSearchButtonWithArray:(id)arg1;
- (void)setupPreShowIconActionSheet;
- (void)AddMemuData:(id)arg1 toRow:(id)arg2;
- (void)setupCustomMenuForJD;
- (void)addJSCustomMenuData:(id)arg1;
- (void)showCustomActionSheet:(id)arg1;
- (void)showH5GameCustomMenu:(id)arg1 OrientationLocked:(BOOL)arg2;
- (void)onOperate:(id)arg1;
- (void)addH5GameExtraButton:(id)arg1;
- (void)addViewBrandContactButtonWithArrary:(id)arg1;
- (void)addReadArticleButtonWithArrary:(id)arg1;
- (void)addSmallWebPageButtonWithArray:(id)arg1;
- (void)addCancleOrBackToNewMainFrameButtonWithArrary:(id)arg1;
- (void)addQQBrowserButtonWithArrary:(id)arg1;
- (void)addShareToWeWorkButtonWithArray:(id)arg1;
- (void)addShareToQZoneButtonWithArray:(id)arg1;
- (void)addShareToQQButtonWithArray:(id)arg1;
- (void)addShareToWeReadButtonWithArray:(id)arg1;
- (void)addExposeButtonWithArray:(id)arg1;
- (void)addAdjustFontButtonWithArray:(id)arg1;
- (void)addFavouriteButtonWithArray:(id)arg1;
- (void)addCopyToPasteboardButtonWithArray:(id)arg1;
- (void)addSendToEnterpriseWithArray:(id)arg1;
- (void)addOpenInSafariButtonWithArray:(id)arg1;
- (void)addRefreshButtonWithArray:(id)arg1;
- (void)addSupportBrandToMenuAtEndOf:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 disable:(BOOL)arg4 userInfo:(id)arg5;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 disable:(BOOL)arg4;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)doSearchInPage;
- (void)readMode;
- (void)hideChangeFont;
- (void)exposeArticle;
- (void)showChangeFont:(unsigned long)arg1;
- (void)copyToPasteBoard;
- (void)openWithQQBrowser;
- (void)openWithSafari;
- (void)jumpToInstallUrl:(id)arg1;
- (void)shareWithAppMessage:(id)arg1;
- (BOOL)isEnableCustom:(id)arg1 domainPathList:(id)arg2;
- (void)sendToEnterprise;
- (void)shareWithEmail;
- (void)shareToWeWork;
- (void)shareToQZone;
- (void)shareToWeibo;
- (void)shareToQQ;
- (void)shareToWeRead;
- (void)shareToFaceBook;
- (void)shareToTimeline;
- (void)setFontWithSize:(int)arg1;
- (void)log3DTouchWebViewActionFeatureWithOpType:(id)arg1;
- (id)previewActionItems;
- (id)initForwardPreviewWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3;
- (void)setPreviewFrame:(struct CGRect)arg1;
- (void)setPreviewTopBar:(id)arg1;
- (id)initForPreviewWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3;
- (void)commitViewController;
- (BOOL)canPop;
@property(nonatomic) __weak UIView *previewSourceView;
@property(nonatomic) __weak UIViewController *previewFromController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

