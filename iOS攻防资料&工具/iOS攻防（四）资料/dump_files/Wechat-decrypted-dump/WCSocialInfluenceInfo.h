//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCSocialInfluenceInfo : NSObject <NSCoding>
{
    NSString *layerId;
    NSString *expId;
    int maxLikeCount;
    int maxCommentCount;
}

@property(nonatomic) int maxCommentCount; // @synthesize maxCommentCount;
@property(nonatomic) int maxLikeCount; // @synthesize maxLikeCount;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

