//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUILabel.h"

@class UIColor;

@interface InteractionLabel : MMUILabel
{
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    id _target;
    SEL _selAction;
    BOOL _bIsTouchesEnded;
}

@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)becomeHighlightedBackgroundColor;
- (void)becomeNormalBackgroundColor;
- (void)initMembers;

@end

