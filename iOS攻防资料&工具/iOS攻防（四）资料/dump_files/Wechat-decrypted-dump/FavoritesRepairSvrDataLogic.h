//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "IMsgExt.h"
#import "PBMessageObserverDelegate.h"

@class FavoritesItemDB, NSMutableArray, NSString;

@interface FavoritesRepairSvrDataLogic : MMObject <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_resendFavItems;
    BOOL _isCurrentUploading;
    NSMutableArray *_resendingFavItems;
}

- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)handleModFavItem:(id)arg1 Event:(unsigned long)arg2;
- (void)HandleCheckFavItemResp:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)updateItemXml:(id)arg1 withResendItem:(id)arg2;
- (void)startCheckResendFavItem:(unsigned long)arg1 resendFavItem:(id)arg2;
- (BOOL)checkAllowUpdateItem:(unsigned long)arg1;
- (void)tryUploadAndSendFavItem;
- (void)checkResendFavItem:(id)arg1;
- (void)processResendFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processUploadFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)doCheckFavItem:(id)arg1;
- (void)saveResendFavItem;
- (void)loadResendFavItem;
- (id)resendFavItemSaveFilePath;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

