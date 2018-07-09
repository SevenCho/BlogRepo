//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "INewSyncExt.h"
#import "MMService.h"

@class CBottleContactDB, NSMutableDictionary, NSString;

@interface CBottleContactMgr : MMService <INewSyncExt, MMService>
{
    CBottleContactDB *m_oDB;
    NSMutableDictionary *m_dicContacts;
    BOOL m_bDataNeedReload;
}

- (void).cxx_destruct;
- (void)onNewSyncBottleContactEnd;
- (void)onNewSyncBottleContact:(id)arg1;
- (int)GetBottleContactCount;
- (void)saveImageStatus:(id)arg1 ImgStatus:(id)arg2;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (BOOL)syncAllBottleContact;
- (BOOL)RemoveContactList:(id)arg1;
- (BOOL)addContact:(id)arg1;
- (id)getContactByName:(id)arg1;
- (id)getSelfContact;
- (id)getAllContact;
- (void)initDB:(id)arg1 lock:(id)arg2;
- (BOOL)autoReload;
- (BOOL)setHDHeadUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)onSyncBottleContact:(id)arg1;
- (void)internalDeleteContact:(id)arg1;
- (void)internalModifyContact:(id)arg1;
- (void)internalAddContact:(id)arg1;
- (void)removeListen;
- (void)initListen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

