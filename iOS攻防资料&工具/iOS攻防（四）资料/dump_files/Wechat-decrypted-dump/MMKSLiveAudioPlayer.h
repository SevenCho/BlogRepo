//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSAudioPlayerProtocol.h"

@class AVPlayer, AVPlayerItem, KSSongInfo, NSString;

@interface MMKSLiveAudioPlayer : NSObject <KSAudioPlayerProtocol>
{
    BOOL _manualProcessInterrup;
    BOOL _pauseOnHeadPhoneOut;
    BOOL _bIsObservering;
    BOOL _bIsManualPaused;
    KSSongInfo *_curSong;
    id <KSAudioPlayerDelegate> _delegate;
    unsigned int _status;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
    double _cacheProgress;
    double _bufferTime;
    double _seekTime;
    double _resumeTime;
}

@property(nonatomic) BOOL bIsManualPaused; // @synthesize bIsManualPaused=_bIsManualPaused;
@property(nonatomic) BOOL bIsObservering; // @synthesize bIsObservering=_bIsObservering;
@property(nonatomic) double resumeTime; // @synthesize resumeTime=_resumeTime;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) BOOL pauseOnHeadPhoneOut; // @synthesize pauseOnHeadPhoneOut=_pauseOnHeadPhoneOut;
@property(nonatomic) BOOL manualProcessInterrup; // @synthesize manualProcessInterrup=_manualProcessInterrup;
@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) KSSongInfo *curSong; // @synthesize curSong=_curSong;
- (void).cxx_destruct;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)onPlayerDidFinishPlaying;
- (void)removeObserver;
- (void)addObserver;
- (void)releasePlayer;
- (void)setStatus:(unsigned int)arg1 error:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) double playTimeWithNoPause;
@property(readonly, nonatomic) unsigned long secondCacheCnt;
@property(readonly, nonatomic) double curTime;
@property(readonly, nonatomic) double duration;
- (unsigned int)errType;
- (id)errDetail;
- (id)dataProviderDetail;
- (double)firstBufTime;
- (void)seek:(double)arg1;
- (void)resume;
- (void)pause;
- (void)internalStop;
- (void)stop;
- (BOOL)play:(id)arg1 seekTime:(double)arg2;
- (BOOL)play:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

