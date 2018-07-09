//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FriendAsistSessionExt.h"
#import "ShakeMgrExt.h"

@class MMSayHelloButton, ShakeMsgUnreadButton, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface ShakeMainView : MMUIScrollView <FriendAsistSessionExt, ShakeMgrExt>
{
    UIImageView *m_imageHide;
    UIImageView *m_imageLineUp;
    UIImageView *m_imageLineDown;
    UILabel *m_label;
    UIView *m_bkgViewUp;
    UIView *m_bkgViewDown;
    UIActivityIndicatorView *m_loadingView;
    UILabel *m_labelTips;
    UIView *m_hideView;
    BOOL m_bAnimating;
    BOOL m_bClickHideImage;
    BOOL m_bUseDefaultImage;
    id <ShakeMainFrameDelegate> m_delegate;
    MMSayHelloButton *m_btnSayHello;
    UILabel *m_labNoHello;
    ShakeMsgUnreadButton *m_btnUnreadMsg;
    BOOL m_bShowList;
    UIActivityIndicatorView *m_pageLoading;
    UIButton *m_bannerBtn;
    UILabel *m_pageLable;
    UILabel *m_shakeResultCountLable;
    UIImageView *m_shakeResultBGImage;
    struct CGRect m_originalLableFrame;
    BOOL m_bIsSetImageLine;
    UIImageView *m_imageViewDown;
    UIImageView *m_imageViewUp;
}

@property(retain, nonatomic) UIImageView *m_imageViewUp; // @synthesize m_imageViewUp;
@property(retain, nonatomic) UIImageView *m_imageViewDown; // @synthesize m_imageViewDown;
- (void).cxx_destruct;
- (void)onFriendAssistUnreadCountChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void)updateUnreadMsgBtnState;
- (void)hideUnreadMsgBtn:(BOOL)arg1;
- (void)hideSayHello:(BOOL)arg1;
- (void)OnOpenUnreadMsgList;
- (void)OnOpenSayHello;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)startAnimationSplit;
- (BOOL)bIsAnimating;
- (void)waitToNextAnimation;
- (void)startAnimationMerge;
- (void)resetStatus;
- (void)resetTipViewStatus;
- (void)dealloc;
- (void)fadeHide;
- (void)stopAllAnimation;
- (void)stopFade;
- (void)setErrorMsg:(id)arg1;
- (void)updateViewForLoading;
- (void)updateViewForNormal;
- (void)updateViewForPre;
- (void)updateView;
- (void)updateShakeSayHelloView;
- (void)initUnreadMsgBtn;
- (void)initSayHelloBtn;
- (void)updateHideImage;
- (void)setInfoBtnEnable;
- (void)setInfoBtnDisabled;
- (id)getHideImage;
- (id)tryGenHQImage:(id)arg1;
- (id)getHideView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setM_Delegate:(id)arg1;

@end

