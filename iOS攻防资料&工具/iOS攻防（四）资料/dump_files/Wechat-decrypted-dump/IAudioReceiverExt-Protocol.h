//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol IAudioReceiverExt

@optional
- (void)OnEarTip;
- (void)OnEndPlaying:(unsigned long)arg1 isForceStop:(BOOL)arg2;
- (void)OnBeginPlaying:(unsigned long)arg1 ErrNo:(int)arg2;
- (void)OnLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
@end

