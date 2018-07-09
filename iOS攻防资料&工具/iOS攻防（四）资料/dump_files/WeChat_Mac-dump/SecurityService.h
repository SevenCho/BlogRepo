//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt.h"
#import "MMCGIDelegate.h"
#import "MMService.h"

@class NSString;

@interface SecurityService : MMService <MMCGIDelegate, IMessageExt, MMService>
{
}

- (void)updateKeyInfo:(id)arg1;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgData:(id)arg3;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)doReport;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

