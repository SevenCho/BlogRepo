//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WAWorkFlowImplement <NSObject>
- (void)cancel;
- (void)runWithContext:(id)arg1 completeHandler:(void (^)(BOOL, NSString *))arg2;
- (void)addStepSubWorkFlow:(id <WAWorkFlowImplement>)arg1;
- (void)addStepName:(NSString *)arg1 block:(void (^)(id, void (^)(BOOL, NSString *)))arg2;
- (NSString *)workFlowName;
- (id)initWithName:(NSString *)arg1;
@end

