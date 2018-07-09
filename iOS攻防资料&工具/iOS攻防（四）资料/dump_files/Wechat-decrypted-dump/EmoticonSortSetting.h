//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonSortSetting : NSObject <PBCoding>
{
    NSMutableArray *m_sortPids;
    BOOL m_hasSetCoustomToTop;
    NSMutableArray *m_newSortPids;
}

+ (void)initialize;
@property(nonatomic) BOOL m_hasSetCoustomToTop; // @synthesize m_hasSetCoustomToTop;
@property(retain, nonatomic) NSMutableArray *m_sortPids; // @synthesize m_sortPids;
- (void).cxx_destruct;
- (id)getOldSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)getSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)getSortPackageList:(id)arg1 withTusiji:(BOOL)arg2;
- (id)getLocalCachePath;
- (id)getLocalCacheRootDir;
- (void)saveSetting;
- (void)copyFeildFrom:(id)arg1;
- (BOOL)loadSetting;
- (void)resetSetting;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_newSortPids;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

