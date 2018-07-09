//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCStreamVideoInfo : NSObject <NSCoding>
{
    NSString *streamVideoUrl;
    NSString *streamVideoTitle;
    NSString *streamVideoWording;
    NSString *streamVideoWebUrl;
    unsigned long uiStreamVideoTime;
    NSString *streamVideoThumbUrl;
    NSString *streamVideoPublishId;
    NSString *streamVideoAdUxInfo;
}

@property(retain, nonatomic) NSString *streamVideoAdUxInfo; // @synthesize streamVideoAdUxInfo;
@property(retain, nonatomic) NSString *streamVideoPublishId; // @synthesize streamVideoPublishId;
@property(retain, nonatomic) NSString *streamVideoThumbUrl; // @synthesize streamVideoThumbUrl;
@property(nonatomic) unsigned long uiStreamVideoTime; // @synthesize uiStreamVideoTime;
@property(retain, nonatomic) NSString *streamVideoWebUrl; // @synthesize streamVideoWebUrl;
@property(retain, nonatomic) NSString *streamVideoWording; // @synthesize streamVideoWording;
@property(retain, nonatomic) NSString *streamVideoTitle; // @synthesize streamVideoTitle;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

