//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSMutableArray;

@protocol WNArticleToolViewDelegate <NSObject>
- (MMUIViewController *)getViewController;

@optional
- (BOOL)isRecording;
- (BOOL)isReminderParagraph;
- (BOOL)isTodoParagraph;
- (BOOL)isOlLiParagraph;
- (BOOL)isUlLiParagraph;
- (BOOL)isSelectedTextBold;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (unsigned long)objectCount;
- (BOOL)ifHasReachedSizeLimit;
- (void)onToolViewParagraphSetTodo;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onTextSetBold;
- (void)onCancelSelectLocation;
- (void)onCancelSelectPictures;
- (void)insertItems:(NSMutableArray *)arg1;
- (BOOL)needHoldLoadingViewInSelf;
@end

