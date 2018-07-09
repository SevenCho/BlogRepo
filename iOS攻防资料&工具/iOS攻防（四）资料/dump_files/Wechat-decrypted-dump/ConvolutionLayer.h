//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNNKernel.h"

@class CNNBuffer;

@interface ConvolutionLayer : CNNKernel
{
    CNNBuffer *_weightsBuffer;
    CNNBuffer *_biasBuffer;
    CNNBuffer *_meanBuffer;
    CNNBuffer *_varianceBuffer;
    CNNBuffer *_preluBuffer;
    CNNBuffer *_dimensionsBuffer;
    struct CNNConvolutionPara _convolutionPara;
}

+ (struct CNNDimension)outputDimensionWithPara:(void *)arg1 inputDimension:(struct CNNDimension)arg2;
@property(retain, nonatomic) CNNBuffer *dimensionsBuffer; // @synthesize dimensionsBuffer=_dimensionsBuffer;
@property(retain, nonatomic) CNNBuffer *preluBuffer; // @synthesize preluBuffer=_preluBuffer;
@property(retain, nonatomic) CNNBuffer *varianceBuffer; // @synthesize varianceBuffer=_varianceBuffer;
@property(retain, nonatomic) CNNBuffer *meanBuffer; // @synthesize meanBuffer=_meanBuffer;
@property(retain, nonatomic) CNNBuffer *biasBuffer; // @synthesize biasBuffer=_biasBuffer;
@property(retain, nonatomic) CNNBuffer *weightsBuffer; // @synthesize weightsBuffer=_weightsBuffer;
@property(nonatomic) struct CNNConvolutionPara convolutionPara; // @synthesize convolutionPara=_convolutionPara;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)printInfo;
- (void)findBestThreadgroupsPerGrid:(CDStruct_32a7f38a *)arg1 threadsPerThreadgroup:(CDStruct_32a7f38a *)arg2;
- (BOOL)encodeWithCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)constructWithConvolutionData:(const struct layer_res *)arg1 batchNormPara:(const struct layer_param *)arg2 batchNormData:(const struct layer_res *)arg3 preluPara:(const struct layer_param *)arg4 preluData:(const struct layer_res *)arg5;
- (void)preloadWithInputDimension:(struct CNNDimension)arg1;
- (id)initWithPara:(struct CNNConvolutionPara)arg1 inputDimension:(struct CNNDimension)arg2 device:(id)arg3 library:(id)arg4;

@end

