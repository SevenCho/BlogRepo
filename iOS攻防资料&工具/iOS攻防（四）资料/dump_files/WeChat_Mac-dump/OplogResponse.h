//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class OplogRet;

@interface OplogResponse : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasOplogRet:1;
    int ret;
    OplogRet *oplogRet;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetOplogRet:) OplogRet *oplogRet; // @synthesize oplogRet;
@property(readonly, nonatomic) BOOL hasOplogRet; // @synthesize hasOplogRet;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

