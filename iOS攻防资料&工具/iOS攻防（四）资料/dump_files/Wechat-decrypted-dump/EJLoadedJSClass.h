//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface EJLoadedJSClass : NSObject
{
    struct OpaqueJSClass *jsClass;
    NSDictionary *constantValues;
}

@property(readonly) NSDictionary *constantValues; // @synthesize constantValues;
@property(readonly) struct OpaqueJSClass *jsClass; // @synthesize jsClass;
- (void)dealloc;
- (id)initWithJSClass:(struct OpaqueJSClass *)arg1 constantValues:(id)arg2;

@end

