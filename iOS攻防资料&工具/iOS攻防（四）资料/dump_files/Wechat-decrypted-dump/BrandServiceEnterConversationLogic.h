//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class CContact;

@interface BrandServiceEnterConversationLogic : MMObject <PBMessageObserverDelegate>
{
    CContact *m_contact;
}

@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)startReportExitConversationForContact;
- (id)getClickCommandMsgReportFromLastMsg:(id)arg1;
- (void)startReportEnterConversationForContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (id)init;
- (void)dealloc;

@end

