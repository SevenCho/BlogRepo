//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayBindInfo : NSObject
{
    unsigned long m_flag;
    NSString *m_cardBankName;
    NSString *m_cardBankType;
    unsigned long m_cardBankTag;
    unsigned long m_cardType;
    NSString *m_cardTypeName;
    NSString *m_cardNumber;
    NSString *m_usrNameInfo;
    NSString *m_userIDType;
    NSString *m_usrIDInfo;
    NSString *m_validDate;
    NSString *m_cvvInfo;
    NSString *m_usrPhoneNumber;
    NSString *m_payPassword;
    NSString *m_nsTenpayBindSerialNo;
    NSString *m_nsQQID;
    NSString *m_nsImportCode;
    NSString *m_nsToken;
    NSString *m_WCLanguage;
    NSString *m_firstName;
    NSString *m_lastName;
    NSString *m_country;
    NSString *m_area;
    NSString *m_city;
    NSString *m_address;
    NSString *m_phoneNumber_Overseas;
    NSString *m_email;
    NSString *m_zipcode;
    NSString *m_retKey;
    NSString *_m_arriveType;
    NSString *_autoDeductBankType;
    NSString *_autoDeductBankSerial;
    NSString *_mobile_area;
}

@property(retain, nonatomic) NSString *mobile_area; // @synthesize mobile_area=_mobile_area;
@property(copy, nonatomic) NSString *autoDeductBankSerial; // @synthesize autoDeductBankSerial=_autoDeductBankSerial;
@property(copy, nonatomic) NSString *autoDeductBankType; // @synthesize autoDeductBankType=_autoDeductBankType;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType=_m_arriveType;
@property(retain, nonatomic) NSString *m_email; // @synthesize m_email;
@property(retain, nonatomic) NSString *m_phoneNumber_Overseas; // @synthesize m_phoneNumber_Overseas;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address;
@property(retain, nonatomic) NSString *m_city; // @synthesize m_city;
@property(retain, nonatomic) NSString *m_zipcode; // @synthesize m_zipcode;
@property(retain, nonatomic) NSString *m_area; // @synthesize m_area;
@property(retain, nonatomic) NSString *m_country; // @synthesize m_country;
@property(retain, nonatomic) NSString *m_lastName; // @synthesize m_lastName;
@property(retain, nonatomic) NSString *m_firstName; // @synthesize m_firstName;
@property(retain, nonatomic) NSString *m_WCLanguage; // @synthesize m_WCLanguage;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsImportCode; // @synthesize m_nsImportCode;
@property(retain, nonatomic) NSString *m_nsQQID; // @synthesize m_nsQQID;
@property(retain, nonatomic) NSString *m_nsTenpayBindSerialNo; // @synthesize m_nsTenpayBindSerialNo;
@property(retain, nonatomic) NSString *m_retKey; // @synthesize m_retKey;
@property(retain, nonatomic) NSString *m_payPassword; // @synthesize m_payPassword;
@property(retain, nonatomic) NSString *m_validDate; // @synthesize m_validDate;
@property(retain, nonatomic) NSString *m_usrNameInfo; // @synthesize m_usrNameInfo;
@property(retain, nonatomic) NSString *m_usrIDInfo; // @synthesize m_usrIDInfo;
@property(retain, nonatomic) NSString *m_userIDType; // @synthesize m_userIDType;
@property(retain, nonatomic) NSString *m_cvvInfo; // @synthesize m_cvvInfo;
@property(retain, nonatomic) NSString *m_usrPhoneNumber; // @synthesize m_usrPhoneNumber;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(nonatomic) unsigned long m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
@property(nonatomic) unsigned long m_cardType; // @synthesize m_cardType;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(nonatomic) unsigned long m_flag; // @synthesize m_flag;
- (void).cxx_destruct;
- (void)dealloc;

@end

