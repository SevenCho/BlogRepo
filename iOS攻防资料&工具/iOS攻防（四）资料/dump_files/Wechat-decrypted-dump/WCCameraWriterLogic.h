//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "GPUImageInput.h"

@class GPUImageFramebuffer, NSMutableArray, NSString;

@interface WCCameraWriterLogic : MMObject <GPUImageInput>
{
    NSMutableArray *m_movieWriters;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    GPUImageFramebuffer *lastFrameBuffer;
    unsigned int inputRotation;
}

- (void).cxx_destruct;
- (BOOL)enabled;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (BOOL)wantsMonochromeInput;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (void)setInputRotation:(unsigned int)arg1 atIndex:(int)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(int)arg2;
- (int)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(int)arg2;
- (void)removeMovieWriter:(id)arg1;
- (void)addMovieWriter:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

