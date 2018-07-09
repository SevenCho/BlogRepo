//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCMediaItem, WCSightFullPlayView;

@protocol WCSightFullPlayViewDelegate <NSObject>

@optional
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (NSString *)getDetailButtonTitle;
- (BOOL)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onFullSightDownloadFinished:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onFullSightPlayEnd:(BOOL)arg1;
- (void)onLongPressedFullSightView:(WCSightFullPlayView *)arg1;
- (void)onClickFullSightView:(WCSightFullPlayView *)arg1;
@end

