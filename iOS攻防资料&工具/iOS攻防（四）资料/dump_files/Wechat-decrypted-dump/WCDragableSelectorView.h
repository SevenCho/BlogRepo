//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCSelectorView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WCCollectViewReorderDragDelegate.h"
#import "WCCollectionViewDataSource.h"

@class NSMutableDictionary, NSString, WCCollectViewReorder, WCDragCollectionView;

@interface WCDragableSelectorView : WCSelectorView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCCollectionViewDataSource, WCCollectViewReorderDragDelegate>
{
    WCDragCollectionView *_collectionView;
    WCCollectViewReorder *_collectionViewReorder;
    NSMutableDictionary *_cellImageViewDic;
    id <WCDragableSelectorViewDelegate> _dragDelegate;
}

@property(nonatomic) __weak id <WCDragableSelectorViewDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
- (void).cxx_destruct;
- (BOOL)onEndCollectionViewCellMovement:(int)arg1;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
- (id)getCellImageViewArray;
- (void)xd_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)xd_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reload;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (int)calMaxImagePerRow;
- (float)calCollectionViewWidth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

