//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KSCrashDoctorParam : NSObject
{
    BOOL _isInstance;
    NSString *_className;
    NSString *_previousClassName;
    unsigned long _address;
    NSString *_value;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long address; // @synthesize address=_address;
@property(nonatomic) BOOL isInstance; // @synthesize isInstance=_isInstance;
@property(retain, nonatomic) NSString *previousClassName; // @synthesize previousClassName=_previousClassName;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;

@end

