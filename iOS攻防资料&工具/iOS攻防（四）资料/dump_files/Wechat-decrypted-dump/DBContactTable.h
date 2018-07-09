//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class DBContactBrand, DBContactChatRoom, DBContactHeadImage, DBContactLocal, DBContactOpenIM, DBContactOther, DBContactProfile, DBContactRemark, DBContactSocial, NSString;

@interface DBContactTable : NSObject <WCTTableCoding>
{
    NSString *_userName;
    unsigned long _type;
    unsigned long _certificationFlag;
    NSString *_encodeUserName;
    unsigned long _imgStatus;
    DBContactLocal *_dbContactLocal;
    DBContactOther *_dbContactOther;
    DBContactRemark *_dbContactRemark;
    DBContactHeadImage *_dbContactHeadImage;
    DBContactProfile *_dbContactProfile;
    DBContactSocial *_dbContactSocial;
    DBContactChatRoom *_dbContactChatRoom;
    DBContactBrand *_dbContactBrand;
    unsigned long _extFlag;
    NSString *_openIMAppid;
    DBContactOpenIM *_dbContactOpenIM;
}

+ (const struct WCTProperty *)dbContactOpenIM;
+ (const struct WCTProperty *)openIMAppid;
+ (const struct WCTProperty *)extFlag;
+ (const struct WCTProperty *)dbContactBrand;
+ (const struct WCTProperty *)dbContactChatRoom;
+ (const struct WCTProperty *)dbContactSocial;
+ (const struct WCTProperty *)dbContactProfile;
+ (const struct WCTProperty *)dbContactHeadImage;
+ (const struct WCTProperty *)dbContactRemark;
+ (const struct WCTProperty *)dbContactOther;
+ (const struct WCTProperty *)dbContactLocal;
+ (const struct WCTProperty *)encodeUserName;
+ (const struct WCTProperty *)imgStatus;
+ (const struct WCTProperty *)certificationFlag;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)userName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) DBContactOpenIM *dbContactOpenIM; // @synthesize dbContactOpenIM=_dbContactOpenIM;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid=_openIMAppid;
@property(nonatomic) unsigned long extFlag; // @synthesize extFlag=_extFlag;
@property(retain, nonatomic) DBContactBrand *dbContactBrand; // @synthesize dbContactBrand=_dbContactBrand;
@property(retain, nonatomic) DBContactChatRoom *dbContactChatRoom; // @synthesize dbContactChatRoom=_dbContactChatRoom;
@property(retain, nonatomic) DBContactSocial *dbContactSocial; // @synthesize dbContactSocial=_dbContactSocial;
@property(retain, nonatomic) DBContactProfile *dbContactProfile; // @synthesize dbContactProfile=_dbContactProfile;
@property(retain, nonatomic) DBContactHeadImage *dbContactHeadImage; // @synthesize dbContactHeadImage=_dbContactHeadImage;
@property(retain, nonatomic) DBContactRemark *dbContactRemark; // @synthesize dbContactRemark=_dbContactRemark;
@property(retain, nonatomic) DBContactOther *dbContactOther; // @synthesize dbContactOther=_dbContactOther;
@property(retain, nonatomic) DBContactLocal *dbContactLocal; // @synthesize dbContactLocal=_dbContactLocal;
@property(nonatomic) unsigned long imgStatus; // @synthesize imgStatus=_imgStatus;
@property(retain, nonatomic) NSString *encodeUserName; // @synthesize encodeUserName=_encodeUserName;
@property(nonatomic) unsigned long certificationFlag; // @synthesize certificationFlag=_certificationFlag;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

