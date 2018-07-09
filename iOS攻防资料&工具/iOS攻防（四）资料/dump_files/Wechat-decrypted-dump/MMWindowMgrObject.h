//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIWindow, MMWindowViewController, UIImageView;

@interface MMWindowMgrObject : NSObject
{
    MMWindowViewController *m_windowVC;
    MMUIWindow *m_Window;
    BOOL isChangeStatusBarStyle;
    BOOL isRequestKeyWindow;
    BOOL isNeedNavCtrl;
    int animationType;
    int statusBarStyle;
    int lastStatusBarStyle;
    int transitionOptions;
    UIImageView *blurBgImageView;
}

@property(nonatomic) BOOL isNeedNavCtrl; // @synthesize isNeedNavCtrl;
@property(retain, nonatomic) UIImageView *blurBgImageView; // @synthesize blurBgImageView;
@property(nonatomic) BOOL isRequestKeyWindow; // @synthesize isRequestKeyWindow;
@property(nonatomic) int transitionOptions; // @synthesize transitionOptions;
@property(nonatomic) BOOL isChangeStatusBarStyle; // @synthesize isChangeStatusBarStyle;
@property(nonatomic) int lastStatusBarStyle; // @synthesize lastStatusBarStyle;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle;
@property(nonatomic) int animationType; // @synthesize animationType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isGreaterThan:(id)arg1;
- (BOOL)isObjectEqual:(id)arg1;
- (id)getMMWindow;
- (void)setMMWindow:(id)arg1;
- (id)getMMWindowVC;
- (void)setMMWindowVC:(id)arg1;

@end

