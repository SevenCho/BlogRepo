//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AQAudioRecorderDelegate.h"
#import "MMService.h"
#import "UploadMusicFPMgrDelegate.h"
#import "UploadTvFPMgrDelegate.h"

@class AQAudioRecorder, NSString, UploadMusicFPMgr;

@interface MusicSearchMgr : MMService <MMService, AQAudioRecorderDelegate, UploadMusicFPMgrDelegate, UploadTvFPMgrDelegate>
{
    struct timeval _startTime;
    unsigned long _curSessionId;
    AQAudioRecorder *_recoder;
    UploadMusicFPMgr *_uploadMgr;
}

- (void).cxx_destruct;
- (void)OnNetworkError:(unsigned long)arg1;
- (void)OnGetMusicItem:(id)arg1 Offset:(float)arg2 FPId:(unsigned long)arg3;
- (void)OnAQPart:(id)arg1 Duration:(float)arg2 EndFlag:(unsigned long)arg3 ForceDelete:(BOOL)arg4;
- (void)OnAQEndRecording:(id)arg1;
- (void)OnAQBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)SetCurLocation:(id)arg1;
- (BOOL)StopSearch:(unsigned long)arg1;
- (BOOL)StopRecord:(unsigned long)arg1;
- (int)StartSearch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

