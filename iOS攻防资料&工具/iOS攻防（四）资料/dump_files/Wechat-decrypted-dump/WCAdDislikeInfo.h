//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, WCMultiLanguageItem;

@interface WCAdDislikeInfo : NSObject <NSCoding>
{
    BOOL _forbidClick;
    NSArray *_reasonList;
    WCMultiLanguageItem *_title;
}

@property(nonatomic) BOOL forbidClick; // @synthesize forbidClick=_forbidClick;
@property(retain, nonatomic) WCMultiLanguageItem *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *reasonList; // @synthesize reasonList=_reasonList;
- (void).cxx_destruct;
- (id)validReasonList;
- (int)validReasonCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

