//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMGrowTextViewDelegate.h"

@class MMGrowTextView, NSString, UIButton, UIImageView;

@interface WCRedEnvelopesCommentInputToolView : MMUIView <MMGrowTextViewDelegate>
{
    int _keyboardHeight;
    UIImageView *_toolView;
    MMGrowTextView *_textView;
    int _positionMode;
    UIButton *_sendButton;
    struct CGPoint fPreToolViewOrigin;
    float _fKeyboardAnimationDuration;
    int _iKeyboardAnimationCurve;
    id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate;
    BOOL m_bPositioning;
}

@property(nonatomic) BOOL m_bPositioning; // @synthesize m_bPositioning;
@property(nonatomic) __weak id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onTextViewDidChange:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)keyboardDidShow:(float)arg1;
- (BOOL)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(int)arg1;
- (void)setKeyboardAnimationDuration:(float)arg1;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (BOOL)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)keyboardWillHideInter:(float)arg1;
- (void)keyboardWillShow:(float)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)NotifyViewControllerPostionChanged:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)dealloc;
- (float)getToolViewHeight;
- (id)getText;
@property(nonatomic) __weak NSString *text;
- (void)insertString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSubview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

