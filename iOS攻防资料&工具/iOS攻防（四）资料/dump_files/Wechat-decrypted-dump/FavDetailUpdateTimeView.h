//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class FavoritesItem, UILabel;

@interface FavDetailUpdateTimeView : MMUIView
{
    UILabel *m_addFavTimeLabel;
    UILabel *m_editFavTimeLabel;
    FavoritesItem *m_favItem;
}

+ (id)getDispUpdateTime:(id)arg1;
+ (float)getFavDetailUpdateTimeHeight;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem;
- (void).cxx_destruct;
- (void)updateByFavItem:(id)arg1;
- (void)initUpdateTimeView;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFavItem:(id)arg1;

@end

