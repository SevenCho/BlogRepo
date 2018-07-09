//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCListBaseCellView.h"

@class UIView;

@interface WCListPhotoCellView : WCListBaseCellView
{
    UIView *m_imageGridView;
}

+ (float)calculateHeightForRowData:(id)arg1 isFirstOneInsection:(BOOL)arg2 isLastOneInSection:(BOOL)arg3;
- (void).cxx_destruct;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)handleClickImageView:(id)arg1;
- (id)findActiveView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)shouldOpenNewLineAtY:(float)arg1 withLineHeight:(float)arg2 richTextView:(id)arg3;
- (void)initView;
- (void)initImageGridView;

@end

