//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCPayCreditPayQueryQuestionResponseStruct : NSObject
{
    unsigned long m_uiQuestionNum;
    NSString *m_nsSessionKey;
    NSArray *m_arrQuestion;
}

@property(retain, nonatomic) NSArray *m_arrQuestion; // @synthesize m_arrQuestion;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;
@property(nonatomic) unsigned long m_uiQuestionNum; // @synthesize m_uiQuestionNum;
- (void).cxx_destruct;
- (void)dealloc;

@end

