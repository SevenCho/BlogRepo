//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MMWebImageView, UILabel, UIView;

@interface WAWeAppBindBrandListTableCellView : UITableViewCell
{
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIView *_sepreateLine;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initSeperateLine;
- (void)initTitleLabel;
- (void)initHeadImgeView;
- (void)initView;
- (void)updateIsShowSeperateLine:(BOOL)arg1;
- (void)updateDataWithHeadImageURL:(id)arg1 title:(id)arg2 isShowSeperateLine:(BOOL)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

