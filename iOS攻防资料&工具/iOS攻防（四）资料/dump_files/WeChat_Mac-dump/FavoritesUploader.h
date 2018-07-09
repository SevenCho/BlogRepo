//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "MMCGIDelegate.h"

@class FavoritesCDNInfo, FavoritesItem, NSMutableArray, NSString;

@interface FavoritesUploader : NSObject <MMCGIDelegate, ICdnComMgrExt>
{
    FavoritesItem *_favItem;
    NSMutableArray *_favDatalist;
    int _runningState;
    FavoritesCDNInfo *_uploadingInfo;
    unsigned int m_cgiSessionId;
    id <FavoritesUploaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)HandleAddFavItemResp:(id)arg1 Event:(unsigned int)arg2 ret:(BOOL)arg3;
- (void)BroadcastUploadFail:(int)arg1;
- (void)updateFavoritesItemCDNInfo;
- (int)fileTypeWithCDNInfo:(id)arg1;
- (BOOL)isStreamMediaWithCDNInfo:(id)arg1;
- (id)clientIDWithFavoritesItem:(id)arg1;
- (BOOL)allFilesUploaded;
- (id)clientMsgIdWithCDNInfo:(id)arg1;
- (void)tryStartNextData;
- (void)updateCDNInfoCheckFailByCheckItem:(id)arg1;
- (void)updateCDNInfoByUnExistButServerAsyncUploadFavCDNItem:(id)arg1;
- (void)updateCDNInfoByUnExistFavCDNItem:(id)arg1;
- (void)updateCDNInfoByExistFavCDNItem:(id)arg1;
- (void)HandleCheckCDNResp:(id)arg1 Event:(unsigned int)arg2 ret:(BOOL)arg3;
- (void)doCheckCDN;
- (id)getItem;
- (BOOL)stop;
- (void)run;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

