//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WXGSpeedFilter : NSObject
{
    NSMutableArray *m_speedCycleArray;
    unsigned int m_tailPoint;
    unsigned int m_windowSize;
    float m_currentSpeed;
}

- (void).cxx_destruct;
- (float)getSpeed;
- (void)addSpeed:(float)arg1;
- (id)initWithWindowSize:(unsigned int)arg1;
- (id)init;

@end

