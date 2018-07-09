//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface WCPayOrderHistoryCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_feeLabel;
    UILabel *_actualFeeLabel;
    UILabel *_timeLabel;
    UILabel *_stateLabel;
    UIView *_deleteView;
}

+ (float)height;
@property(retain, nonatomic) UIView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *actualFeeLabel; // @synthesize actualFeeLabel=_actualFeeLabel;
@property(retain, nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setSomeThingHidenForEdit:(BOOL)arg1;
- (void)layoutSubviews;

@end

