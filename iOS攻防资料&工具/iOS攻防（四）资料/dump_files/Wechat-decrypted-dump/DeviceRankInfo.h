//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DeviceRankInfo : NSObject
{
    NSString *_username;
    NSString *_nickname;
    NSString *_rankTitle;
    NSString *_scoreTitle;
    unsigned long _rank;
    unsigned long _score;
    unsigned long _likeCount;
    BOOL _hasLike;
    BOOL _localLike;
}

@property(nonatomic) BOOL localLike; // @synthesize localLike=_localLike;
@property(nonatomic) BOOL hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) unsigned long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *scoreTitle; // @synthesize scoreTitle=_scoreTitle;
@property(retain, nonatomic) NSString *rankTitle; // @synthesize rankTitle=_rankTitle;
@property(nonatomic) unsigned long score; // @synthesize score=_score;
@property(nonatomic) unsigned long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)dealloc;

@end

