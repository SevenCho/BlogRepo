//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WAContactMgrExtension.h"

@class MMTimer, NSString;

@interface WAContactMainThreadGetter : NSObject <WAContactMgrExtension>
{
    CDUnknownBlockType _handler;
    MMTimer *_timer;
    NSString *_updateKey;
    unsigned int _getType;
}

- (void).cxx_destruct;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned int)arg2 errMsg:(id)arg3;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onUpdateContactTimeout:(id)arg1;
- (void)getWeAppContact:(id)arg1 getType:(unsigned int)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned long)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

