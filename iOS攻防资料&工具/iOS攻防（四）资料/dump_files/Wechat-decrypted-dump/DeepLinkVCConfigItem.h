//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DeepLinkVCConfigItem : NSObject
{
    NSString *linkName;
    unsigned int actionType;
    NSString *actionName;
}

+ (id)genItemWithLinkName:(id)arg1 actionType:(unsigned int)arg2 actionName:(id)arg3;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName;
- (void).cxx_destruct;
- (id)init;

@end

