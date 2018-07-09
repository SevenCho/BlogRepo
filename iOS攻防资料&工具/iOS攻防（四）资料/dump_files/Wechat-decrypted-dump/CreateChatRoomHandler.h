//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseOpenSDKHandler.h"

#import "MMWebViewDelegate.h"
#import "ShareConfirmViewDelegate.h"

@class NSString, ShareConfirmView;

@interface CreateChatRoomHandler : BaseOpenSDKHandler <MMWebViewDelegate, ShareConfirmViewDelegate>
{
    NSString *_groupId;
    NSString *_openId;
    NSString *_chatRoomName;
    NSString *_chatRoomNickName;
    NSString *_extMsg;
    ShareConfirmView *_confirmView;
}

- (void).cxx_destruct;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackToApp:(id)arg1;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)backTo3rdApp:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)showSucessView;
- (void)openCreateChatRoomH5:(id)arg1;
- (void)realHandleReqAfterermissionValidation;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

