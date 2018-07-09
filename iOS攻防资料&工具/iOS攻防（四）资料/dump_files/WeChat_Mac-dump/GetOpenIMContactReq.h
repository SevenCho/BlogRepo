//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GetOpenIMContactReq : PBGeneratedMessage
{
    unsigned int hasTpUsername:1;
    unsigned int hasRoomname:1;
    unsigned int hasTicket:1;
    NSString *tpUsername;
    NSString *roomname;
    NSString *ticket;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetRoomname:) NSString *roomname; // @synthesize roomname;
@property(readonly, nonatomic) BOOL hasRoomname; // @synthesize hasRoomname;
@property(retain, nonatomic, setter=SetTpUsername:) NSString *tpUsername; // @synthesize tpUsername;
@property(readonly, nonatomic) BOOL hasTpUsername; // @synthesize hasTpUsername;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

