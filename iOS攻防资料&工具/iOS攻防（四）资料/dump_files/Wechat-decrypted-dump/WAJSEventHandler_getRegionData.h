//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCAddressLogicMgrExt.h"

@class NSString;

@interface WAJSEventHandler_getRegionData : WAJSEventHandler_BaseEvent <WCAddressLogicMgrExt>
{
}

- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

