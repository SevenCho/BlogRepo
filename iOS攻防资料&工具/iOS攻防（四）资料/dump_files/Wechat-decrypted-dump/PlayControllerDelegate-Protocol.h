//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol PlayControllerDelegate <NSObject>
- (UIViewController *)getViewController;

@optional
- (void)onEndPlay:(unsigned long)arg1 isForceStop:(BOOL)arg2;
@end

