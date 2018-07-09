//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, RACSignal;

@interface RACCommand : NSObject
{
    NSMutableArray *_activeExecutionSignals;
    unsigned int _allowsConcurrentExecution;
    RACSignal *_executionSignals;
    RACSignal *_executing;
    RACSignal *_enabled;
    RACSignal *_errors;
    RACSignal *_immediateEnabled;
    CDUnknownBlockType _signalBlock;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType signalBlock; // @synthesize signalBlock=_signalBlock;
@property(readonly, nonatomic) RACSignal *immediateEnabled; // @synthesize immediateEnabled=_immediateEnabled;
@property(readonly, nonatomic) RACSignal *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) RACSignal *enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) RACSignal *executing; // @synthesize executing=_executing;
@property(readonly, nonatomic) RACSignal *executionSignals; // @synthesize executionSignals=_executionSignals;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)initWithEnabled:(id)arg1 signalBlock:(CDUnknownBlockType)arg2;
- (id)initWithSignalBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeActiveExecutionSignal:(id)arg1;
- (void)addActiveExecutionSignal:(id)arg1;
@property(readonly, copy) NSArray *activeExecutionSignals;
@property BOOL allowsConcurrentExecution;

@end

