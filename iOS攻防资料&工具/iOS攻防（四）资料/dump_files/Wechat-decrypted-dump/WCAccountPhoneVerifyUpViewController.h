//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSDictionary, NSString, UIButton;

@interface WCAccountPhoneVerifyUpViewController : WCAccountBaseViewController <MFMessageComposeViewControllerDelegate>
{
    id <WCAccountPhoneVerifyUpViewControllerDelegate> m_delegate;
    UIButton *m_sendBtn;
    UIButton *m_hasSendBtn;
    NSDictionary *m_oldTitleTextAttributes;
    int m_oldUIBarStyle;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)onSend;
- (void)recoverOldSetting;
- (void)saveOldSetting;
- (void)initView;
- (BOOL)useGrayBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

