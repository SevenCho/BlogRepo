//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString, QryHoneyUserDetailResp;

@interface HoneyPayReceiverStatusViewController : HoneyPayBaseViewController <ILinkEventExt>
{
    id <HoneyPayReceiverStatusViewControllerDelegate> _delegate;
    QryHoneyUserDetailResp *_detail;
}

@property(retain, nonatomic) QryHoneyUserDetailResp *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <HoneyPayReceiverStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)done;
- (id)detailCellContentWithInfos:(id)arg1 width:(float)arg2;
- (id)statusViewHeader:(float)arg1 icon:(id)arg2 status:(id)arg3 attention:(id)arg4;
- (id)unbindHeaderView;
- (id)expiredHeaderView;
- (id)inuseHeaderView;
- (id)createdHeaderView;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

