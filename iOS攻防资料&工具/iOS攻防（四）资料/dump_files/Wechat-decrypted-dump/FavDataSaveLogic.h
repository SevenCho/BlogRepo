//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FavDataSaveLogic : NSObject <ICdnComMgrExt>
{
    id <FavDataSaveLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicFavDownloading;
    NSMutableArray *m_arrFavToSave;
    BOOL m_bOK;
    BOOL m_bFail;
    BOOL m_bEnd;
}

- (void).cxx_destruct;
- (void)endLogic;
- (void)saveFavData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveOneByOne:(id)arg1;
- (void)checkDownLoadEnd;
- (void)OnCdnDownload:(id)arg1;
- (void)onSave:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

