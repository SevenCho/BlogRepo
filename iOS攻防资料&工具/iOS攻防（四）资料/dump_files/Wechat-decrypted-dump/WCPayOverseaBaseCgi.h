//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCPayOverseaBaseCgi : NSObject <PBMessageObserverDelegate>
{
    id <WCPayOverseaBaseCgiDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WCPayOverseaBaseCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)callOkDelegateWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)startRequestWithCgiId:(unsigned long)arg1 Data:(id)arg2 isNeedNotify:(BOOL)arg3;
- (void)startNotNotifyRequstWithCgiId:(unsigned long)arg1 Data:(id)arg2;
- (void)startRequestWithCgiId:(unsigned long)arg1 Data:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

