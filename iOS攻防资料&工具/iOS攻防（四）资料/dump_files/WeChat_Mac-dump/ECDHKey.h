//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

@interface ECDHKey : PBGeneratedMessage
{
    unsigned int hasNid:1;
    unsigned int hasKey:1;
    int nid;
    SKBuiltinBuffer_t *key;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetKey:) SKBuiltinBuffer_t *key; // @synthesize key;
@property(readonly, nonatomic) BOOL hasKey; // @synthesize hasKey;
@property(nonatomic, setter=SetNid:) int nid; // @synthesize nid;
@property(readonly, nonatomic) BOOL hasNid; // @synthesize hasNid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

