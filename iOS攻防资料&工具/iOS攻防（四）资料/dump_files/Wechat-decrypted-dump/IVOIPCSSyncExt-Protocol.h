//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, VoipMultiRelayData;

@protocol IVOIPCSSyncExt

@optional
- (void)OnCSVoipNotify:(NSData *)arg1;
- (void)OnGotRemoteControlStatus:(unsigned long)arg1;
- (void)OnGotRemoteRelayData:(NSData *)arg1;
- (void)OnGotRemoteConnectData:(VoipMultiRelayData *)arg1;
- (void)OnGotRemoteStatus:(unsigned long)arg1;
- (void)OnSyncError:(int)arg1;
@end

