//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMBubbleLayer : NSObject
{
    float _cornerRadius;
    float _arrowHeight;
    float _arrowWidth;
    int _arrowDirection;
    float _arrowPosition;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) float arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) float arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) float arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)bubblePath;
- (struct CGRect)contentFrame;
- (id)centerOfCorner;
- (id)keyPointAtcorner;
- (id)arrowPoints;
- (id)layerForSize:(struct CGSize)arg1;
- (void)setArrowPositionAtPos:(float)arg1 baseLen:(float)arg2;
- (id)init;

@end

