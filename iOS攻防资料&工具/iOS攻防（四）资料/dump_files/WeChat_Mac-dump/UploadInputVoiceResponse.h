//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface UploadInputVoiceResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasEndFlag:1;
    unsigned int hasText:1;
    unsigned int endFlag;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *text;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetText:) SKBuiltinBuffer_t *text; // @synthesize text;
@property(readonly, nonatomic) BOOL hasText; // @synthesize hasText;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

