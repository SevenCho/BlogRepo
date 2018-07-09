//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class AttributeLabel, BSBusinessContactItem, MMMaskHeadImageView, NSArray;

@interface BSSBrandContactItemView : BSSBaseItemView
{
    BSBusinessContactItem *_dataItem;
    NSArray *_keywordList;
    MMMaskHeadImageView *_headImgView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_descLabel;
}

+ (float)heightForItem;
@property(retain, nonatomic) AttributeLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) AttributeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMMaskHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) BSBusinessContactItem *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithContactItem:(id)arg1 andKeyWordList:(id)arg2;
- (void)dealloc;

@end

