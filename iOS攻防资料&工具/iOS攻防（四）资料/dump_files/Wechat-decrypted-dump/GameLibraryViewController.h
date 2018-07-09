//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "DropdownMenuDataSource.h"
#import "DropdownMenuDelegate.h"
#import "GameCenterClassifyCellDelegate.h"
#import "GameCenterGameInfoCellDelegate.h"
#import "GameCenterSearchLogicControllerDelegate.h"
#import "IGameCenterExt.h"
#import "LoopPageScrollViewDataSourceDelegate.h"
#import "MMHorizontalTableViewDataSource.h"
#import "MMHorizontalTableViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ChatRoomInfo, DropdownMenu, GameCenterLoadingFooterView, GameCenterSearchLogicController, GameLibraryAppInfo, LoopPageScrollView, MMHorizontalTableView, MMLoadingView, MMTableView, MMTimer, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIPageControl, UIView;

@interface GameLibraryViewController : MMUIViewController <GameCenterSearchLogicControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, LoopPageScrollViewDataSourceDelegate, GameCenterGameInfoCellDelegate, MMWebImageViewDelegate, MMRefreshTableFooterDelegate, IGameCenterExt, DropdownMenuDataSource, DropdownMenuDelegate, MMHorizontalTableViewDataSource, MMHorizontalTableViewDelegate, GameCenterClassifyCellDelegate>
{
    GameLibraryAppInfo *_libAppInfo;
    NSMutableArray *_tableDatas;
    MMTableView *_tableView;
    UIView *_canvasView;
    DropdownMenu *_dropdownMenu;
    unsigned long _sortType;
    UIButton *_sortButton;
    LoopPageScrollView *_adLoopScrollView;
    UIPageControl *_adPageControl;
    MMTimer *_adPageTimer;
    MMHorizontalTableView *_horizontalTableView;
    GameCenterLoadingFooterView *_footerView;
    unsigned long _nextOffset;
    NSMutableDictionary *_bannerWebImgDic;
    MMLoadingView *_loadingView;
    GameCenterSearchLogicController *_searchLogic;
    unsigned long _reportPageCount;
    NSString *_subscribeAppId;
    ChatRoomInfo *_subscribeChatRoomInfo;
    int _sourceScene;
    NSMutableArray *_allAppListTypeIndex;
}

- (void).cxx_destruct;
- (void)updateAllGameListIndex;
- (void)statBannerExposure:(int)arg1;
- (void)onStopSearch;
- (void)onStartSearch;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)viewWillLayoutSubviews;
- (void)initSearchLogic;
- (void)popupSearchBar;
- (void)initRightBarBtns;
- (void)onOpenWebView:(id)arg1;
- (void)onOpenMoreView;
- (id)genMoreGameFooterView;
- (void)onSelectClassifyItem:(id)arg1;
- (id)horizontalTableView:(id)arg1 viewForColumnAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfColumnsInHorizontalTableView:(id)arg1;
- (void)horizontalTableView:(id)arg1 didSelectColumnAtIndex:(unsigned int)arg2;
- (float)horizontalTableView:(id)arg1 widthForColumnAtIndex:(unsigned int)arg2;
- (void)dropdownMenu:(id)arg1 didSelectSubMenuWithIndex:(int)arg2;
- (id)dropdownMenu:(id)arg1 titleForSubmenu:(unsigned int)arg2;
- (unsigned int)numberOfSubmenuInDropdownMenu:(id)arg1;
- (id)getMoreGameTitle;
- (BOOL)isAppItem:(id)arg1;
- (id)typeOfSection:(int)arg1 row:(int)arg2;
- (void)saveCacheData;
- (void)loadCacheData;
- (void)animateDropdownMenu;
- (void)onShowMoreGameH5:(id)arg1;
- (void)onSortGame:(id)arg1;
- (void)showWebViewWithUrl:(id)arg1 title:(id)arg2;
- (int)openDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onSubscribeNewGameWithAppID:(id)arg1 alertTitle:(id)arg2 message:(id)arg3 extraInfo:(id)arg4 error:(int)arg5;
- (void)onGetLibGameList:(id)arg1 errCode:(int)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gameInfoCellDownloadButtonClicked:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)changePageControlToNextPage;
- (void)didTapPageAtNum:(unsigned long)arg1;
- (void)didChangeToPage:(unsigned long)arg1;
- (id)viewForPage:(id)arg1 pageNum:(unsigned long)arg2;
- (int)totalNumOfPage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (id)createHeaderView;
- (void)initView;
- (void)loadTableData;
- (void)initData;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSourceScene:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

