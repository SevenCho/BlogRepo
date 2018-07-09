//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"

@class MMWindowController, NSMutableArray, NSMutableDictionary, NSString, VoicePrintLogicControllerFactory;

@interface BannerToastMgr : MMService <MMService, IMsgExt>
{
    NSMutableArray *m_msgDic;
    NSMutableDictionary *m_friendRecommandMsgs;
    NSMutableDictionary *m_dicSecurityBannerMsgs;
    MMWindowController *m_windowController;
    VoicePrintLogicControllerFactory *m_verifyLogicController;
}

- (void).cxx_destruct;
- (void)logUniDirectionFriendBanner:(id)arg1 opType:(unsigned long)arg2;
- (void)logRecommandFriendBanner:(id)arg1 opType:(unsigned long)arg2 recCount:(unsigned long)arg3;
- (void)logMainFrameBanner:(unsigned long)arg1 opType:(unsigned long)arg2;
- (void)deleteSecurityBannerMsg:(id)arg1;
- (id)getSecurityBannerData:(id)arg1;
- (BOOL)shouldShowSecurityBannerToUser:(id)arg1;
- (id)pathForFriendRec;
- (void)loadFriendRecMsgs;
- (void)saveFriendRecMsgs;
- (void)deleteRecommandFriendMsg:(id)arg1;
- (BOOL)shouldRecommandFriendToUser:(id)arg1;
- (void)HideVoicePrintVerifyWindow;
- (void)showVoicePrintVerifyView;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleBannerMsg:(id)arg1;
- (id)makeMsgByType:(int)arg1;
- (void)loadMsgs;
- (void)saveOneMsg:(id)arg1;
- (void)saveMsgs;
- (id)pathForBannerMsg;
- (id)getRootDir;
- (void)trigBanner;
- (id)getShowMsg;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

