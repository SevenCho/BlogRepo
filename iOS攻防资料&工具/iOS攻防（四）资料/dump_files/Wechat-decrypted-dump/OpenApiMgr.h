//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "MMTipsViewControllerDelegate.h"
#import "OnGotAppMsgHandleDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayOpenApiExt.h"

@class AppAddCardHandler, AppJumpLogicHelper, BaseOpenSDKHandler, ChooseCardHandler, ChooseInvoiceHandler, JumpToBizWebviewHandler, NSMutableDictionary, NSString, NSURL, NewAuthHandler, OnGotAppMsgHandler, OpenMiniProgramHandler, OpenProfileHandler, OpenRankListHandler, OpenTempSessionHandler, OpenTypeWebViewHandler, OpenWebviewHandler, SMSAddCardHandler, SendAppMsgHandler, SendAppMsgToFavoritesHandler, SendAppMsgToWCHandler, WCTDatabase, WCTTable, WeChatHBHandler, WeChatOfflinePayHandler, WeChatPayHandler, WechatConnectHandler;

@interface OpenApiMgr : MMService <MMTipsViewControllerDelegate, MMService, IMsgExt, WCActionSheetDelegate, WCPayOpenApiExt, SendAppMsgHandleDelegate, OnGotAppMsgHandleDelegate>
{
    SendAppMsgHandler *m_oSendAppMsgHandler;
    OnGotAppMsgHandler *m_oOnGotAppMsgHandler;
    WechatConnectHandler *m_oWechatConnectHandler;
    SendAppMsgToWCHandler *m_oSendAppMsgToWCHandler;
    SendAppMsgToFavoritesHandler *m_oSendAppMsgToFavoritesHandler;
    WeChatPayHandler *m_oWeChatPayHandler;
    WeChatHBHandler *m_oWeChatHBHandler;
    NewAuthHandler *m_oNewAuthHandler;
    AppJumpLogicHelper *m_oAppJumpHandler;
    OpenProfileHandler *m_oOpenProfileHandler;
    JumpToBizWebviewHandler *m_oJumpBizWebHandler;
    SMSAddCardHandler *m_oSMSAddCardHandler;
    AppAddCardHandler *m_oAppAddCardHandler;
    OpenTempSessionHandler *m_oOpenTempSessionHandler;
    OpenWebviewHandler *m_oOpenWebviewHandler;
    OpenTypeWebViewHandler *m_oOpenTypeWebViewHandler;
    OpenRankListHandler *m_oOpenRankListHandler;
    BaseOpenSDKHandler *m_oBaseOpenSDKHandler;
    ChooseCardHandler *m_oChooseCardHandler;
    ChooseInvoiceHandler *m_oChooseInvoiceHandler;
    OpenMiniProgramHandler *m_oOpenMiniProgramHandler;
    WeChatOfflinePayHandler *m_oOfflinePayHandler;
    NSMutableDictionary *m_paraDic;
    BOOL m_uiIsInternalDownload;
    NSURL *m_jumpUrlScheme;
    NSURL *m_alternateAppStoreUrlScheme;
    CDUnknownBlockType m_urlSchemeJumpBlock;
    unsigned int m_showType;
    BOOL m_bIsShowToastWhenLaunchFail;
    NSString *_launchFromAppID;
    NSString *_launchFromLinkUrl;
    WCTDatabase *_db;
    WCTTable *_tableLaunchAppInfo;
}

