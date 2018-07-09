//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WARecordEncodeDelegate.h"
#import "WCAudioSessionExt.h"

@class NSDictionary, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface WABaseRecorder : NSObject <WARecordEncodeDelegate, WCAudioSessionExt>
{
    struct WARecorderData *mAqData;
    unsigned int mState;
    NSObject<OS_dispatch_queue> *mRecordQueue;
    NSURL *mUrl;
    NSDictionary *mSettings;
    unsigned int mFrameRecordByteSize;
    id <WARecorderDelegate> mDelegate;
    NSMutableData *mEncodeBufferData;
    BOOL _timerOnFire;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_inputSource;
    double _duration;
    double _startTime;
    double _recordTime;
}

+ (id)recorderWithFilePath:(id)arg1 settings:(id)arg2;
@property(nonatomic) BOOL timerOnFire; // @synthesize timerOnFire=_timerOnFire;
@property(retain, nonatomic) NSString *inputSource; // @synthesize inputSource=_inputSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)setInputSourceIfNeed;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onNotifyStateChangeOnMainThread:(unsigned int)arg1 error:(id)arg2;
- (void)onNotifyFrameRecordOnMainThread:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)unActiveAudioSession;
- (void)activeAudioSession;
- (BOOL)checkErrorAndLogIfError:(long)arg1 withErrorString:(id)arg2;
- (BOOL)checkErrorAndStopIfError:(long)arg1 withErrorString:(id)arg2;
- (void)clearRecorderState;
- (void)encodePCMBufferToOutputFormat:(struct WARecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned long)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
@property(readonly, getter=currentTime) double currentTime;
@property(readonly, getter=isIdle) BOOL isIdle;
@property(readonly, getter=isPaused) BOOL isPaused;
@property(readonly, getter=isRecording) BOOL recording;
@property(readonly, getter=state) unsigned int state;
@property(readonly, nonatomic, getter=settings) NSDictionary *settings;
@property(readonly, nonatomic, getter=url) NSURL *url;
@property(nonatomic) __weak id <WARecorderDelegate> delegate;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)record;
- (void)prepareToRecord;
- (id)initWithURL:(id)arg1 settings:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

