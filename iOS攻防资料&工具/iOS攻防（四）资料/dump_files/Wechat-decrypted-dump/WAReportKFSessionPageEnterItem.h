//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportKFSessionPageEnterItem : WAReportBaseItem
{
    unsigned int _enterScene;
    int _unreadcount;
    NSString *_sceneID;
    unsigned int _entryTime;
}

@property(nonatomic) unsigned int entryTime; // @synthesize entryTime=_entryTime;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) int unreadcount; // @synthesize unreadcount=_unreadcount;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
- (void).cxx_destruct;
- (id)reportString;

@end

