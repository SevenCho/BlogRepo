//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCAddressNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCAddressNetworkDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCAddressNetworkDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)ImportYiXunAdress:(id)arg1;
- (void)SelectWCAddress:(id)arg1;
- (void)ModifyWCAddress:(id)arg1;
- (void)QueryWCAddress:(id)arg1;
- (void)RemoveWCAddress:(id)arg1;
- (void)AddWCAddress:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnMessageReturnInImportYiXunAddress:(id)arg1 Event:(unsigned long)arg2;
- (void)OnMessageReturnInSelectWCAddress:(id)arg1 Event:(unsigned long)arg2;
- (void)OnMessageReturnInModifyWCAddress:(id)arg1 Event:(unsigned long)arg2;
- (void)OnMessageReturnInRemoveWCAddress:(id)arg1 Event:(unsigned long)arg2;
- (void)OnMessageReturnInQueryWCAddress:(id)arg1 Event:(unsigned long)arg2;
- (void)OnMessageReturnInAddWCAddress:(id)arg1 Event:(unsigned long)arg2;
- (void)dealloc;
- (id)init;

@end

