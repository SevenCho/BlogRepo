//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface JSEvent : NSObject
{
    NSMutableDictionary *_m_params;
    NSString *_m_callbackID;
    NSString *_m_funcName;
}

@property(copy, nonatomic) NSString *m_funcName; // @synthesize m_funcName=_m_funcName;
@property(copy, nonatomic) NSString *m_callbackID; // @synthesize m_callbackID=_m_callbackID;
@property(retain, nonatomic) NSMutableDictionary *m_params; // @synthesize m_params=_m_params;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

