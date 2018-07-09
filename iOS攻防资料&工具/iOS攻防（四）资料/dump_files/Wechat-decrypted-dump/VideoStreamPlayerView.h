//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SightPlayerView.h"

#import "VideoStreamPlayerViewModeDelegate.h"

@class NSArray, NSObject, NSString, VideoStreamInfo, VideoStreamKVReportLogic, VideoStreamMoniterObject, VideoStreamPlayerViewModel;

@interface VideoStreamPlayerView : SightPlayerView <VideoStreamPlayerViewModeDelegate>
{
    VideoStreamPlayerViewModel *_playViewModel;
    VideoStreamKVReportLogic *_kvReportLogic;
    VideoStreamInfo *_videoInfo;
    VideoStreamMoniterObject *_stateMoniterObject;
    id <NSObject><AVPlayerStateControlDelegate> _controlDelegate;
    float _currentPlayedSec;
    NSObject *_playbackTimeObserver;
    NSArray *_arrBufferTimes;
}

@property(retain, nonatomic) NSArray *arrBufferTimes; // @synthesize arrBufferTimes=_arrBufferTimes;
@property(retain, nonatomic) NSObject *playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(nonatomic) float currentPlayedSec; // @synthesize currentPlayedSec=_currentPlayedSec;
@property(nonatomic) __weak id <NSObject><AVPlayerStateControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(retain, nonatomic) VideoStreamMoniterObject *stateMoniterObject; // @synthesize stateMoniterObject=_stateMoniterObject;
@property(retain, nonatomic) VideoStreamInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) VideoStreamKVReportLogic *kvReportLogic; // @synthesize kvReportLogic=_kvReportLogic;
@property(retain, nonatomic) VideoStreamPlayerViewModel *playViewModel; // @synthesize playViewModel=_playViewModel;
- (void).cxx_destruct;
- (void)onDownloadProgress:(unsigned long)arg1;
- (BOOL)isStreamingPlayMode;
- (void)OnSnsVideoChanged;
- (void)onDownloadSuccess;
- (void)ShouldUpdateThumbImage:(id)arg1;
- (void)onDownloadVideoReturnCode:(long)arg1;
- (void)OnVideoDownloadErrorExpired:(BOOL)arg1;
- (void)tryToBeginPlayVideo;
- (void)tryToPlayAndStopLoading;
- (void)tryToPauseAndStartLoading;
- (void)genThumbIfNeed;
- (void)updateVideoArgs;
- (double)getVideoCurrentSeconde;
- (double)getVideoBufferedTime;
- (id)getAVPlayerItem;
- (id)getAVPlayer;
- (void)makeSureVideoPauseWhenNextAppActivePlay;
- (void)resetPlayerToLocalPlay;
- (void)checkPlayerState;
- (void)reportKVArgs:(struct C2CDownloadResult)arg1;
- (void)calculateDataBufferState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)monitoringPlayback:(id)arg1;
- (void)playToEnd:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appBecomeActive:(id)arg1;
- (id)getFormalVideoPath;
- (void)startBuffering;
- (void)seekTo:(float)arg1;
- (void)performPauseForce:(BOOL)arg1;
- (void)startPlayer;
- (void)stopDownloadVideo;
- (unsigned int)startDownloadVideo;
- (void)setDisableResumeMusicPlayAfterPause:(BOOL)arg1;
- (id)generatePlayerItem;
- (void)initPlayer;
- (void)clearPlayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

