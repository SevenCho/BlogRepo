//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GetRealnameWordingRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindCardSubTitle; // @dynamic bindCardSubTitle;
@property(retain, nonatomic) NSString *bindCardTitle; // @dynamic bindCardTitle;
@property(retain, nonatomic) NSString *bindCardVerifyAlertViewContent; // @dynamic bindCardVerifyAlertViewContent;
@property(retain, nonatomic) NSString *bindCardVerifyAlertViewRightButtonText; // @dynamic bindCardVerifyAlertViewRightButtonText;
@property(retain, nonatomic) NSString *bindCardVerifySubtitle; // @dynamic bindCardVerifySubtitle;
@property(retain, nonatomic) NSString *bindCardVerifyTitle; // @dynamic bindCardVerifyTitle;
@property(retain, nonatomic) NSString *bindIdSubTitle; // @dynamic bindIdSubTitle;
@property(retain, nonatomic) NSString *bindIdTitle; // @dynamic bindIdTitle;
@property(nonatomic) int cacheTime; // @dynamic cacheTime;
@property(retain, nonatomic) NSString *extralWording; // @dynamic extralWording;
@property(retain, nonatomic) NSMutableArray *headerTitles; // @dynamic headerTitles;
@property(nonatomic) BOOL isShowBindCard; // @dynamic isShowBindCard;
@property(nonatomic) BOOL isShowBindCardVerify; // @dynamic isShowBindCardVerify;
@property(nonatomic) BOOL isShowBindCardVerifyAlertView; // @dynamic isShowBindCardVerifyAlertView;
@property(nonatomic) BOOL isShowBindId; // @dynamic isShowBindId;
@property(nonatomic) BOOL needAgreeDuty; // @dynamic needAgreeDuty;
@property(nonatomic) BOOL questionAnswerSwitch; // @dynamic questionAnswerSwitch;
@property(retain, nonatomic) NSString *questionAnswerUrl; // @dynamic questionAnswerUrl;
@property(nonatomic) int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

