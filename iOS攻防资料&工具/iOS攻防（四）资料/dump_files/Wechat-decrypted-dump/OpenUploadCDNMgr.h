//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "MMAppAttachFileMgrExt.h"
#import "MsgDataDownloadDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CdnTaskInfo, FIFOFileQueue, MsgDataDownloadLogic, NSMutableArray, NSMutableDictionary, NSString;

@interface OpenUploadCDNMgr : MMObject <MsgDataDownloadDelegate, ICdnComMgrExt, PBMessageObserverDelegate, MMAppAttachFileMgrExt>
{
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned long _curEventId;
    CdnTaskInfo *_curTaskInfo;
    id <OpenUploadCDNMgrDelegate> m_delegate;
    NSMutableDictionary *_msgInfoDict;
    NSMutableDictionary *_bigFileUploadRespDict;
    MsgDataDownloadLogic *_msgDownloadLogic;
}

@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(retain, nonatomic) NSMutableDictionary *bigFileUploadRespDict; // @synthesize bigFileUploadRespDict=_bigFileUploadRespDict;
@property(retain, nonatomic) NSMutableDictionary *msgInfoDict; // @synthesize msgInfoDict=_msgInfoDict;
@property(nonatomic) __weak id <OpenUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadFile;
- (void)startUploadAppAttach:(id)arg1 enableHitCheck:(BOOL)arg2;
- (void)startUploadAppAttach:(id)arg1;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(BOOL)arg2 taskInfo:(id)arg3;
- (void)checkIfAppAttachExistInSvr:(id)arg1;
- (void)onCheckBigFileUploadResult:(BOOL)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)checkBigFileUpload:(id)arg1 scene:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (BOOL)CreateCurUploadEvent:(BOOL)arg1 crc32:(unsigned long)arg2 useSafeCdn:(BOOL)arg3;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned long)arg3;
- (void)ClearEventID;
- (void)UploadFail:(long)arg1;
- (void)UploadOk:(long long)arg1 aeskey:(id)arg2;
- (void)CheckQueue;
- (void)InitQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

