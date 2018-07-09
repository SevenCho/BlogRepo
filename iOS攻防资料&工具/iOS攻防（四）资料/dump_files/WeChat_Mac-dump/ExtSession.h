//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

@interface ExtSession : PBGeneratedMessage
{
    unsigned int hasSessionType:1;
    unsigned int hasSessionKey:1;
    unsigned int hasServerId:1;
    unsigned int sessionType;
    SKBuiltinBuffer_t *sessionKey;
    SKBuiltinBuffer_t *serverId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetServerId:) SKBuiltinBuffer_t *serverId; // @synthesize serverId;
@property(readonly, nonatomic) BOOL hasServerId; // @synthesize hasServerId;
@property(retain, nonatomic, setter=SetSessionKey:) SKBuiltinBuffer_t *sessionKey; // @synthesize sessionKey;
@property(readonly, nonatomic) BOOL hasSessionKey; // @synthesize hasSessionKey;
@property(nonatomic, setter=SetSessionType:) unsigned int sessionType; // @synthesize sessionType;
@property(readonly, nonatomic) BOOL hasSessionType; // @synthesize hasSessionType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

