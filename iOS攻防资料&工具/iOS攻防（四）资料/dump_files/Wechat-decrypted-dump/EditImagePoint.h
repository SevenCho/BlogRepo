//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface EditImagePoint : NSObject
{
    struct CGPoint _point;
    UIColor *_color;
    float _angle;
}

- (void).cxx_destruct;
- (float)getAngle;
- (id)getColor;
- (struct CGPoint)getCGPoint;
- (id)initWithCGPoint:(struct CGPoint)arg1 withColor:(id)arg2 withRotation:(float)arg3;
- (id)initWithCGPoint:(struct CGPoint)arg1;

@end

