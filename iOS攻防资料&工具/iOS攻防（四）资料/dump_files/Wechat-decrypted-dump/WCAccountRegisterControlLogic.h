//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IAddressBookMgrExt.h"
#import "IRsaCertMgrExt.h"
#import "WCAccountGraphicVerifyViewControllerDelegate.h"

@class NSString, WCAccountFindFriendControlLogic;

@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <IAddressBookMgrExt, WCAccountGraphicVerifyViewControllerDelegate, IRsaCertMgrExt>
{
    BOOL m_bCanSyncAddressBook;
    unsigned long m_idc_redirect_count;
    unsigned long m_mmtls_set_count;
    unsigned long long m_ui64BeginTime;
    unsigned long m_uiABtest;
    unsigned long m_uiCCType;
    WCAccountFindFriendControlLogic *m_findFriendLogic;
}

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleNewRegResponse:(id)arg1;
- (void)onEnableAddressBookTip;
- (void)showDeniedTip;
- (void)showEnableTip;
- (void)enableAddressBook;
- (void)jumpToMainFrame;
- (void)OnConfirmAddressBookStatus:(unsigned long)arg1;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (BOOL)regAccount;
- (id)genNewRegRequest;
- (void)startLogic;
- (void)dealloc;
- (void)reportABTestStatus:(unsigned long)arg1;
- (void)setABTest:(unsigned long)arg1 CCType:(unsigned long)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

