//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactLabelMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMTableViewInfo, NSString, UIView;

@interface ContactTagMgrViewController : MMUIViewController <IContactLabelMgrExt, UIAlertViewDelegate, MMTableViewInfoDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned long _uiJobID;
    UIView *_headerView;
    UIView *_footerView;
    BOOL _bNeedReload;
    BOOL _bNeedGetTagFromServer;
}

- (void).cxx_destruct;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onDismiss:(id)arg1;
- (void)reloadDataAndView;
- (id)makeNoSeparatorLineFooterView:(id)arg1;
- (id)makeExistTagHeaderView;
- (void)onCreateContactLabel;
- (void)onEditContactLabel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

