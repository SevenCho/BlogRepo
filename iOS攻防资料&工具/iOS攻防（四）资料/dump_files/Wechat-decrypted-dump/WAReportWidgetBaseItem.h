//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportWidgetBaseItem : WAReportBaseItem
{
    unsigned int _widgetType;
    NSString *_requestKey;
}

+ (id)itemWithAppId:(id)arg1 version:(int)arg2 state:(unsigned int)arg3 widgetType:(unsigned int)arg4 requestKey:(id)arg5;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(nonatomic) unsigned int widgetType; // @synthesize widgetType=_widgetType;
- (void).cxx_destruct;
- (void)makeSafeString;

@end

