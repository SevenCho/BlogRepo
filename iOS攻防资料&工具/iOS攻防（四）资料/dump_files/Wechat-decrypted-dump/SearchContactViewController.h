//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FindContactSearchViewCellInfoDelegate.h"

@class FindContactSearchViewCellInfo, MMTableView, NSArray, NSString, UIView;

@interface SearchContactViewController : MMSearchBarDisplayController <FindContactSearchViewCellInfoDelegate>
{
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    NSArray *m_resultArray;
    NSString *m_searchText;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
- (void)onMainWindowFrameChanged;
- (BOOL)isSeachActive;
- (BOOL)useBlackStatusbar;
- (void)onCancelSearch;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithResultArray:(id)arg1 searchText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

