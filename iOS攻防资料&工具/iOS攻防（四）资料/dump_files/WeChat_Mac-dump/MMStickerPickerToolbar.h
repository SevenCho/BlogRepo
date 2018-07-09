//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@class NSButton, NSClipView, NSMutableArray, SwipeDetector;

@interface MMStickerPickerToolbar : MMView
{
    NSClipView *_clipView;
    NSButton *_leftChevron;
    NSButton *_rightChevron;
    double _buttonWidth;
    NSMutableArray *_groupButtons;
    int _curPage;
    SwipeDetector *_swipeDetector;
    unsigned char _shouldShowEmoji;
    BOOL _isOpenIMChat;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _didSelectGroupCallback;
    CDUnknownBlockType _toolbarButtonDidChangeHighlighted;
}

@property(copy, nonatomic) CDUnknownBlockType toolbarButtonDidChangeHighlighted; // @synthesize toolbarButtonDidChangeHighlighted=_toolbarButtonDidChangeHighlighted;
@property(copy, nonatomic) CDUnknownBlockType didSelectGroupCallback; // @synthesize didSelectGroupCallback=_didSelectGroupCallback;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) BOOL isOpenIMChat; // @synthesize isOpenIMChat=_isOpenIMChat;
@property(nonatomic) unsigned char shouldShowEmoji; // @synthesize shouldShowEmoji=_shouldShowEmoji;
- (void).cxx_destruct;
- (void)_resolveChevronsOverlayButtons:(unsigned long long)arg1;
- (unsigned long long)_calRightChevronPosAtPage:(unsigned long long)arg1 withPerPageItemCount:(unsigned long long)arg2;
- (unsigned long long)_calLeftChevronPosAtPage:(unsigned long long)arg1 withPerPageItemCount:(unsigned long long)arg2;
- (void)scrollWheel:(id)arg1;
- (void)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToStart:(BOOL)arg1;
- (void)_updateChevronVisibilityForX:(double)arg1;
- (void)_scrollTo:(double)arg1 animated:(BOOL)arg2;
- (void)rightChevronPressed:(id)arg1;
- (unsigned long long)_countForButtonFullfillToPage:(unsigned long long)arg1 withPerPageItemCount:(unsigned long long)arg2;
- (void)leftChevronPressed:(id)arg1;
- (void)groupButtonPressed:(id)arg1;
- (unsigned char)updateGroupButton:(id)arg1;
- (void)setSelectedIndexWithoutCallback:(unsigned long long)arg1;
- (void)_layoutButtons;
- (unsigned char)updateStoreEmticonIcon:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

