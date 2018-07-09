//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt.h"
#import "MMCDNDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMMessageVideoService : MMService <MMCDNDownloadMgrExt, IMessageExt, MMService>
{
    NSMutableDictionary *_uploadingMessageSet;
    NSMutableDictionary *_downloadingMessageSet;
}

+ (void)lazyRegisterExtension;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *downloadingMessageSet; // @synthesize downloadingMessageSet=_downloadingMessageSet;
@property(retain, nonatomic) NSMutableDictionary *uploadingMessageSet; // @synthesize uploadingMessageSet=_uploadingMessageSet;
- (void).cxx_destruct;
- (id)getUploadingMessageForUniqueID:(id)arg1;
- (id)getDownloadingMessageForUniqueID:(id)arg1;
- (void)onUpdateVideoStatus:(id)arg1 msgData:(id)arg2;
- (void)cdnDownloadMgrDidCancelledDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDidFinishedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3 type:(int)arg4 tryShow:(BOOL)arg5;
- (void)changeMessage:(id)arg1 downloadFileStatus:(unsigned int)arg2;
- (void)cancelUploadVideoWithMessage:(id)arg1;
- (void)cancelDownloadVideoWithMessage:(id)arg1;
- (void)downloadVideoThumbWithMessage:(id)arg1;
- (BOOL)downloadVideoWithMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

