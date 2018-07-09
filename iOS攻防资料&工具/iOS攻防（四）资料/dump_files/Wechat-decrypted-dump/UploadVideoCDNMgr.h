//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "MsgDataDownloadDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CdnTaskInfo, MsgDataDownloadLogic, NSMutableArray, NSString;

@interface UploadVideoCDNMgr : NSObject <MsgDataDownloadDelegate, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *_arrUploadTask;
    CdnTaskInfo *_curTaskInfo;
    unsigned long _curUploadEventID;
    MsgDataDownloadLogic *_msgDownloadLogic;
}

+ (unsigned long)CreateUploadEvent:(id)arg1;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
- (void).cxx_destruct;
- (void)convertHevcVideo;
- (void)OnCompressVideoFinished:(id)arg1 success:(BOOL)arg2;
- (void)compressCurInfo;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadVideo;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)NotifyFromMainCtrl:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (BOOL)CreateCurUploadEvent:(BOOL)arg1 newMd5:(id)arg2 crc32:(unsigned long)arg3 useSafeCdn:(BOOL)arg4;
- (void)Stop;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1;
- (void)startCdnUpload;
- (void)CheckQueue;
- (BOOL)IsCurTaskByID:(unsigned long)arg1 From:(id)arg2 To:(id)arg3;
- (void)DelTaskInUploadQueue:(id)arg1;
- (BOOL)IsMsgInUploadQueue:(id)arg1;
- (void)UploadFail:(long)arg1;
- (void)UploadOk:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

