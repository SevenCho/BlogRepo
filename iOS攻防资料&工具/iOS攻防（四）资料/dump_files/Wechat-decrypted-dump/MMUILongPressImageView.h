//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIImageView.h"

@interface MMUILongPressImageView : MMUIImageView
{
    BOOL m_bIsLongPressHandled;
    float m_fLongPressTime;
    id <LongPressImageViewDelegate> _delegate;
    unsigned long long m_lastPressTime;
}

@property(nonatomic) __weak id <LongPressImageViewDelegate> m_delegate; // @synthesize m_delegate=_delegate;
@property(nonatomic) float m_fLongPressTime; // @synthesize m_fLongPressTime;
- (void).cxx_destruct;
- (void)setNormalImage;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)LongPressEvents;
- (id)init;
- (id)initWithImage:(id)arg1;

@end

