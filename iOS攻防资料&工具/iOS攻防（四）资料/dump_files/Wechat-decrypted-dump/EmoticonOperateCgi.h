//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface EmoticonOperateCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_opCode;
    BOOL _m_hasStartRequestOnce;
    id <EmoticonOperateCgiDelegate> _m_delegate;
    unsigned long _m_eventId;
    NSMutableArray *_m_md5List;
}

@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List=_m_md5List;
@property(nonatomic) BOOL m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce=_m_hasStartRequestOnce;
@property(nonatomic) unsigned long m_eventId; // @synthesize m_eventId=_m_eventId;
@property(nonatomic) __weak id <EmoticonOperateCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)callOkNeedUploadDelegate:(id)arg1;
- (void)callFailedDelegateForOverLimit;
- (void)callFailedDelegate;
- (void)internalRequest;
- (BOOL)isActive;
- (void)startRequest;
- (id)initWithOpcode:(unsigned int)arg1 md5List:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

