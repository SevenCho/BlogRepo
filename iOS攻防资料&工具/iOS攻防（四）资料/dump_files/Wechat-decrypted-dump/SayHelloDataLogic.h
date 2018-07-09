//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ContactsItemViewDelegate.h"
#import "FriendAsistSessionExt.h"
#import "IAutoSetRemarkExt.h"
#import "IContactMgrExt.h"
#import "SendVerifyMsgViewControllerDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class CContactVerifyLogic, NSMutableArray, NSMutableDictionary, NSString, SendVerifyMsgLogicController;

@interface SayHelloDataLogic : MMObject <SendVerifyMsgViewControllerDelegate, FriendAsistSessionExt, ContactsItemViewDelegate, contactVerifyLogicDelegate, IAutoSetRemarkExt, IContactMgrExt>
{
    unsigned long m_uiScene;
    id <SayHelloDataLogicDelegate> m_delegate;
    NSMutableArray *m_arrHellos;
    NSMutableDictionary *m_dicSections;
    NSMutableDictionary *m_dicHellos;
    CContactVerifyLogic *m_oContactVerifyLogic;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
}

+ (id)getContactFrom:(id)arg1;
@property(nonatomic) __weak id <SayHelloDataLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onModifyContact:(id)arg1;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onFriendAssistStatusChange:(id)arg1;
- (void)onFriendAssistClearMsg:(id)arg1;
- (void)onFriendAssistRelpyMsg:(id)arg1;
- (void)onFriendAssistAddMsg:(id)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)dealloc;
- (id)initWithScene:(unsigned long)arg1 delegate:(id)arg2;
- (id)getSectionTitle:(unsigned int)arg1;
- (unsigned long)getHelloCount:(unsigned int)arg1;
- (unsigned long)getSectionCount;
- (void)addContact:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)handleAddedContact:(id)arg1;
- (void)clearMsg:(unsigned long)arg1;
- (void)clearMsg:(unsigned long)arg1 ForIndex:(unsigned long)arg2 Section:(unsigned long)arg3;
- (id)getChatName:(unsigned long)arg1;
- (void)insetLatestHello:(id)arg1;
- (void)loadData:(unsigned long)arg1;
- (id)getContactForIndex:(unsigned long)arg1 Section:(unsigned long)arg2;
- (id)getContactForUserName:(id)arg1;
- (void)removeArrHello:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

