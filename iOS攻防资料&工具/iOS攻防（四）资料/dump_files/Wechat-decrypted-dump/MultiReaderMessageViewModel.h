//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

#import "RichTextLayoutDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MultiReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate>
{
    NSMutableArray *m_titleSizeArr;
    NSMutableDictionary *m_titleStyleDic;
    NSMutableArray *m_digestSizeArr;
    NSMutableDictionary *m_digestStyleDic;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (BOOL)shouldOpenNewLineAtY:(float)arg1 withLineHeight:(float)arg2 richTextView:(id)arg3;
- (BOOL)isItemNoCover:(id)arg1;
- (struct CGSize)calculateDigestLabelSize:(unsigned long)arg1;
- (id)digestStylesForIndex:(unsigned long)arg1;
- (float)labelMaxWidthOfIndex:(unsigned long)arg1;
- (struct CGSize)digestSizeOfIndex:(unsigned long)arg1;
- (struct CGSize)calculateTitleLabelSize:(unsigned long)arg1;
- (id)titleStylesForIndex:(unsigned long)arg1;
- (struct CGSize)titleSizeOfIndex:(unsigned long)arg1;
- (void)resetTextSize;
- (id)itemLabelWithFont:(id)arg1 width:(float)arg2;
- (id)getRichTextView:(float)arg1 font:(id)arg2;
- (unsigned long)imageCountForIndex:(unsigned long)arg1;
- (unsigned long)playLengthForIndex:(unsigned long)arg1;
- (unsigned int)musicSouceForIndex:(unsigned long)arg1;
- (id)genMusicInfoForIndex:(unsigned long)arg1;
- (float)heightForTopItemView;
- (float)textNormalItemViewHeight:(id)arg1 index:(unsigned long)arg2;
- (float)textTopItemViewHeight:(id)arg1;
- (float)articleTopItemViewHeight:(id)arg1;
- (float)appendNodeViewHeightIfIndex:(int)arg1;
- (float)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

