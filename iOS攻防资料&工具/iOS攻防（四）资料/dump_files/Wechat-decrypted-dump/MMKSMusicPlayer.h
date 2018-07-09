//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IRemoteControlMusicPlayerExt.h"
#import "KSAudioLogProtocol.h"
#import "KSAudioPlayerDelegate.h"
#import "KSAudioPlayerUserDefineProtocol.h"
#import "MMService.h"

@class KSSongInfo, NSString;

@interface MMKSMusicPlayer : MMService <IRemoteControlMusicPlayerExt, KSAudioPlayerDelegate, KSAudioPlayerUserDefineProtocol, KSAudioLogProtocol, MMService>
{
    id <KSAudioPlayerProtocol> m_audioPlayer;
    BOOL m_isQQMusicWifiPlay;
    BOOL m_isCyclePlay;
    NSString *m_clientInfo;
    BOOL m_isQQMusicPlay;
    BOOL m_isPlayerResuming;
    BOOL m_shouldRecevingRemoteControl;
    unsigned int m_skippingMusicCount;
    KSSongInfo *m_curSongInfo;
    unsigned int m_state;
}

- (void).cxx_destruct;
- (void)reportHLSPlayFailEvent;
- (void)reportDownloadFailed;
- (void)reportPlaySystemError;
- (void)reportPlayFileError;
- (void)reportPlayerErrStop;
- (void)reportHLSPlayEvent;
- (void)reportPlayEvent;
- (id)bcdStringFromUrl_WechatMusicUrl:(id)arg1;
- (id)bcdStringFromUrl_QQMusic:(id)arg1;
- (id)bcdStringHanding:(id)arg1;
- (unsigned int)playerStateByInnerStatus:(unsigned int)arg1 params:(id)arg2;
- (void)activeAudioSession;
- (void)setPlayerState:(unsigned int)arg1 errInfo:(id)arg2;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
- (id)limitNetParam;
- (unsigned long)downloadRetryCnt;
- (id)createAudioDownloader;
- (BOOL)isNetOk;
- (void)delayEndRecevingRemoteControl;
- (void)endRecevingRemoteControl;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned int)arg2 params:(id)arg3;
- (void)cleanUpCache;
- (double)getBufferTime;
- (float)getBufferProgress;
- (double)getDuration;
- (double)getCurTime;
- (BOOL)isQQMusicWifiPlay;
- (BOOL)isMusicCached:(id)arg1;
- (unsigned int)state;
- (BOOL)isResuming;
- (BOOL)isIdle;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (BOOL)isWaiting;
- (void)resume;
- (BOOL)pausePlayAndDownloadData;
- (BOOL)pause;
- (void)seekToTime:(double)arg1 playAuto:(BOOL)arg2;
- (void)forceStopMusic;
- (void)stop;
- (void)configPlayerWithIsHLS:(BOOL)arg1;
- (void)playWithMusicTask:(id)arg1;
- (void)ignoreCurrentMusicItem;
- (void)addMusicItem:(id)arg1;
- (void)destroyStreamer;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;
- (id)cachePathForMusicFromUrl:(id)arg1;
- (id)getUrlPathExt:(id)arg1;
- (id)hashForUrl:(id)arg1;
- (id)cacheRootPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

