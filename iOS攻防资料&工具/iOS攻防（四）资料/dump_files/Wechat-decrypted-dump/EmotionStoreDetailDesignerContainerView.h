//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmotionButtonWithClickState.h"

@class EmotionActivity, MMWebImageView, PersonalDesigner, UIActivityIndicatorView, UILabel, UIView;

@interface EmotionStoreDetailDesignerContainerView : EmotionButtonWithClickState
{
    UIView *m_contentView;
    MMWebImageView *m_designerHeaderView;
    UILabel *m_designerNameLabel;
    UILabel *m_designerPageLabel;
    UIActivityIndicatorView *m_loadingView;
    UIView *m_lineInTop;
    UIView *m_lineInBottom;
    PersonalDesigner *_personalDesigner;
    EmotionActivity *_emotionActivity;
}

+ (id)lineView;
@property(retain, nonatomic) EmotionActivity *emotionActivity; // @synthesize emotionActivity=_emotionActivity;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @synthesize personalDesigner=_personalDesigner;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setContentInsets:(struct UIEdgeInsets)arg1;
- (void)setIsShowLineInTop:(BOOL)arg1 IsShowLineInBottom:(BOOL)arg2;
- (void)setDesignerHeaderSideLen:(float)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

