//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "MMWebSearchViewDelegate.h"

@class MMWebSearchController, NSString, WebSearchBoxCtrlInfo;

@interface MMWebviewSearchViewController : MMSearchBarDisplayController <MMWebSearchViewDelegate>
{
    NSString *_query;
    MMWebSearchController *_websearchController;
    int _searchScene;
    WebSearchBoxCtrlInfo *_boxCtrlInfo;
}

- (void).cxx_destruct;
- (void)onFinalBackButtonClick:(id)arg1;
- (void)willEndSearch:(id)arg1;
- (void)initServiceSearchController;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithEntryFlay:(unsigned long)arg1;
- (void)dealloc;
- (id)initWithQrcodeQueryString:(id)arg1 boxCtrlInfo:(id)arg2;
- (id)initWithQueryString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

