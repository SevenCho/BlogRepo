//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface MMBetaDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_inviteTable;
    WCTTable *m_packageTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_beforeAuthPackageFilePath;
- (id)getBeforeAuthPackage;
- (void)saveBeforeAuthPackage:(id)arg1;
- (BOOL)cleanAllPackage;
- (BOOL)updatePackageWithPackage:(id)arg1;
- (id)getPackageByCommitCount:(unsigned long long)arg1;
- (id)getLastPackage;
- (BOOL)addNewPackage:(id)arg1;
- (BOOL)updateInvitationWithInvitation:(id)arg1;
- (id)getInvitationByCommitCount:(unsigned long long)arg1;
- (id)getLastInvitation;
- (BOOL)addNewInvitation:(id)arg1;
- (void)closeDB;
- (void)dealloc;
- (void)initDataBase;
- (id)init;

@end

