//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMDiskUsageStatus : NSObject <PBCoding>
{
    unsigned int m_lastStartScanTime;
    unsigned int m_lastReportTime;
}

+ (id)LoadDataFromFile:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int m_lastReportTime; // @synthesize m_lastReportTime;
@property(nonatomic) unsigned int m_lastStartScanTime; // @synthesize m_lastStartScanTime;
@property(readonly, copy) NSString *description;
- (BOOL)SaveDataToPath:(id)arg1;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

