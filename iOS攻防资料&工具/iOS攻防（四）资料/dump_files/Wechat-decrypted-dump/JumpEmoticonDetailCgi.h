//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface JumpEmoticonDetailCgi : MMObject <PBMessageObserverDelegate>
{
    id <IJumpEmoticonDetailCgiDelegate> m_delegate;
    unsigned long m_eventId;
    CDUnknownBlockType m_okBlock;
    CDUnknownBlockType m_failedBlock;
    NSString *m_urlString;
}

+ (id)instanceWithOkBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;
+ (id)instanceWithDelegate:(id)arg1;
@property(retain, nonatomic) NSString *m_urlString; // @synthesize m_urlString;
@property(copy, nonatomic) CDUnknownBlockType m_failedBlock; // @synthesize m_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType m_okBlock; // @synthesize m_okBlock;
@property(nonatomic) unsigned long m_eventId; // @synthesize m_eventId;
@property(nonatomic) __weak id <IJumpEmoticonDetailCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onCgiOkWithPid:(id)arg1;
- (void)onCgiFailed:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)startRequestWithUrlString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

