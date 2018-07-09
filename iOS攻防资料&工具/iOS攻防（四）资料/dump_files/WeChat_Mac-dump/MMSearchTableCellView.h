//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MMSearchResultItem, NSColor, NSString;

@interface MMSearchTableCellView : NSTableCellView
{
    BOOL _selected;
    NSColor *_backgroundColor;
    MMSearchResultItem *_dataItem;
    NSString *_keyword;
    unsigned long long _ranking;
    unsigned long long _subRanking;
    NSString *_queryText;
}

@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(nonatomic) unsigned long long subRanking; // @synthesize subRanking=_subRanking;
@property(nonatomic) unsigned long long ranking; // @synthesize ranking=_ranking;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) MMSearchResultItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)getSearchLogParamsWithClickType:(unsigned long long)arg1 clickSubType:(unsigned long long)arg2;
- (void)reportResultSelectLog;
- (void)populateWithResultItem:(id)arg1 keyword:(id)arg2;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;

@end

