//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface StoreEmotionRewardGetRewardCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce;
    NSString *m_pid;
    unsigned long m_eventID;
    id <StoreEmotionRewardGetRewardCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionRewardGetRewardCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callFailedDelegateForUnrewardable;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)startRequestWithNeedAllData:(BOOL)arg1;
- (id)initWithPid:(id)arg1;

@end

