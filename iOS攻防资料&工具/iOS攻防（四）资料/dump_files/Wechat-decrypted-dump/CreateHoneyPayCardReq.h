//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface CreateHoneyPayCardReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;
@property(retain, nonatomic) NSString *userUsername; // @dynamic userUsername;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

