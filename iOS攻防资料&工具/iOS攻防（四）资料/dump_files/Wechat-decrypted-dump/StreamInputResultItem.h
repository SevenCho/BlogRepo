//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface StreamInputResultItem : MMObject
{
    NSString *_voiceId;
    NSString *_text;
    unsigned long _m_uiSequence;
    unsigned long _m_uiEndFlag;
    unsigned long long _m_uiCreateTime;
}

@property(nonatomic) unsigned long m_uiEndFlag; // @synthesize m_uiEndFlag=_m_uiEndFlag;
@property(nonatomic) unsigned long m_uiSequence; // @synthesize m_uiSequence=_m_uiSequence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(copy, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
- (void).cxx_destruct;
- (void)getValueFrom:(id)arg1;
- (BOOL)lessThanOrEqual:(id)arg1;

@end

