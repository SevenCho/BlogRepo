//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardPkgBackTableViewDelegate.h"

@class CAGradientLayer, MMUIButton, NSArray, NSString, WCCardPkgBackTableView;

@interface WCCardPkgBackView : MMUIView <UITableViewDelegate, UITableViewDataSource, WCCardPkgBackTableViewDelegate>
{
    NSArray *_sameTpCardDataListList;
    id <WCCardPkgBackViewDelegate> _delegate;
    WCCardPkgBackTableView *_tableView;
    MMUIButton *_sureButton;
    CAGradientLayer *_maskLayer;
}

@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) WCCardPkgBackTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCCardPkgBackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sameTpCardDataListList; // @synthesize sameTpCardDataListList=_sameTpCardDataListList;
- (void).cxx_destruct;
- (void)handleIsHaveAvailableCardWithList:(id)arg1;
- (void)loadCellSubView:(id)arg1 cardIndex:(int)arg2;
- (void)configurateCell:(id)arg1;
- (void)reloadTableViewData;
- (void)setSureButtonAbled:(BOOL)arg1;
- (void)setSureButtonText:(id)arg1;
- (void)setSureButtonColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sureButtonDidSelected;
- (void)WXCardPkgTableViewHeight:(float)arg1 scrollEnabled:(BOOL)arg2;
- (float)WXCardPkgTableViewMaxHeight;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

