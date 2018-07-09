//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactsDataLogicDelegate.h"
#import "MMSearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ContactsDataLogic, MMSearchBar, MMTableView, NSDictionary, NSMutableDictionary, NSString;

@interface GroupSelectContactsViewController : MMSearchBarDisplayController <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, ContactsDataLogicDelegate>
{
    id <GroupSelectContactsViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    ContactsDataLogic *m_contactsDataLogic;
    BOOL m_bShowSearchBar;
    unsigned long m_uiDataScene;
    MMSearchBar *m_mmSearchBar;
    NSMutableDictionary *m_dicMultiSelect;
    NSDictionary *m_dicExistContact;
    float m_CurrentScreenWidth;
}

@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) unsigned long m_uiDataScene; // @synthesize m_uiDataScene;
@property(nonatomic) BOOL m_bShowSearchBar; // @synthesize m_bShowSearchBar;
@property(nonatomic) __weak id <GroupSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (float)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned int)arg3 row:(unsigned int)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)getCellImage:(id)arg1;
- (void)selectContact:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTitleArea;
- (void)onDone;
- (void)initData;
- (void)onCancelBack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

