//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCellInfo.h"

#import "FTSWebSearchViewDelegate.h"
#import "IBrandServiceSearchExt.h"
#import "IOpenImResourceMgrExt.h"
#import "MMSearchBarDelegate.h"
#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "SearchContactDataProviderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "contactInfoDelegate.h"

@class FTSWebSearchController, MMLoadingView, MMSearchBar, MMUILabel, MMUIViewController, NSArray, NSString, SearchContactDataProvider, UITextField, UIView;

@interface FindContactSearchViewCellInfo : MMTableViewCellInfo <SearchContactDataProviderDelegate, FTSWebSearchViewDelegate, IOpenImResourceMgrExt, MMWebViewDelegate, IBrandServiceSearchExt, PBMessageObserverDelegate, contactInfoDelegate, UIAlertViewDelegate, MMSearchBarDelegate>
{
    UITextField *m_userNameTextField;
    MMLoadingView *m_loadingView;
    NSString *m_nsUserNameToFind;
    MMUIViewController *m_containViewController;
    MMSearchBar *m_searchBar;
    UIView *m_backGroundView;
    UIView *m_backGroundBlurView;
    unsigned long _requestEventID;
    BOOL _didSearchContactDone;
    BOOL _isSearching;
    BOOL _isActived;
    BOOL _bShowNoResult;
    BOOL _bOnlyShowResult;
    BOOL _bHasShownWebSearchCell;
    BOOL _bHasOperateOnlineResult;
    id <FindContactSearchViewCellInfoDelegate> _m_delegate;
    NSArray *_foundContactArray;
    unsigned int _searchContactState;
    SearchContactDataProvider *_searchContactDataProvider;
    MMUILabel *_nonResultLabel;
    FTSWebSearchController *_webSearchLogicController;
}

+ (id)contactsFromSearchResponse:(id)arg1 req:(id)arg2;
@property(nonatomic) BOOL bHasOperateOnlineResult; // @synthesize bHasOperateOnlineResult=_bHasOperateOnlineResult;
@property(nonatomic) BOOL bHasShownWebSearchCell; // @synthesize bHasShownWebSearchCell=_bHasShownWebSearchCell;
@property(retain, nonatomic) FTSWebSearchController *webSearchLogicController; // @synthesize webSearchLogicController=_webSearchLogicController;
@property(nonatomic) BOOL bOnlyShowResult; // @synthesize bOnlyShowResult=_bOnlyShowResult;
@property(nonatomic) BOOL bShowNoResult; // @synthesize bShowNoResult=_bShowNoResult;
@property(nonatomic) BOOL isActived; // @synthesize isActived=_isActived;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) BOOL didSearchContactDone; // @synthesize didSearchContactDone=_didSearchContactDone;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
@property(retain, nonatomic) SearchContactDataProvider *searchContactDataProvider; // @synthesize searchContactDataProvider=_searchContactDataProvider;
@property(nonatomic) unsigned int searchContactState; // @synthesize searchContactState=_searchContactState;
@property(retain, nonatomic) NSArray *foundContactArray; // @synthesize foundContactArray=_foundContactArray;
@property(nonatomic) __weak id <FindContactSearchViewCellInfoDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
@property(retain, nonatomic) UITextField *m_userNameTextField; // @synthesize m_userNameTextField;
- (void).cxx_destruct;
- (id)onWebViewPassParams:(id)arg1;
- (void)onFoom;
- (void)fooo:(char *)arg1;
- (void)foo;
- (void)onTestCrash2;
- (void)onTestCrash1;
- (void)onTestCrash;
- (void)logWebSearchClickByKeyword:(id)arg1 clickType:(unsigned long)arg2;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewWillPop;
- (void)onWebSearchViewReturn:(BOOL)arg1;
- (void)endSearch;
- (void)removeWebSearchView;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned long)arg2;
- (void)do_LogExt:(int)arg1;
- (void)onSearchResultViewNeedStartWebSearch;
- (void)onSearchResultViewNeedPushViewController:(id)arg1;
- (void)onSearchResultViewNeedReload;
- (void)openContactInfoViewForPhone:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)showWebSearchEntryWithSrvErrMsg:(id)arg1;
- (void)showContactListInfoView;
- (void)doShowContactListInfoView;
- (void)onGetNonResult;
- (BOOL)isSearchActived;
- (void)SearchBarBecomeUnActive;
- (void)SearchBarBecomeActive;
- (void)onSearch:(id)arg1;
- (BOOL)isValidLocalQuery:(id)arg1;
- (void)removeNoResultLabelWhenSearching;
- (BOOL)searchKeyMatchesCommand:(id)arg1;
- (BOOL)allTextIsBlank;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)addFriendScene:(id)arg1;
- (BOOL)isBestGuessPhoneNumber:(id)arg1;
- (BOOL)isObj:(id)arg1 match:(id)arg2;
- (id)filterUserName:(id)arg1;
- (id)getSearchBarText;
- (void)stopLoading;
- (void)startLoading;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)sendBrandContactListRequest;
- (void)onGetSearchContactRet:(id)arg1 req:(id)arg2;
- (void)updateResultArray:(id)arg1;
- (void)onlySetActive:(id)arg1;
- (void)doSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (float)heightForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (id)getAddressBookPersonImage:(id)arg1;
- (id)titleForHeaderInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (float)heightForHeaderInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (int)numberOfRowsInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (int)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)mmSearchDisplayControllerDidHideSearchResultsTableView:(id)arg1;
- (void)mmSearchDisplayControllerWillShowSearchResultsTableView:(id)arg1;
- (void)hideDimmingView;
- (void)setSearchDisplayControllerContainerViewIn:(id)arg1 hidden:(BOOL)arg2;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)cancelSearch;
- (void)mmsearchBarCancelButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)makeEntryCell:(id)arg1;
- (void)makeCell:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)handleRotate;
- (void)layoutViews;
- (id)initWithContentController:(id)arg1 backGroundView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

