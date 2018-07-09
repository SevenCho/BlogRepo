//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetAvailableCardRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppId:1;
    unsigned int hasShopId:1;
    unsigned int hasSignType:1;
    unsigned int hasCardSign:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasNonceStr:1;
    unsigned int hasCardTpId:1;
    unsigned int hasCardType:1;
    unsigned int shopId;
    unsigned int timeStamp;
    BaseRequest *baseRequest;
    NSString *appId;
    NSString *signType;
    NSString *cardSign;
    NSString *nonceStr;
    NSString *cardTpId;
    NSString *cardType;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCardType:) NSString *cardType; // @synthesize cardType;
@property(readonly, nonatomic) BOOL hasCardType; // @synthesize hasCardType;
@property(retain, nonatomic, setter=SetCardTpId:) NSString *cardTpId; // @synthesize cardTpId;
@property(readonly, nonatomic) BOOL hasCardTpId; // @synthesize hasCardTpId;
@property(retain, nonatomic, setter=SetNonceStr:) NSString *nonceStr; // @synthesize nonceStr;
@property(readonly, nonatomic) BOOL hasNonceStr; // @synthesize hasNonceStr;
@property(nonatomic, setter=SetTimeStamp:) unsigned int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(retain, nonatomic, setter=SetCardSign:) NSString *cardSign; // @synthesize cardSign;
@property(readonly, nonatomic) BOOL hasCardSign; // @synthesize hasCardSign;
@property(retain, nonatomic, setter=SetSignType:) NSString *signType; // @synthesize signType;
@property(readonly, nonatomic) BOOL hasSignType; // @synthesize hasSignType;
@property(nonatomic, setter=SetShopId:) unsigned int shopId; // @synthesize shopId;
@property(readonly, nonatomic) BOOL hasShopId; // @synthesize hasShopId;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

