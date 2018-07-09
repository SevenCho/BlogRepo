//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface AppCenterResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRespBuf:1;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *respBuf;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRespBuf:) SKBuiltinBuffer_t *respBuf; // @synthesize respBuf;
@property(readonly, nonatomic) BOOL hasRespBuf; // @synthesize hasRespBuf;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

