//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "UITableViewDelegate.h"

@class MMTableViewInfo, NSString;

@interface ResourceBrowserFilterViewController : MMUIViewController <UITableViewDelegate, MMTableViewInfoDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int m_selectedOrder;
    unsigned int m_selectedType;
    id <ResourceBrowserFilterViewControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <ResourceBrowserFilterViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDone;
- (void)onSelectCell:(id)arg1:(id)arg2;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithOrder:(unsigned int)arg1 initWithType:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

