//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface WCOutCountryCodePicker : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource>
{
    id <WCOutCountryCodeDelegate> m_delegate;
    NSArray *m_arrData;
    unsigned long m_curSelectedSection;
    unsigned long m_curSelectedRow;
    MMTableView *m_tableView;
    BOOL m_bSearching;
    NSMutableArray *m_arrFilteredData;
    NSMutableArray *m_arrAllKeys;
    NSMutableDictionary *m_dicKeyToCountryCode;
}

@property(nonatomic) __weak id <WCOutCountryCodeDelegate> delegate; // @synthesize delegate=m_delegate;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearch:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)OnReturn;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initSearchBar;
- (id)init;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

