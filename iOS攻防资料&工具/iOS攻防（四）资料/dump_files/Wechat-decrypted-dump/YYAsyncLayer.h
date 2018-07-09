//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class YYSentinel;

@interface YYAsyncLayer : CALayer
{
    YYSentinel *_sentinel;
    BOOL _displaysAsynchronously;
}

+ (void)initialize;
+ (id)defaultValueForKey:(id)arg1;
@property BOOL displaysAsynchronously; // @synthesize displaysAsynchronously=_displaysAsynchronously;
- (void).cxx_destruct;
- (void)_setLayerContents:(id)arg1;
- (void)_cancelAsyncDisplay;
- (void)_fillBackgroundColor:(struct CGColor *)arg1 size:(struct CGSize)arg2 inContext:(struct CGContext *)arg3;
- (void)_endImageContext:(struct CGContext *)arg1;
- (struct CGContext *)_newImageContextWithOptions:(struct CGSize)arg1 opaque:(BOOL)arg2 scale:(float)arg3;
- (void)_displayAsync:(BOOL)arg1;
- (void)clearContents;
- (void)setContents:(id)arg1;
- (void)display;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)init;

@end

