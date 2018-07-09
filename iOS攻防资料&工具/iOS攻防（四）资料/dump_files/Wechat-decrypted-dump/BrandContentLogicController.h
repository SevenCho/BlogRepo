//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeixinContentLogicController.h"

#import "BrandDeviceConnectLogicControllerDelegate.h"
#import "BrandProfileSettingViewControllerDelegate.h"
#import "BrandStyleUILogicControllerDelegate.h"
#import "IWCDeviceBrandMgrExt.h"
#import "MsgDelegate.h"

@class BrandActionReportLogicController, BrandDeviceConnectLogicController, BrandPublicWifiReportLogicController, BrandStyleUILogicController, NSString, TemplateMsgExposeLogic, TipsView;

@interface BrandContentLogicController : WeixinContentLogicController <BrandProfileSettingViewControllerDelegate, BrandStyleUILogicControllerDelegate, MsgDelegate, BrandDeviceConnectLogicControllerDelegate, IWCDeviceBrandMgrExt>
{
    TipsView *m_tipsView;
    BrandStyleUILogicController *m_uiLogicController;
    BrandActionReportLogicController *m_reportLogicController;
    BrandDeviceConnectLogicController *m_connectLogicController;
    BrandPublicWifiReportLogicController *m_publicWifiReportLogicController;
    BOOL m_isLastInMenuMode;
    int m_lastInputMode;
    int m_lastPoisitionMode;
    int m_lastContentMode;
    BOOL m_shouldRecordToolViewStatus;
    BOOL m_isShowKeyboardImmediately;
    unsigned int m_stat_beforeUnread;
    unsigned long m_stat_timeStart;
    TemplateMsgExposeLogic *m_exposeLogic;
}

- (void).cxx_destruct;
- (void)deleteAllMessage;
- (void)openSettingView;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)onExposeTemplateMsg:(id)arg1;
- (void)addLocalSystemMessageWhenEnterSession;
- (void)hasTapReaderNodeView;
- (void)onTipsViewClick:(id)arg1;
- (BOOL)hasHardDeviceBrandSubtitle;
- (id)GetPossibleContactByName:(id)arg1;
- (void)updateContactFromServer;
- (id)GetTitleTailImage;
- (id)getTitleView:(id)arg1 withSubTitle:(id)arg2;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(char *)arg3;
- (BOOL)showKeyboardImmediately;
- (BOOL)shouldHideOrginInputToolView;
- (float)getCustomizedAreaWidth;
- (void)disconnectDevice;
- (void)connectDevice;
- (void)updateToolViewStatus;
- (id)getLogicController;
- (id)getInputToolView;
- (void)recordToolViewStatus;
- (void)showKeyboardImmediatelyEnd;
- (void)showKeyboardImmediatelyStart;
- (void)onModifyCustomMenu:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)resetUILogicController:(id)arg1;
- (void)CustomToolViewEX:(id)arg1;
- (void)ViewWillDisappear;
- (void)setNeedUpdateTitle:(char *)arg1;
- (void)ViewDidAppear;
- (void)ViewWillAppear;
- (void)ViewDidInit;
- (void)startScan;
- (void)createAllLogicForContact:(id)arg1;
- (void)ViewWillInit;
- (void)onFinishSelectedLocation;
- (void)hideErrTips;
- (void)showErrTips:(int)arg1;
- (void)updateSubTitle:(id)arg1;
- (void)displayDeviceListView:(id)arg1;
- (BOOL)CanShowSight;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendMultiImage;
- (BOOL)CanSendOriginalImage;
- (void)processImageDidFinish;
- (void)processImageDidCancel;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)processInsertedAsset:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (BOOL)isShowHeadImage:(id)arg1;
- (id)GetRightBarButtonImageName;
- (unsigned long)getMsgCountToLoad;
- (BOOL)isShakeEnabled;
- (BOOL)canAutoplayWhenMessageDownloaded;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(char *)arg1;
- (BOOL)CanSendVoipMsg;
- (BOOL)CanWXTalk;
- (BOOL)CanRemoteRecord;
- (void)onPopFromNavigationController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

