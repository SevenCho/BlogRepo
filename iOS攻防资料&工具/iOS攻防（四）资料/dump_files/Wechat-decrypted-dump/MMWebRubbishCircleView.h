//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMWebRubBlurCircleView, UIImageView, UILabel;

@interface MMWebRubbishCircleView : UIView
{
    UILabel *_smalllabel;
    UIImageView *_smallImageView;
    UIView *_maskToolView;
    MMWebRubBlurCircleView *_blurEffectView;
}

@property(retain, nonatomic) MMWebRubBlurCircleView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIView *maskToolView; // @synthesize maskToolView=_maskToolView;
@property(retain, nonatomic) UIImageView *smallImageView; // @synthesize smallImageView=_smallImageView;
@property(retain, nonatomic) UILabel *smalllabel; // @synthesize smalllabel=_smalllabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

