//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCImageViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCStatTimerHelper, WCTimeLineFooterView;

@interface WCCommentListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, IMsgExt, WCFacadeExt, WCImageViewDelegate, WCActionSheetDelegate, RichTextLayoutDelegate, MMRefreshTableFooterDelegate, WCCommentDetailViewControllerFBDelegate, WCImageFullScreeViewMgrExt>
{
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_arrCommentList;
    NSMutableDictionary *_dicDataItems;
    NSMutableArray *_arrCommentListFromDB;
    unsigned long _autoGetMoreCount;
    BOOL _bUnreadOnly;
    BOOL _bHasNullIDs;
    BOOL _bHasMoreItems;
    NSMutableDictionary *_dicCells;
    NSMutableDictionary *_dicCellHeights;
    unsigned long _fromScene;
    unsigned long _totalUnreadCount;
    unsigned long _clickLikeCount;
    unsigned long _clickCommentCount;
    unsigned long long _totalBrowseTime;
    WCStatTimerHelper *_statTimeHelper;
}

@property(nonatomic) BOOL bUnreadOnly; // @synthesize bUnreadOnly=_bUnreadOnly;
- (void).cxx_destruct;
- (void)onSetWCMessageNotifyFinished:(int)arg1 dataItemID:(id)arg2 opFlag:(BOOL)arg3;
- (void)onHeadImageClicked:(id)arg1;
- (void)onReveiceWCDeleteMessage:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onCommentListViewDataChanged:(id)arg1;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)onClearList:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clearList;
- (void)onClickWCImage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openWCCommentDetail:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)isCellMarkedAsIgnoreNotification:(id)arg1;
- (void)updateEditInfo:(id)arg1 indexPath:(id)arg2;
- (void)updateCacheBySnsAdNotInterestsMsg:(id)arg1;
- (void)updateCacheBySnsObjDeleteMsg:(id)arg1;
- (void)updateCommentCache:(id)arg1;
- (id)getLoadMoreCell;
- (id)getCellContentViewAtIndexPath:(id)arg1 superView:(id)arg2;
- (BOOL)shouldOpenNewLineAtY:(float)arg1 withLineHeight:(float)arg2 richTextView:(id)arg3;
- (float)getCellContentViewHeightAtIndexPath:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initTableView;
- (void)initTableFooterView;
- (void)getMoreData;
- (void)getData;
- (void)addWCMessagesWithArray:(id)arg1 MoreData:(BOOL)arg2;
- (id)getObjIDByWCMessage:(id)arg1;
- (void)reportBrowseMessageListInfo;
- (void)willDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

