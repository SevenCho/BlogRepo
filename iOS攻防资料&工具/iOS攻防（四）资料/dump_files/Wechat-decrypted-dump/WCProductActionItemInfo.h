//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCProductActionItemInfo : NSObject
{
    BOOL isPopUp;
    NSString *iconUrl;
    NSString *title;
    NSString *tips;
    NSString *content;
    unsigned long actionType;
    NSArray *imageUrlList;
    unsigned long index;
}

@property(nonatomic) unsigned long index; // @synthesize index;
@property(retain, nonatomic) NSArray *imageUrlList; // @synthesize imageUrlList;
@property(nonatomic) unsigned long actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *tips; // @synthesize tips;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(nonatomic) BOOL isPopUp; // @synthesize isPopUp;
- (void).cxx_destruct;

@end

