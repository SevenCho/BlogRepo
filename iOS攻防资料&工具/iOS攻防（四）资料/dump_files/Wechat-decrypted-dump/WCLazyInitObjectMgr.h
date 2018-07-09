//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer, NSMutableArray;

@interface WCLazyInitObjectMgr : NSObject
{
    NSMutableArray *_lazyInitArray;
    MMTimer *_refreshTimer;
    double _currentTimeDis;
}

+ (id)sharedInstance;
@property(nonatomic) double currentTimeDis; // @synthesize currentTimeDis=_currentTimeDis;
@property(retain, nonatomic) MMTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSMutableArray *lazyInitArray; // @synthesize lazyInitArray=_lazyInitArray;
- (void).cxx_destruct;
- (void)addLazyInitObject:(id)arg1;
- (void)triggerObjectToInit:(id)arg1;
- (void)destroyAllEvent;
- (void)timeToInit;
- (id)init;

@end

