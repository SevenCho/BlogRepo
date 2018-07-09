//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VideoStreamMoniterObject : NSObject
{
    BOOL _bShouldResumeMusicPlayAtPause;
    BOOL _bShouldResumePlayWhenApplicationDidBecomeActive;
    BOOL _bResumeRealPlayBeInBugState;
    unsigned long _errorType;
    unsigned int _playerState;
    unsigned int _recoverState;
    unsigned long long _lastBufferTime;
}

@property(nonatomic) BOOL bResumeRealPlayBeInBugState; // @synthesize bResumeRealPlayBeInBugState=_bResumeRealPlayBeInBugState;
@property(nonatomic) BOOL bShouldResumePlayWhenApplicationDidBecomeActive; // @synthesize bShouldResumePlayWhenApplicationDidBecomeActive=_bShouldResumePlayWhenApplicationDidBecomeActive;
@property(nonatomic) BOOL bShouldResumeMusicPlayAtPause; // @synthesize bShouldResumeMusicPlayAtPause=_bShouldResumeMusicPlayAtPause;
@property(nonatomic) unsigned int recoverState; // @synthesize recoverState=_recoverState;
@property(nonatomic) unsigned int playerState; // @synthesize playerState=_playerState;
@property(nonatomic) unsigned long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) unsigned long long lastBufferTime; // @synthesize lastBufferTime=_lastBufferTime;
- (BOOL)isInAVPlayerItemBugState;
- (BOOL)isInResourceLoaderBugState;
- (BOOL)isPause;
- (BOOL)isBuffering;
- (void)startBuffering;
- (void)resetError;
- (void)resetSuccess;
- (void)resetToLocalPlayer;
- (void)reportRecoverState;
- (id)init;

@end

