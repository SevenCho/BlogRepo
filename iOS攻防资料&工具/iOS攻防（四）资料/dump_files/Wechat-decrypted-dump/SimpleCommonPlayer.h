//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonPlayer.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString;

@interface SimpleCommonPlayer : CommonPlayer <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_m_audioPlayer;
}

@property(retain, nonatomic) AVAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
- (void).cxx_destruct;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (float)duration;
- (void)setVolume:(float)arg1;
- (BOOL)isPlaying;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

