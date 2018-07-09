//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class ContactTagCacheMgr, NSMutableDictionary, NSString;

@interface ContactTagMgr : MMService <MMService, MMKernelExt, IContactMgrExt, PBMessageObserverDelegate>
{
    BOOL isCompleteLoadCache;
    BOOL isManulAuthOK;
    NSMutableDictionary *_dicNameToId;
    NSMutableDictionary *_dicIdToName;
    NSMutableDictionary *_dicOperateCache;
    ContactTagCacheMgr *m_CacheMgr;
    unsigned int lastTimeGetAllLabelsFromServer;
}

+ (id)GetPathOfContactLabelList;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnSetLabels:(id)arg1 Event:(unsigned long)arg2;
- (void)OnUpdateLabelName:(id)arg1 Event:(unsigned long)arg2;
- (void)OnDeleteLabel:(id)arg1 Event:(unsigned long)arg2;
- (void)OnAddLabel:(id)arg1 Event:(unsigned long)arg2;
- (void)OnGetAllLabels:(id)arg1 Event:(unsigned long)arg2;
- (unsigned long)updateLabelName:(id)arg1 newName:(id)arg2;
- (unsigned long)setLabelsToContact:(id)arg1;
- (unsigned long)deleteLabel:(id)arg1;
- (unsigned long)addLabel:(id)arg1;
- (id)getAllLabelsFromServer;
- (id)getAllLabelsFromLocal;
- (id)getAllLabelName;
- (BOOL)isAlreadyExistTagName:(id)arg1;
- (id)searchLabel;
- (BOOL)searchLabel:(id)arg1 forContact:(id)arg2;
- (id)getContactsForTagName:(id)arg1;
- (id)getDicWithUserNameForAllTag;
- (id)getContactsForLabel:(id)arg1;
- (id)getLabelsNameForStrangerWithTagIDList:(id)arg1;
- (id)getLabelsNameForContact:(id)arg1;
- (id)getLabelsForContact:(id)arg1;
- (id)arrIDListToNameListInternal:(id)arg1;
- (id)GetDicOfUserNameToTagNamesWithContacts:(id)arg1;
- (id)getDicOfUserNameAndTagNames:(id)arg1;
- (id)arrIdListToTagNames:(id)arg1;
- (id)arrIdListToFormatString:(id)arg1;
- (id)arrLabelNameToIdFormatString:(id)arg1;
- (id)IdToLabelName:(unsigned int)arg1;
- (unsigned int)LabelNameToId:(id)arg1;
- (void)BuildCacheDataFromContacts;
- (void)shouldGetAllLabelsFromServer:(id)arg1;
- (void)UpdateCacheMgrWithUserNameAndIDList:(id)arg1;
- (void)ClearCacheDataWithNamePair:(id)arg1;
- (void)ClearCacheDataWithNames:(id)arg1;
- (void)UpdateCacheData:(unsigned int)arg1 LabelName:(id)arg2;
- (void)SaveCacheDataToFile;
- (void)CleanCurrentTagNameAndIdCache;
- (id)GetContactLabelItemsFromFile;
- (void)BuildCacheDataFromFile;
- (id)getContactTagIDListToNameList:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onManulLoginOK;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

