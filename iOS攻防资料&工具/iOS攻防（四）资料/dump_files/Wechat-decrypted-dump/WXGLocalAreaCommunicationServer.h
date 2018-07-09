//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LocalAreaNetworkServerDelegate.h"
#import "LocalAreaPeerServerDelegate.h"

@class LocalAreaNetworkServer, LocalAreaPeerServer, MMTimer, NSString;

@interface WXGLocalAreaCommunicationServer : NSObject <LocalAreaPeerServerDelegate, LocalAreaNetworkServerDelegate>
{
    LocalAreaPeerServer *m_peerServer;
    LocalAreaNetworkServer *m_networkServer;
    unsigned int m_transferType;
    MMTimer *m_transferSpeedTimer;
    MMTimer *m_cutConnectionTimer;
    BOOL m_isTestSpeedOpen;
    double m_slowCutInterval;
    float m_slowGapSpeed;
    BOOL m_peerDisconnect;
    BOOL m_networkDisconnect;
    id <LocalAreaCommunicationServerDelegate> _delegate;
}

@property(nonatomic) __weak id <LocalAreaCommunicationServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)getServerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getServerReceiveSpeed;
- (float)getServerSendSpeed;
- (void)onPeerDisconnect;
- (void)onPeerConnected;
- (void)onPeerReceiveData:(id)arg1;
- (void)onNetworkDisconnect;
- (void)onNetworkConnected;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (unsigned long)sendPeerTestSpeedPacketResponse;
- (unsigned long)sendNetworkTestSpeedPacketResponse;
- (void)chooseNetworkChannel;
- (void)choosePeerChannel;
- (void)markTestSpeedIsClose;
- (void)markTestSpeedIsOpen;
- (unsigned long)serverSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_stopPeerServer;
- (void)p_stopNetworkServer;
- (void)stopServer;
- (void)startPeerServerWithServerID:(id)arg1 serverHello:(id)arg2 serverOK:(id)arg3;
- (void)initiativeToTerminateServer;
- (void)checkTransferSpeed;
- (void)startNetworkServer:(id *)arg1 port:(unsigned short *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

