//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface WCPayDigitalCertMgr : MMService <MMService>
{
    NSString *_m_digitalCertNo;
}

@property(retain, nonatomic) NSString *m_digitalCertNo; // @synthesize m_digitalCertNo=_m_digitalCertNo;
- (void).cxx_destruct;
- (void)clearDigitalCertOnControl:(id)arg1;
- (void)updateWithTenPayResponseDic:(id)arg1;
- (id)updateCurrentDeviceCertNoWithInfo:(id)arg1 CertControl:(id)arg2;
- (void)clearDigitalCertNo;
- (void)updateDigitalCertNo:(id)arg1;
- (id)getDigitalCertNo;
- (void)loadDigitalCertFromDisk;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

