//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface WCAdvertiseLogDB : MMObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (BOOL)deleteADLogs:(unsigned long)arg1 toLocalId:(unsigned long)arg2;
- (id)getADLogs:(unsigned long)arg1 toLocalId:(unsigned long)arg2 limit:(int)arg3;
- (BOOL)insertADLogItem:(id)arg1;
- (unsigned long)getMaxLocalId;
- (id)getLogTable;
- (void)closeDB;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1;

@end

