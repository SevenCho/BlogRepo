//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MMSafeModeReport : NSObject
{
    NSString *m_path;
    NSMutableArray *m_reportList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)doReport;
- (void)reportWithID:(int)arg1 ext:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4;
- (void)reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (id)init;

@end

