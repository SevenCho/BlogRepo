//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MMPatternLockMgrExt <NSObject>

@optional
- (void)onPatternLockSvrCheckStatusBack:(unsigned int)arg1;
- (void)onPatternLockSvrCheckStatusFail;
- (void)onClosePatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onModifyPatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onVerifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onVerifyPatternLockPwdError;
- (void)onSetupNewPatternLockPwdFail;
- (void)onSetupNewPatternLockPwdSuccess;
@end

