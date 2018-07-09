//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMChatLogCellViewDelegate.h"
#import "MMChatLogRecordCellViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "MMViewerWindowDelegate.h"
#import "NSTabViewDelegate.h"
#import "NSTableViewDataSource.h"

@class FavoritesItem, FavoritesItemDataField, MMTableView, MMTextView, MessageData, NSMutableDictionary, NSString, NSTableCellView;

@interface MMChatLogDetailViewController : NSViewController <NSTabViewDelegate, NSTableViewDataSource, MMChatLogCellViewDelegate, MMTableViewDelegate, MMChatLogRecordCellViewDelegate, MMViewerWindowDelegate>
{
    MessageData *_parentMessage;
    FavoritesItem *_parentFavItem;
    FavoritesItemDataField *_parentDataField;
    NSString *_sourceBreadPath;
    MMTableView *_tableView;
    MMTextView *_titleTextView;
    NSTableCellView *_headerCellView;
    NSTableCellView *_footerCellView;
    NSMutableDictionary *_viewerWindowDic;
}

+ (Class)cellViewSubclassForDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4;
@property(retain, nonatomic) NSMutableDictionary *viewerWindowDic; // @synthesize viewerWindowDic=_viewerWindowDic;
@property(retain, nonatomic) NSTableCellView *footerCellView; // @synthesize footerCellView=_footerCellView;
@property(retain, nonatomic) NSTableCellView *headerCellView; // @synthesize headerCellView=_headerCellView;
@property(retain, nonatomic) MMTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *sourceBreadPath; // @synthesize sourceBreadPath=_sourceBreadPath;
@property(retain, nonatomic) FavoritesItemDataField *parentDataField; // @synthesize parentDataField=_parentDataField;
@property(retain, nonatomic) FavoritesItem *parentFavItem; // @synthesize parentFavItem=_parentFavItem;
@property(retain, nonatomic) MessageData *parentMessage; // @synthesize parentMessage=_parentMessage;
- (void).cxx_destruct;
- (void)windowDidColsed:(id)arg1;
- (void)recordCellView:(id)arg1 showDetailWindowWithItem:(id)arg2 relatePosition:(struct CGPoint)arg3;
- (id)setupFooterCellView;
- (id)setupHeaderCellView;
- (void)populateCellViewContent:(id)arg1 rowDataField:(id)arg2;
- (id)getAllHeightReCaculateDataIndexList;
- (id)getFavoritesItemDataFieldWithIndex:(unsigned long long)arg1;
- (void)reloadHeightReCalculateData;
- (struct CGRect)cellViewRectWithCellClass:(id)arg1 andRowDataField:(id)arg2;
- (void)chatLogCellViewNeedsHeightRecalculated:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

