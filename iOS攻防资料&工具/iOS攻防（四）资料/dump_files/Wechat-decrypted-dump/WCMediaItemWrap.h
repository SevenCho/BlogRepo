//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataItem, WCMediaItem;

@interface WCMediaItemWrap : NSObject
{
    WCMediaItem *mediaItem;
    WCDataItem *parent;
    unsigned long index;
}

@property(nonatomic) unsigned long index; // @synthesize index;
@property(retain, nonatomic) WCDataItem *parent; // @synthesize parent;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem;
- (void).cxx_destruct;
- (id)init;

@end

