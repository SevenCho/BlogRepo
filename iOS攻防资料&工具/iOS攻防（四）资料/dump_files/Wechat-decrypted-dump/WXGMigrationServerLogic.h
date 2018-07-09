//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatMigrationHeartBeatMonitorDelegate.h"
#import "LocalAreaCommunicationServerDelegate.h"

@class ChatMigrationHeartBeatMonitor, MMTimer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WXGBackupDataInfo, WXGBackupDataMgr, WXGChatLogProtoHandler, WXGLocalAreaCommunicationServer;

@interface WXGMigrationServerLogic : NSObject <LocalAreaCommunicationServerDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *m_processLogicQueue;
    NSObject<OS_dispatch_queue> *m_getDataLogicQueue;
    BOOL m_bServerStop;
    BOOL m_bStartTransfer;
    int m_chatMigrationType;
    int m_otherSideChatMigrationVersion;
    int m_otherSideSupportExt;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    MMTimer *m_sendHeartBeatTimer;
    double m_heartTimerCheckInterval;
    NSMutableArray *m_sendingArray;
    NSMutableDictionary *m_sessionNickDictionary;
    WXGBackupDataInfo *m_backupDataInfo;
    NSString *m_lastBackupSesionName;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    BOOL m_bFirstTag;
    WXGLocalAreaCommunicationServer *m_networkHandler;
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupDataMgr *m_dataMgr;
    id <WXGMigrationServerLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationServerLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_notifyOnMainThreadCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)p_alertOnMainthread:(unsigned int)arg1;
- (void)p_notifyOnMainthread:(unsigned int)arg1;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeat;
- (void)restSendHeartBeatTimer;
- (void)onServerTransferSendSpeed:(float)arg1 receiveSpeed:(float)arg2;
- (void)onServerDisconnect;
- (void)onServerConnected;
- (void)onServerReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_sendFinishRequest;
- (void)p_processDataInfoAndSendTag:(id)arg1;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)p_sendNextDataPushWithResponseID:(id)arg1;
- (void)p_sendLotOfDataPush;
- (void)p_sendRequestSession;
- (BOOL)sendData:(id)arg1;
- (id)p_resortSessionArray:(id)arg1;
- (void)p_inputDataAndStartDataMgrProduce;
- (BOOL)isSupportQuickMigration;
- (BOOL)isSupportTimeSelect;
- (BOOL)isSupportBackupNewFeature;
- (void)p_processCancelRequestData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (void)p_processHeartBeatRequestData:(id)arg1;
- (void)p_processBackupDataTagResponseData:(id)arg1;
- (void)p_processDataPushResponseData:(id)arg1;
- (void)p_processRequestSessionResponseData:(id)arg1;
- (void)p_processStartRequestData:(id)arg1;
- (void)p_processAuthenticateRequestData:(id)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)stopServerLogic;
- (void)startPeerServer;
- (void)startNetworkServer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

