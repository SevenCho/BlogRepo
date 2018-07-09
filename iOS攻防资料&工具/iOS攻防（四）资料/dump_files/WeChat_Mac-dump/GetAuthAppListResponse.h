//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetAuthAppListResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasAppCount:1;
    unsigned int appCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableAuthAppListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableAuthAppListList; // @synthesize mutableAuthAppListList;
@property(nonatomic, setter=SetAppCount:) unsigned int appCount; // @synthesize appCount;
@property(readonly, nonatomic) BOOL hasAppCount; // @synthesize hasAppCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addAuthAppList:(id)arg1;
- (void)addAuthAppListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *authAppList; // @dynamic authAppList;
- (id)authAppListList;
- (id)init;

@end

