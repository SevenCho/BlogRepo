//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, WCPayCredInfo, WCPayLqbShowInfo, WCPayLqtCellInfo;

@interface WCPayUserInfo : NSObject <NSCoding>
{
    int m_regFlag;
    NSString *m_usrName;
    WCPayCredInfo *m_usrCredInfo;
    NSString *m_usrIDNumber;
    NSString *m_usrPhoneNumber;
    unsigned long m_cardUserFlag;
    BOOL m_bHadCard;
    NSString *m_nsFacingReceiverQRCode;
    BOOL m_bCanUseNewCardToResetPwd;
    NSString *m_nsResetPwdNeedToOpenUrl;
    BOOL _m_bTouchIDOpen;
    BOOL _m_bTouchIDEnable;
    NSString *m_nsTouchIDForbidword;
    int paymenu_use_new;
    NSString *_m_lctWording;
    NSString *_m_lctUrl;
    unsigned long _m_lqtState;
    WCPayLqbShowInfo *_lqbShowInfo;
    WCPayLqtCellInfo *_lqtCellInfo;
}

@property(retain, nonatomic) WCPayLqtCellInfo *lqtCellInfo; // @synthesize lqtCellInfo=_lqtCellInfo;
@property(retain, nonatomic) WCPayLqbShowInfo *lqbShowInfo; // @synthesize lqbShowInfo=_lqbShowInfo;
@property(nonatomic) unsigned long m_lqtState; // @synthesize m_lqtState=_m_lqtState;
@property(retain, nonatomic) NSString *m_lctUrl; // @synthesize m_lctUrl=_m_lctUrl;
@property(retain, nonatomic) NSString *m_lctWording; // @synthesize m_lctWording=_m_lctWording;
@property(nonatomic) BOOL m_bTouchIDEnable; // @synthesize m_bTouchIDEnable=_m_bTouchIDEnable;
@property(nonatomic) BOOL m_bTouchIDOpen; // @synthesize m_bTouchIDOpen=_m_bTouchIDOpen;
@property(nonatomic) int paymenu_use_new; // @synthesize paymenu_use_new;
@property(retain, nonatomic) NSString *m_nsTouchIDForbidword; // @synthesize m_nsTouchIDForbidword;
@property(retain, nonatomic) NSString *m_nsResetPwdNeedToOpenUrl; // @synthesize m_nsResetPwdNeedToOpenUrl;
@property(nonatomic) BOOL m_bCanUseNewCardToResetPwd; // @synthesize m_bCanUseNewCardToResetPwd;
@property(retain, nonatomic) NSString *m_nsFacingReceiverQRCode; // @synthesize m_nsFacingReceiverQRCode;
@property(nonatomic) BOOL m_bHadCard; // @synthesize m_bHadCard;
@property(nonatomic) unsigned long m_cardUserFlag; // @synthesize m_cardUserFlag;
@property(retain, nonatomic) NSString *m_usrPhoneNumber; // @synthesize m_usrPhoneNumber;
@property(retain, nonatomic) NSString *m_usrName; // @synthesize m_usrName;
@property(retain, nonatomic) NSString *m_usrIDNumber; // @synthesize m_usrIDNumber;
@property(retain, nonatomic) WCPayCredInfo *m_usrCredInfo; // @synthesize m_usrCredInfo;
@property(nonatomic) int m_regFlag; // @synthesize m_regFlag;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

