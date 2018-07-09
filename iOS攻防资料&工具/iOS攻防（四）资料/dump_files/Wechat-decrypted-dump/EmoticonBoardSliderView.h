//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class CALayer, NSMutableArray, UIView;

@interface EmoticonBoardSliderView : UISlider
{
    CALayer *m_dotsLayer;
    NSMutableArray *m_sharpDotLayerArray;
    UIView *m_trackView;
    BOOL m_isTrackMode;
    unsigned int m_countOfDots;
    BOOL m_trackHighlighted;
    CALayer *m_recentUseDotLayer;
    BOOL m_needForceUpdate;
    BOOL _hidesForSinglePage;
    BOOL _showRecentUseDot;
    float _maxWidth;
    float _expandHitVericalInset;
}

@property(nonatomic) BOOL showRecentUseDot; // @synthesize showRecentUseDot=_showRecentUseDot;
@property(nonatomic) float expandHitVericalInset; // @synthesize expandHitVericalInset=_expandHitVericalInset;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) BOOL hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updateSliderViewTrack;
- (void)setTrackHighlighted:(BOOL)arg1;
- (void)onTouchFinished;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

