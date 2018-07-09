//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CertInfoMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_dicCertInfo;
    BOOL m_bUpdating;
    unsigned long m_uiUpdateCount;
    NSDate *m_tLastUpdate;
}

+ (id)GetPathOfIcon:(unsigned long)arg1;
@property(retain, nonatomic) NSDate *m_tLastUpdate; // @synthesize m_tLastUpdate;
@property(retain, nonatomic) NSMutableDictionary *m_dicCertInfo; // @synthesize m_dicCertInfo;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)UpdateCertInfo:(unsigned long)arg1 Version:(unsigned long)arg2 Time:(unsigned long)arg3 Desc:(id)arg4 Icon:(id)arg5 HDIcon:(id)arg6;
- (void)SaveIcon:(id)arg1 Data:(id)arg2;
- (id)GetCertInfoByKey:(unsigned long)arg1 Update:(BOOL)arg2;
- (unsigned long)GetBitSet:(unsigned long)arg1;
- (id)GetCertIconByKey:(unsigned long)arg1;
- (void)CreateUpdateEvent;
- (unsigned long)GetCertInfoVersion;
- (void)UpdateInfoTime;
- (void)CheckUpdate;
- (void)SaveCertInfo;
- (void)LoadCertInfo;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