@property(retain, nonatomic) WCTTable *tableLaunchAppInfo; // @synthesize tableLaunchAppInfo=_tableLaunchAppInfo;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)readConfig;
- (void)onMMConfigUpdated;
- (void)OnEndWithOnGotAppMsgHandle:(id)arg1;
- (void)OnStayAtWechatWithSendAppMsgHandle:(id)arg1;
- (BOOL)sendOfflinePayRespToApp:(id)arg1 errCode:(int)arg2 errStr:(id)arg3;
- (void)doOpenWCPayOfflineView:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doOAuthOpenApi:(id)arg1 authInfo:(id)arg2 BundleID:(id)arg3;
- (void)doWCHBOpenApi:(id)arg1 BundleID:(id)arg2 payInfo:(id)arg3;
- (void)doWCPayWapWithPayInfo:(id)arg1 BundleID:(id)arg2;
- (void)doWCPayOpenApi:(id)arg1 BundleID:(id)arg2 payInfo:(id)arg3;
- (void)doChooseInvoice:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;
- (void)doChooseCard:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;
- (void)doAppAddCard:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;
- (void)doSMSAddCardApi:(id)arg1;
- (void)doJumpToBizWebview:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;
- (void)doOpenProfileApi:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;
- (void)doHandleScanResult:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)joinChatRoom:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doCreateChatRoom:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doOpenRankListWithAppId:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doOpenTypeWebviewWithAppId:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doOpenMiniProgram:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doOpenWebviewWithAppId:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)doOpenTempSessionWithAppId:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (BOOL)sendOpenTypeWebViewToApp:(id)arg1 query:(id)arg2 errCode:(int)arg3;
- (BOOL)sendOpenWebViewToApp:(id)arg1 errCode:(int)arg2;
- (BOOL)sendOpenTempSessionRespToApp:(id)arg1 errCode:(int)arg2 notifyStr:(id)arg3;
- (BOOL)sendWCChooseInvoiceResp:(id)arg1 toApp:(id)arg2 errCode:(int)arg3;
- (BOOL)sendWCChooseCardResp:(id)arg1 toApp:(id)arg2 errCode:(int)arg3;
- (BOOL)sendWCAddCardResp:(id)arg1 toApp:(id)arg2 errCode:(int)arg3;
- (BOOL)sendWCHBResp:(id)arg1 toApp:(id)arg2;
- (BOOL)sendWCPayResp:(id)arg1 toApp:(id)arg2;
- (void)OnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)jumpToWebStoreWithAppleAppId:(id)arg1 url:(id)arg2 viewController:(id)arg3;
- (void)jumpToInstallUrl:(id)arg1 isInternalDownload:(BOOL)arg2 showAlertOnDownload:(BOOL)arg3 currentViewController:(id)arg4;
- (void)jumpToInstallUrl:(id)arg1 isInternalDownload:(BOOL)arg2 showAlertOnDownload:(BOOL)arg3;
- (void)jumpToInstallUrl:(id)arg1 isInternalDownload:(BOOL)arg2;
- (void)jumpToInstallUrl:(id)arg1;
- (BOOL)isInternalDownload;
- (void)setIsInternalDownload:(BOOL)arg1;
- (void)cancelOpenOfflinePay;
- (void)cancelOpenRankList;
- (void)cancelOpenSDKHandler;
- (void)cancelOpenTypeWebview;
- (void)cancelOpenMiniProgram;
- (void)cancelOpenWebview;
- (void)cancelOpenTempSession;
- (void)cancelChooseInvoice;
- (void)cancelChooseCard;
- (void)cancelAppAddCard;
- (void)cancelSMSAddCard;
- (void)cancelJumpToBizWebview;
- (void)cancelOpenProfile;
- (void)cancelNewAuth;
- (void)cancelWechatHB;
- (void)cancelWechatPay;
- (void)cancelSendAppMsgToFavorites;
- (void)cancelSendAppMsgToWCHandler;
- (void)cancelWechatConnectHandler;
- (void)cancelOnGotAppMsgHandler;
- (void)cancelSendAppMsgHandler;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (BOOL)sendReqShowMessage:(id)arg1 toApp:(id)arg2;
- (BOOL)sendResp:(id)arg1 toApp:(id)arg2;
- (BOOL)sendReq:(id)arg1 conversationAccount:(id)arg2 toApp:(id)arg3;
- (BOOL)sendReqShowMessage:(id)arg1 withMediaInternalMessage:(id)arg2 schemeComplete:(CDUnknownBlockType)arg3;
- (BOOL)sendReqLaunchApp:(id)arg1 withMediaInternalMessage:(id)arg2 schemeComplete:(CDUnknownBlockType)arg3;
- (void)reportLaunchReqFromAppID:(id)arg1 linkUrl:(id)arg2;
- (BOOL)launch3rdApp:(id)arg1;
- (BOOL)launch3rdApp:(id)arg1 withParameter:(id)arg2 showType:(unsigned int)arg3;
- (void)cancelAllApi;
- (void)doApi:(id)arg1 bundleId:(id)arg2 fromSysCopy:(BOOL)arg3;
- (BOOL)checkSupportCommand:(unsigned long)arg1;
- (void)jumpOutWechatWithoutComfirm;
- (void)directReturnOfNoInstallApp;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)resetSchemeVariable;
- (BOOL)confirmJumpOutWeChat;
- (BOOL)alertOpenAppID:(id)arg1 alternateAppStoreURL:(id)arg2 appMessage:(id)arg3 schemeComplete:(CDUnknownBlockType)arg4;
- (BOOL)alertOpenURL:(id)arg1 schemeComplete:(CDUnknownBlockType)arg2;
- (BOOL)alertOpenURL:(id)arg1;
- (BOOL)alertLaunchApp:(id)arg1;
- (id)getAppIdByFunctionType:(int)arg1;
- (BOOL)isShowAppMessageBottom:(id)arg1;
- (BOOL)isShowTimelineSource:(id)arg1;
- (BOOL)isShowTimeLineJumpLink:(id)arg1;
- (BOOL)isCanJumpWithAppId:(id)arg1;
- (BOOL)jumpByAppIdInTimeline:(id)arg1;
- (BOOL)jumpByAppIdInMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)checkAppInInfoPlistWithScheme:(id)arg1;
- (BOOL)checkIfNoNeedAlertWithScheme:(id)arg1;
- (BOOL)insertNoAlertScheme:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)deleteAlertDB;
- (void)closeAlertDB;
- (void)openAlertDB;
- (id)dbPath;
- (void)onInitAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

