//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CEmoticonDB : NSObject
{
    CMMDB *m_oMMDB;
}

@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
- (void).cxx_destruct;
- (unsigned long)GetCountOfEmoticonDownload;
- (id)msgWrapsInEmoticonDownloadTableAfterCreateTime:(unsigned long)arg1;
- (void)ResetEmoticonUpload;
- (unsigned long)GetCountOfEmoticonUpload:(id)arg1;
- (unsigned long)GetCountOfEmoticonUpload;
- (BOOL)DelRowInEmoticonUpload:(id)arg1 LocalID:(unsigned long)arg2;
- (id)GetFirstEmoticonUploadInfoFromTable;
- (BOOL)InsertMessageInEmoticonUpload:(id)arg1;
- (BOOL)IsInEmoticonUploadTable:(id)arg1 LocalID:(unsigned long)arg2;
- (void)ResetEmoticon;
- (id)lastestSentMd5InMd5list:(id)arg1;
- (BOOL)IsEmoticonExistInCustomListByMd5:(id)arg1;
- (BOOL)IsEmoticonExist:(id)arg1;
- (BOOL)DeleteEmoticonByMD5:(id)arg1;
- (id)deleteEmoticonByPid:(id)arg1;
- (id)getRecentUsedEmoticonList:(unsigned long)arg1;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)getSelfEmoticonList;
- (BOOL)updateEmoticon:(id)arg1 extFlag:(unsigned long)arg2 needOverWrite:(BOOL)arg3;
- (BOOL)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (BOOL)updateEmoticon:(id)arg1 usedTime:(unsigned long)arg2;
- (BOOL)UpdateEmoticon:(id)arg1 ExtInfo:(id)arg2;
- (BOOL)updateEmoticon:(id)arg1 productId:(id)arg2 extInfo:(id)arg3 extFlag:(id)arg4 indexInPack:(id)arg5;
- (BOOL)insertEmoticonWithMD5:(id)arg1 type:(unsigned long)arg2 productId:(id)arg3 extInfo:(id)arg4 extFlag:(unsigned long)arg5 indexInPack:(id)arg6;
- (BOOL)AddEmoticon:(id)arg1 Type:(unsigned long)arg2 ProductId:(id)arg3 ExtInfo:(id)arg4 ExtFlag:(unsigned long)arg5 IndexInPack:(id)arg6;
- (BOOL)AddEmoticon:(id)arg1 Type:(unsigned long)arg2;
- (id)GetEmoticonList;
- (void)convertEmotcion:(id)arg1 fromDBObject:(id)arg2 isFullField:(BOOL)arg3;
- (void)fillEmoticonListQueryPropery:(struct WCTPropertyList *)arg1 isFullField:(BOOL)arg2;
- (void)InitDB:(id)arg1;
- (id)init;

@end

