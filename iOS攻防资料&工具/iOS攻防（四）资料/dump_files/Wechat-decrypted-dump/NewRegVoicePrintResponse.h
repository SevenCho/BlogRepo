//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString, VoicePieceCtx;

@interface NewRegVoicePrintResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *biosigTicket; // @dynamic biosigTicket;
@property(retain, nonatomic) VoicePieceCtx *nextPiece; // @dynamic nextPiece;
@property(nonatomic) unsigned int nextStep; // @dynamic nextStep;
@property(nonatomic) int resgisterRet; // @dynamic resgisterRet;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

