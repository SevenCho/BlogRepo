//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportTemplateMsgActionItem : WAReportBaseItem
{
    unsigned int _eventID;
    NSString *_templateID;
    unsigned int _operateTime;
}

@property(nonatomic) unsigned int operateTime; // @synthesize operateTime=_operateTime;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)reportString;

@end

