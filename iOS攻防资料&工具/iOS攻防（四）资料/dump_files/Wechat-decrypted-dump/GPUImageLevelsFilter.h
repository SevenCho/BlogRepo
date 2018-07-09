//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageLevelsFilter : GPUImageFilter
{
    int minUniform;
    int midUniform;
    int maxUniform;
    int minOutputUniform;
    int maxOutputUniform;
    struct GPUVector3 minVector;
    struct GPUVector3 midVector;
    struct GPUVector3 maxVector;
    struct GPUVector3 minOutputVector;
    struct GPUVector3 maxOutputVector;
}

- (void)setBlueMin:(float)arg1 gamma:(float)arg2 max:(float)arg3;
- (void)setBlueMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)setGreenMin:(float)arg1 gamma:(float)arg2 max:(float)arg3;
- (void)setGreenMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)setRedMin:(float)arg1 gamma:(float)arg2 max:(float)arg3;
- (void)setRedMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)setMin:(float)arg1 gamma:(float)arg2 max:(float)arg3;
- (void)setMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)updateUniforms;
- (id)init;

@end

