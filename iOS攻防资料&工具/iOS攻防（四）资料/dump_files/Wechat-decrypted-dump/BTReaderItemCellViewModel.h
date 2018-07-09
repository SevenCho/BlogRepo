//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTBaseItemCellViewModel.h"

@class BTMsgSectionData, NSMutableArray, NSString, ReaderWrap;

@interface BTReaderItemCellViewModel : BTBaseItemCellViewModel
{
    ReaderWrap *_readerWrap;
    unsigned long _itemIndex;
    struct CGSize _titleSize;
    NSMutableArray *_titleLabelStyles;
    struct CGSize _digestSize;
    NSMutableArray *_digestLabelStyles;
    unsigned int _position;
    id <BTReaderItemCellViewModelDelegate> _delegate;
    BTMsgSectionData *_msgSectionData;
    NSString *_readerUrlMd5;
}

+ (id)createModelWithReaderWrap:(id)arg1 itemIndex:(unsigned long)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(float)arg5;
+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(copy, nonatomic) NSString *readerUrlMd5; // @synthesize readerUrlMd5=_readerUrlMd5;
@property(nonatomic) __weak BTMsgSectionData *msgSectionData; // @synthesize msgSectionData=_msgSectionData;
@property(nonatomic) __weak id <BTReaderItemCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ReaderWrap *readerWrap; // @synthesize readerWrap=_readerWrap;
@property(readonly, nonatomic) unsigned long itemIndex; // @synthesize itemIndex=_itemIndex;
- (void).cxx_destruct;
- (BOOL)isNormalItemTitleSingleLine;
- (float)itemViewHeightForNormalItem;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) struct CGSize titleSize;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
- (BOOL)isTitleSingleLine;
@property(readonly, nonatomic) BOOL hasLandingPage;
@property(readonly, nonatomic) unsigned long friendsReadCount;
@property(readonly, nonatomic) unsigned int position;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) NSString *coverImgURL;
- (float)viewHeight;
- (void)clearCache;
- (void)updateWithReaderWrap:(id)arg1 itemIndex:(unsigned long)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(float)arg5;
- (id)initWithReaderWrap:(id)arg1 itemIndex:(unsigned long)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(float)arg5;
- (id)itemViewClassName;

@end

