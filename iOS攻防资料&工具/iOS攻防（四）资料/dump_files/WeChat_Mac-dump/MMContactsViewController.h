//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt.h"
#import "IContactMgrExt.h"
#import "IMMFriendRequestMgrExt.h"
#import "MMContactListContactRowViewDelegate.h"
#import "MMFriendRequestRowViewDelegate.h"
#import "MMSidebarRowViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSSearchFieldDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"
#import "OpenIMResourceMgrExt.h"
#import "WeChatSearchProtocol.h"

@class MMContactListContactRowView, MMContactListLogic, MMSearchField, MMSearchViewController, MMTableView, MMTimer, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface MMContactsViewController : MMViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate, NSSearchFieldDelegate, MMSidebarRowViewDelegate, IMMFriendRequestMgrExt, IContactMgrExt, AccountServiceExt, MMContactListContactRowViewDelegate, MMTableViewDelegate, MMFriendRequestRowViewDelegate, OpenIMResourceMgrExt, WeChatSearchProtocol>
{
    MMContactListLogic *_logic;
    MMContactListContactRowView *_rowViewForContextMenu;
    NSObject<OS_dispatch_queue> *_asyncLoadDataQueue;
    BOOL _isSearching;
    MMSearchField *_searchField;
    MMSearchViewController *_searchViewController;
    long long _lastSelectedRow;
    MMTableView *_listTableView;
    NSArray *_listTableViewDataSource;
    MMTimer *_timer;
}

@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *listTableViewDataSource; // @synthesize listTableViewDataSource=_listTableViewDataSource;
@property(nonatomic) __weak MMTableView *listTableView; // @synthesize listTableView=_listTableView;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(retain, nonatomic) MMSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property __weak MMSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)friendRequestMgrDidDeleteFriendRequestMsg:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)_selectPreviousTableRow;
- (void)_contextMenuDeleteFriendRequest:(id)arg1;
- (id)contextMenuForFriendRequestRow:(id)arg1;
- (void)_showConfirmForDeleteContact:(id)arg1;
- (void)_contextMenuDeleteContact:(id)arg1;
- (void)_contextMenuShareContact:(id)arg1;
- (void)_contextMenuMessageContact:(id)arg1;
- (void)openedContextMenuForContactRow:(id)arg1;
- (id)contextMenuForContactRow:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)searchTextChanged:(id)arg1;
- (void)_clearSearch;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)performSearchAction;
- (void)reloadAllContacts;
- (void)ayncReloadAllContacts;
- (BOOL)_isFirstOneOfFriendRequests:(id)arg1;
- (void)friendRequestMgr:(id)arg1 didChangeFriendRequestUnreadCount:(unsigned long long)arg2 isFilter:(BOOL)arg3;
- (void)onUserLogout;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)_DoGroupRowSelectedChanged:(id)arg1 rowInfo:(id)arg2 index:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)title;
- (void)setTabbarItem:(id)arg1;
- (void)startShareContact:(id)arg1;
- (void)showContactWithUserName:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

