//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class CustomizedInfo, NSString, SKBuiltinBuffer_t, SKBuiltinString_t, SnsUserInfo;

@interface ModChatRoomMember : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasPyinitial:1;
    unsigned int hasQuanPin:1;
    unsigned int hasSex:1;
    unsigned int hasImgBuf:1;
    unsigned int hasImgFlag:1;
    unsigned int hasRemark:1;
    unsigned int hasRemarkPyinitial:1;
    unsigned int hasRemarkQuanPin:1;
    unsigned int hasContactType:1;
    unsigned int hasProvince:1;
    unsigned int hasCity:1;
    unsigned int hasSignature:1;
    unsigned int hasPersonalCard:1;
    unsigned int hasVerifyFlag:1;
    unsigned int hasVerifyInfo:1;
    unsigned int hasWeibo:1;
    unsigned int hasVerifyContent:1;
    unsigned int hasWeiboNickname:1;
    unsigned int hasWeiboFlag:1;
    unsigned int hasAlbumStyle:1;
    unsigned int hasAlbumFlag:1;
    unsigned int hasAlbumBgimgId:1;
    unsigned int hasAlias:1;
    unsigned int hasSnsUserInfo:1;
    unsigned int hasCountry:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int hasMyBrandList:1;
    unsigned int hasCustomizedInfo:1;
    int sex;
    unsigned int imgFlag;
    unsigned int contactType;
    unsigned int personalCard;
    unsigned int verifyFlag;
    unsigned int weiboFlag;
    int albumStyle;
    int albumFlag;
    SKBuiltinString_t *userName;
    SKBuiltinString_t *nickName;
    SKBuiltinString_t *pyinitial;
    SKBuiltinString_t *quanPin;
    SKBuiltinBuffer_t *imgBuf;
    SKBuiltinString_t *remark;
    SKBuiltinString_t *remarkPyinitial;
    SKBuiltinString_t *remarkQuanPin;
    NSString *province;
    NSString *city;
    NSString *signature;
    NSString *verifyInfo;
    NSString *weibo;
    NSString *verifyContent;
    NSString *weiboNickname;
    NSString *albumBgimgId;
    NSString *alias;
    SnsUserInfo *snsUserInfo;
    NSString *country;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
    NSString *myBrandList;
    CustomizedInfo *customizedInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCustomizedInfo:) CustomizedInfo *customizedInfo; // @synthesize customizedInfo;
@property(readonly, nonatomic) BOOL hasCustomizedInfo; // @synthesize hasCustomizedInfo;
@property(retain, nonatomic, setter=SetMyBrandList:) NSString *myBrandList; // @synthesize myBrandList;
@property(readonly, nonatomic) BOOL hasMyBrandList; // @synthesize hasMyBrandList;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetCountry:) NSString *country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
@property(retain, nonatomic, setter=SetSnsUserInfo:) SnsUserInfo *snsUserInfo; // @synthesize snsUserInfo;
@property(readonly, nonatomic) BOOL hasSnsUserInfo; // @synthesize hasSnsUserInfo;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(retain, nonatomic, setter=SetAlbumBgimgId:) NSString *albumBgimgId; // @synthesize albumBgimgId;
@property(readonly, nonatomic) BOOL hasAlbumBgimgId; // @synthesize hasAlbumBgimgId;
@property(nonatomic, setter=SetAlbumFlag:) int albumFlag; // @synthesize albumFlag;
@property(readonly, nonatomic) BOOL hasAlbumFlag; // @synthesize hasAlbumFlag;
@property(nonatomic, setter=SetAlbumStyle:) int albumStyle; // @synthesize albumStyle;
@property(readonly, nonatomic) BOOL hasAlbumStyle; // @synthesize hasAlbumStyle;
@property(nonatomic, setter=SetWeiboFlag:) unsigned int weiboFlag; // @synthesize weiboFlag;
@property(readonly, nonatomic) BOOL hasWeiboFlag; // @synthesize hasWeiboFlag;
@property(retain, nonatomic, setter=SetWeiboNickname:) NSString *weiboNickname; // @synthesize weiboNickname;
@property(readonly, nonatomic) BOOL hasWeiboNickname; // @synthesize hasWeiboNickname;
@property(retain, nonatomic, setter=SetVerifyContent:) NSString *verifyContent; // @synthesize verifyContent;
@property(readonly, nonatomic) BOOL hasVerifyContent; // @synthesize hasVerifyContent;
@property(retain, nonatomic, setter=SetWeibo:) NSString *weibo; // @synthesize weibo;
@property(readonly, nonatomic) BOOL hasWeibo; // @synthesize hasWeibo;
@property(retain, nonatomic, setter=SetVerifyInfo:) NSString *verifyInfo; // @synthesize verifyInfo;
@property(readonly, nonatomic) BOOL hasVerifyInfo; // @synthesize hasVerifyInfo;
@property(nonatomic, setter=SetVerifyFlag:) unsigned int verifyFlag; // @synthesize verifyFlag;
@property(readonly, nonatomic) BOOL hasVerifyFlag; // @synthesize hasVerifyFlag;
@property(nonatomic, setter=SetPersonalCard:) unsigned int personalCard; // @synthesize personalCard;
@property(readonly, nonatomic) BOOL hasPersonalCard; // @synthesize hasPersonalCard;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(nonatomic, setter=SetContactType:) unsigned int contactType; // @synthesize contactType;
@property(readonly, nonatomic) BOOL hasContactType; // @synthesize hasContactType;
@property(retain, nonatomic, setter=SetRemarkQuanPin:) SKBuiltinString_t *remarkQuanPin; // @synthesize remarkQuanPin;
@property(readonly, nonatomic) BOOL hasRemarkQuanPin; // @synthesize hasRemarkQuanPin;
@property(retain, nonatomic, setter=SetRemarkPyinitial:) SKBuiltinString_t *remarkPyinitial; // @synthesize remarkPyinitial;
@property(readonly, nonatomic) BOOL hasRemarkPyinitial; // @synthesize hasRemarkPyinitial;
@property(retain, nonatomic, setter=SetRemark:) SKBuiltinString_t *remark; // @synthesize remark;
@property(readonly, nonatomic) BOOL hasRemark; // @synthesize hasRemark;
@property(nonatomic, setter=SetImgFlag:) unsigned int imgFlag; // @synthesize imgFlag;
@property(readonly, nonatomic) BOOL hasImgFlag; // @synthesize hasImgFlag;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(nonatomic, setter=SetSex:) int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetQuanPin:) SKBuiltinString_t *quanPin; // @synthesize quanPin;
@property(readonly, nonatomic) BOOL hasQuanPin; // @synthesize hasQuanPin;
@property(retain, nonatomic, setter=SetPyinitial:) SKBuiltinString_t *pyinitial; // @synthesize pyinitial;
@property(readonly, nonatomic) BOOL hasPyinitial; // @synthesize hasPyinitial;
@property(retain, nonatomic, setter=SetNickName:) SKBuiltinString_t *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

