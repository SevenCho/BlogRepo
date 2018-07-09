//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMTipsViewControllerDelegate.h"
#import "MMWebViewDelegate.h"

@class MMUIViewController, MMUIWindow, MMWebViewController, NSString;

@interface WCPrivacyPolicyControlLogic : MMObject <MMWebViewDelegate, MMTipsViewControllerDelegate>
{
    MMUIWindow *_window;
    MMUIViewController *_rootVC;
    MMWebViewController *_webviewVC;
    MMWebViewController *_webviewConfirmVC;
    BOOL _bFromReg;
    BOOL _bShowPrivacy;
    BOOL _bShowBirthday;
    BOOL _bNeedOpenplatform;
    BOOL _bNeedConfirm;
    id <WCPrivacyPolicyControlLogicDelegate> _delegate;
    NSString *_privacyUrl;
    NSString *_birthdayUrl;
    NSString *_confirmUrl;
    NSString *_guidanceContent;
    NSString *_doublecheckContent;
    NSString *_doublecheckCancel;
    NSString *_doublecheckOk;
    NSString *_cc;
    NSString *_scene;
    NSString *_userName;
    NSString *_regSessionid;
}

+ (id)rootPath;
@property(retain, nonatomic) NSString *regSessionid; // @synthesize regSessionid=_regSessionid;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *cc; // @synthesize cc=_cc;
@property(nonatomic) BOOL bNeedConfirm; // @synthesize bNeedConfirm=_bNeedConfirm;
@property(nonatomic) BOOL bNeedOpenplatform; // @synthesize bNeedOpenplatform=_bNeedOpenplatform;
@property(nonatomic) BOOL bShowBirthday; // @synthesize bShowBirthday=_bShowBirthday;
@property(nonatomic) BOOL bShowPrivacy; // @synthesize bShowPrivacy=_bShowPrivacy;
@property(nonatomic) BOOL bFromReg; // @synthesize bFromReg=_bFromReg;
@property(retain, nonatomic) NSString *doublecheckOk; // @synthesize doublecheckOk=_doublecheckOk;
@property(retain, nonatomic) NSString *doublecheckCancel; // @synthesize doublecheckCancel=_doublecheckCancel;
@property(retain, nonatomic) NSString *doublecheckContent; // @synthesize doublecheckContent=_doublecheckContent;
@property(retain, nonatomic) NSString *guidanceContent; // @synthesize guidanceContent=_guidanceContent;
@property(retain, nonatomic) NSString *confirmUrl; // @synthesize confirmUrl=_confirmUrl;
@property(retain, nonatomic) NSString *birthdayUrl; // @synthesize birthdayUrl=_birthdayUrl;
@property(retain, nonatomic) NSString *privacyUrl; // @synthesize privacyUrl=_privacyUrl;
@property(nonatomic) __weak id <WCPrivacyPolicyControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)onWebViewPassParams:(id)arg1;
- (void)onWebViewClickClose;
- (void)onWebViewDisagree;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (id)showPrivacyPolicyView:(id)arg1 animate:(BOOL)arg2 close:(BOOL)arg3;
- (void)startLogic;
- (BOOL)checkData;
- (void)dealloc;
- (id)loadData;
- (void)saveData:(id)arg1;
- (id)birthdayPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

