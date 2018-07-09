//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "PBMessageObserverDelegate.h"

@class CContact, JSEvent, MMLoadingView, NSString, UIButton, UIView, WOAPPrivacyConfirmLogic;

@interface MMWebAddContactView : MMUIView <PBMessageObserverDelegate>
{
    NSString *m_nsUsrName;
    JSEvent *m_nsCallBack;
    id <WebAddContactDelegate> m_delegate;
    int m_scene;
    MMLoadingView *m_loadingView;
    UIButton *m_btnConfirm;
    UIButton *m_btnCancel;
    UIButton *m_btnRetry;
    UIButton *m_btnAdd;
    UIView *m_backgroundView;
    CContact *m_oContact;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    NSString *_reportInfo;
}

@property(retain, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) int m_scene; // @synthesize m_scene;
@property(nonatomic) __weak id <WebAddContactDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)HandleContact:(id)arg1;
- (void)CreateVerify;
- (void)CreateSearch;
- (void)OnAddOk;
- (void)OnConfirm;
- (void)OnAdd;
- (void)OnCancel;
- (void)layoutSubviewToOrientation:(int)arg1;
- (void)setupButtomButton:(id)arg1;
- (void)setupButtomLeftButton:(id)arg1 rightButton:(id)arg2;
- (id)generateTextLabel:(id)arg1 frame:(struct CGRect)arg2 fontSize:(float)arg3 numberOfLines:(unsigned int)arg4;
- (void)initFailInfoViews:(id)arg1;
- (void)initUpSpliteLineView;
- (void)UpdateView:(unsigned long)arg1 errMsg:(id)arg2;
- (void)UpdateView:(unsigned long)arg1;
- (id)generateButton:(id)arg1 titleColor:(id)arg2 targetSelector:(SEL)arg3;
- (void)initButtons;
- (void)initLoadingView;
- (void)initBackgroundView;
- (void)initView;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 CallBack:(id)arg2;

@end

