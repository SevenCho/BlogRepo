//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "IUiUtilExt.h"
#import "WNParaImageViewDelegate.h"

@class NSString, SightIconView, WNParaImageView, WNSightViewController;

@interface WNParaObjectVideoView : WNParaObjectBaseView <WNParaImageViewDelegate, IUiUtilExt>
{
    WNParaImageView *_imageView;
    SightIconView *_playIconView;
    WNSightViewController *_videoPlayerVC;
}

+ (float)getHightOfParaInfo:(id)arg1;
- (void).cxx_destruct;
- (void)onLoadComplete:(id)arg1 SourcePath:(id)arg2;
- (void)playInFullScreen;
- (void)onClickObject;
- (void)layoutView;
- (void)clearImage;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

