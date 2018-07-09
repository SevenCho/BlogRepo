//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCPayNoticeBannerDelegate.h"

@class Announce, MMTableView, NSMutableArray, NSString, UIImageView, UISwitch, WCPayF2FReceiveDetailSummaryItem;

@interface WCPayF2FReceiveDetailViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayNoticeBannerDelegate>
{
    float kRecordTableCellHeight;
    float kLeftMargin;
    float kTopMargin;
    float kSpeechSynthesizeViewTopMargin;
    float kSpeechSynthesizeViewLeftMargin;
    float kSpeechSynthesizeViewBottomMargin;
    float kSpeechSynthesizeViewImageLabelMargin;
    float kSpeechSynthesizeViewLabelSwitchMargin;
    float kBottomMargin;
    BOOL _bIsLoadingMore;
    BOOL _bIsRecordLoadEnd;
    BOOL _bIsSpeechSwitchViewShow;
    id <WCPayF2FReceiveDetailViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    Announce *_m_announcement;
    WCPayF2FReceiveDetailSummaryItem *_curSummaryItem;
    NSMutableArray *_recordList;
    UISwitch *_openSwitch;
    UIImageView *_switchImageView;
}

@property(nonatomic) BOOL bIsSpeechSwitchViewShow; // @synthesize bIsSpeechSwitchViewShow=_bIsSpeechSwitchViewShow;
@property(retain, nonatomic) UIImageView *switchImageView; // @synthesize switchImageView=_switchImageView;
@property(retain, nonatomic) UISwitch *openSwitch; // @synthesize openSwitch=_openSwitch;
@property(nonatomic) BOOL bIsRecordLoadEnd; // @synthesize bIsRecordLoadEnd=_bIsRecordLoadEnd;
@property(nonatomic) BOOL bIsLoadingMore; // @synthesize bIsLoadingMore=_bIsLoadingMore;
@property(retain, nonatomic) NSMutableArray *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) WCPayF2FReceiveDetailSummaryItem *curSummaryItem; // @synthesize curSummaryItem=_curSummaryItem;
@property(retain, nonatomic) Announce *m_announcement; // @synthesize m_announcement=_m_announcement;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayF2FReceiveDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOpenSystemPushSoundTips;
- (void)showSetPushSoundResultSuccess:(BOOL)arg1 soundStatus:(BOOL)arg2;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getBannerView;
- (BOOL)isSummaryItemNeedUpdate:(id)arg1;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeRecordCellContentView:(id)arg1 recordData:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)makeReceiveDetailHeaderView;
- (void)areaButtonClick:(id)arg1;
- (void)updateSwitchStatus;
- (id)makeSpeechSynthsizeSwtichView;
- (id)makeEmptyTipsView;
- (void)setupHeaderAndContentView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)rightBarButtonPress;
- (void)viewControllerBack;
- (void)refreshControllerAfterDeleteRecordWithSummaryItem:(id)arg1 bIsDeleteSuccess:(BOOL)arg2;
- (void)refreshControllerWithLoadRecordFail;
- (void)refreshControllerWithRecordSummaryItem:(id)arg1 recordListData:(id)arg2;
- (void)refreshControllerWithAnnounce:(id)arg1;
- (void)setupData;
- (void)setSpeechSwitchViewShow:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

