//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

#import "ReaderItemViewDelegate.h"

@class MultiReaderMessageViewModel, NSMutableArray, NSString, UIImageView;

@interface MultiReaderMessageCellView : ReaderMessageCellView <ReaderItemViewDelegate>
{
    UIImageView *m_bgImageView;
    unsigned long m_selectIndex;
    NSMutableArray *m_itemViewArr;
}

- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (BOOL)canPeek;
- (id)getReadWraps;
- (id)cacheImageForCover:(id)arg1;
- (void)onReaderItemDidLoadCoverImage:(unsigned long)arg1 coverImage:(id)arg2 cover:(id)arg3;
- (void)onReaderItemLongPress:(unsigned long)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onReaderItemClick:(unsigned long)arg1;
- (void)onReaderItemBeginTouch:(unsigned long)arg1;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)isItemNoCover:(id)arg1;
- (id)itemViewWithShowtype:(int)arg1 index:(unsigned long)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutContentView;
- (void)onAppear;
- (BOOL)canBeReused;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MultiReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

