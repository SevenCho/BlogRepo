//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class StreamInputResult;

@protocol IStreamVoiceInputExt <NSObject>

@optional
- (void)onVoiceSilentTooLong:(unsigned long)arg1;
- (void)OnVoiceTransEnd:(unsigned long)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned long)arg2;
- (void)onGetResultText:(StreamInputResult *)arg1 andInputId:(unsigned long)arg2;
- (void)OnLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;
@end

