//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface UxLifeGetEventListResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasExpid:1;
    unsigned int expid;
    BaseResponse *baseResponse;
    NSMutableArray *mutableReasonItemList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetExpid:) unsigned int expid; // @synthesize expid;
@property(readonly, nonatomic) BOOL hasExpid; // @synthesize hasExpid;
@property(retain, nonatomic) NSMutableArray *mutableReasonItemList; // @synthesize mutableReasonItemList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addReasonItem:(id)arg1;
- (void)addReasonItemFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *reasonItem; // @dynamic reasonItem;
- (id)reasonItemList;
- (id)init;

@end

