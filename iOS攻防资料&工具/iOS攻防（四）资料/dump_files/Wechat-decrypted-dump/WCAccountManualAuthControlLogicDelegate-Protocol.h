//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ProtobufCGIWrap, UnifyAuthResponse;

@protocol WCAccountManualAuthControlLogicDelegate <NSObject>
- (BOOL)onManualAuthControlLogicError:(ProtobufCGIWrap *)arg1;
- (void)onManualAuthControlLogicStop:(unsigned int)arg1 response:(UnifyAuthResponse *)arg2;
@end

