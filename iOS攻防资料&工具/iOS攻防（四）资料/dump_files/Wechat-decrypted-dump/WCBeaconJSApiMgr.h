//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CBCentralManagerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CBCentralManager, CLLocationManager, MMUIViewController<WXCustomWebViewControllerProtocol>, NSMutableArray, NSMutableDictionary, NSString;

@interface WCBeaconJSApiMgr : MMService <MMService, PBMessageObserverDelegate, CBCentralManagerDelegate, CLLocationManagerDelegate>
{
    MMUIViewController<WXCustomWebViewControllerProtocol> *m_currentWebViewController;
    NSString *m_ticket;
    CBCentralManager *m_bleMgr;
    CLLocationManager *m_locationMgr;
    NSMutableArray *m_aryUUID;
    NSMutableDictionary *m_canRegionDic;
    NSMutableArray *m_hadGetBeacons;
    NSMutableArray *m_getBeaconsInfoWatingQueue;
    NSMutableArray *m_getBeaconsInfoRunningQueue;
    unsigned int m_verifyReqResult;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)reportUsageForRange;
- (void)handleVerifyBeaconJSPermissionResponse:(id)arg1;
- (void)sendVerifyBeaconJSPermissionRequest;
- (void)handleGetBeaconsInGroupResponse:(id)arg1;
- (void)checkGetBeaconsInfoWaitingQueue;
- (void)addGetBeaconsInfoQueue:(id)arg1;
- (BOOL)hadRequested:(id)arg1;
- (void)notifyInRangeBeacons:(id)arg1;
- (id)getRangeMajorKeyWithGroup:(id)arg1;
- (id)getRangeMajorKeyWithBeacon:(id)arg1;
- (void)notifyStartMonitoringFailByRangeFailedWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailByBLEPowerOffWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailWithErrorMsg:(id)arg1;
- (void)detectBluetoothState;
- (void)startRanging:(id)arg1;
- (void)finishCauseOf:(unsigned int)arg1;
- (void)stopMonitoring;
- (unsigned int)startMonitorBeacon:(id)arg1 ticket:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

