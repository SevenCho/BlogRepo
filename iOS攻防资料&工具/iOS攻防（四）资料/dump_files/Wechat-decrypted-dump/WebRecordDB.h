//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface WebRecordDB : MMObject
{
    WCTDatabase *_db;
    WCTTable *_webRecordTable;
}

@property(retain, nonatomic) WCTTable *webRecordTable; // @synthesize webRecordTable=_webRecordTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (BOOL)db_tryDeleteOutOfDateLink;
- (BOOL)db_DeleteRecordInfoDataByUrl:(id)arg1;
- (void)deleteRedundent;
- (BOOL)db_InsertOrUpdateRecordInfoData:(id)arg1;
- (id)db_GetRecordInfoDataByUrl:(id)arg1;
- (id)db_GetAllRecordInfoData;
- (unsigned long)db_GetRecordCount;
- (BOOL)db_DeleteAllRecord;
- (void)closeDB;
- (BOOL)initDB;

@end

