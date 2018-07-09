//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMMailContactSelectViewDelegate.h"
#import "MailContactFilterViewDelegate.h"
#import "MailReceiverEditViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class CContact, MMTableViewInfo, MailContactFilterView, MailReceiverEditView, MailSubjectEditView, NSMutableArray, NSString, UIButton;

@interface ShareQRCodeByEmailViewController : MMUIViewController <MailReceiverEditViewDelegate, PBMessageObserverDelegate, MailContactFilterViewDelegate, MMMailContactSelectViewDelegate, UIAlertViewDelegate>
{
    MailReceiverEditView *m_receiverView;
    MailSubjectEditView *m_topicView;
    UIButton *m_contentView;
    MailContactFilterView *m_filterView;
    NSMutableArray *m_arrAllMailContacts;
    CContact *m_contact;
    MMTableViewInfo *m_tableViewInfo;
}

@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)contactReturn:(id)arg1;
- (void)filterViewBeginDragging;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (void)onAddMailContact:(id)arg1;
- (void)onMailContactChanged:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onTextFieldBeginEdit:(id)arg1;
- (void)makeCell:(id)arg1:(id)arg2;
- (void)hideKeyBoard;
- (void)onSelectCell:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initContentView;
- (void)reloadTableData;
- (void)initData;
- (void)onShare;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onBack;
- (void)onReturn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

