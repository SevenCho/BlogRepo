//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WAAppStateChangedContextInfoMusicInfo : MMObject
{
    BOOL _canKeepAliveByAudioPlay;
    BOOL _isPlayingMusic;
    BOOL _isMusicInteruptedByOtherSource;
}

@property(nonatomic) BOOL isMusicInteruptedByOtherSource; // @synthesize isMusicInteruptedByOtherSource=_isMusicInteruptedByOtherSource;
@property(nonatomic) BOOL isPlayingMusic; // @synthesize isPlayingMusic=_isPlayingMusic;
@property(nonatomic) BOOL canKeepAliveByAudioPlay; // @synthesize canKeepAliveByAudioPlay=_canKeepAliveByAudioPlay;
- (id)description;

@end

