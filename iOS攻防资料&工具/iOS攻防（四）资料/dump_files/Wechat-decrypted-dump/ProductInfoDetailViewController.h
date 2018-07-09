//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMScrollView, MMTableViewInfo, NSArray, NSString, ScanProductItem, UIPageControl, UIView;

@interface ProductInfoDetailViewController : MMUIViewController <UIScrollViewDelegate, WCActionSheetDelegate>
{
    MMTableViewInfo *_mainTableViewInfo;
    ScanProductItem *_productItem;
    NSArray *_detailList;
    NSArray *_bannerList;
    MMScrollView *_adScrollView;
    UIView *_headerView;
    UIPageControl *_adPageControl;
}

- (void).cxx_destruct;
- (void)onJumptoFeedBackView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (float)getShopInfoCellHeight:(id)arg1;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (id)getTableHeaderView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onOperate:(id)arg1;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithProductItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

