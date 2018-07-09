//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMImageScrollViewHelper : NSObject
{
    BOOL dontCalcPreviewRect;
    BOOL noSingleTaps;
    BOOL noDoubleTaps;
    id <MMImageScrollViewHelperDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMImageScrollViewHelperDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL noDoubleTaps; // @synthesize noDoubleTaps;
@property(nonatomic) BOOL noSingleTaps; // @synthesize noSingleTaps;
@property(nonatomic) BOOL dontCalcPreviewRect; // @synthesize dontCalcPreviewRect;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (void)onDoubleTap:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)onSingleTap:(id)arg1;
- (void)dealloc;
- (void)initHelper:(struct CGSize)arg1 orientation:(int)arg2;
- (void)initHelper:(struct CGSize)arg1 orientation:(int)arg2 containSize:(struct CGSize)arg3;
- (void)initHelper:(struct CGSize)arg1;
- (void)InitGestureRecognizer;
- (id)init;

@end

