//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SightView;

@protocol SightViewDelegate <NSObject>

@optional
- (void)onSightProgressBarHidden;
- (void)onVideoStreamDownloadFail:(BOOL)arg1;
- (void)onStartToPlayVideo;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onResumeSightView:(SightView *)arg1;
- (void)onStackSightView:(SightView *)arg1;
- (void)onSightViewPlayItemCleared:(SightView *)arg1;
- (BOOL)sightView:(SightView *)arg1 playbackDidReadEnd:(BOOL)arg2;
- (void)sightViewProgressDidReachEnd:(SightView *)arg1;
- (void)onClickIconViewOfSightView:(SightView *)arg1;
@end

