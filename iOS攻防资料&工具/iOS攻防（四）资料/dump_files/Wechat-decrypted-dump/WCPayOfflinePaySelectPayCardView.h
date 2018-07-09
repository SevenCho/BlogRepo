//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, WCPayControlData;

@interface WCPayOfflinePaySelectPayCardView : MMUIView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>
{
    id <WCPayOfflinePaySelectPayCardViewDelegate> _delegate;
    int _fromScene;
    WCPayControlData *_controlData;
    NSString *_curSelectCardSerial;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    NSArray *_displayCardArray;
}

@property(retain, nonatomic) NSArray *displayCardArray; // @synthesize displayCardArray=_displayCardArray;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *curSelectCardSerial; // @synthesize curSelectCardSerial=_curSelectCardSerial;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) __weak id <WCPayOfflinePaySelectPayCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (BOOL)isLQTCardinfo:(id)arg1;
- (BOOL)isBalanceCardInfo:(id)arg1;
- (id)getBankLogoUrlWithBankType:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)dismissWithShouCallDelegate:(BOOL)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)setupDisplayCardDataSource;
- (void)setCurSelectCardBindSerial:(id)arg1;
- (id)initSelectPayCardViewWithControlData:(id)arg1 delegate:(id)arg2 fromScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

