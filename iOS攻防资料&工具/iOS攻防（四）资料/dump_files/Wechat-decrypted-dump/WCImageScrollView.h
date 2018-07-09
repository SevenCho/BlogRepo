//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate.h"
#import "MMImageScrollViewHelperDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMImageScrollViewHelper, NSArray, NSString, UIActivityIndicatorView, UIView, WXFullScreenGestureRecognizer;

@interface WCImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, FullScreenGestureDelegate>
{
    UIView *imageView;
    unsigned int index;
    UIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    BOOL supportOrientation;
    WXFullScreenGestureRecognizer *m_gesture;
    id <WCImageScrollViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) UIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) BOOL supportOrientation; // @synthesize supportOrientation;
@property(nonatomic) unsigned int index; // @synthesize index;
- (void).cxx_destruct;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(float)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)rotateImageWithImage:(id)arg1;
- (void)setImageTransform:(struct CGAffineTransform)arg1;
- (void)stopLoading;
- (void)displayView:(id)arg1;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)internalDisplayImage:(id)arg1 withFrame:(struct CGRect)arg2 animate:(BOOL)arg3;
- (float)angelFromOldOrientation:(int)arg1 newOrientation:(int)arg2;
- (int)orientationToInt:(int)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL enableDragToClose;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned int hash;
@property(nonatomic) float maximumZoomScale;
@property(nonatomic) float minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) float zoomScale;

@end

