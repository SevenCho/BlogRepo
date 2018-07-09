//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RecordNodeDataSource.h"

@class CMessageWrap, FavoritesItemDataField, NSArray, NSString;

@interface MsgRecordDataWrap : NSObject <RecordNodeDataSource>
{
    CMessageWrap *m_parent;
    FavoritesItemDataField *m_dataItem;
    unsigned long m_index;
    NSArray *m_dataList;
    NSString *m_desc;
}

@property(nonatomic) unsigned long m_index; // @synthesize m_index;
@property(retain, nonatomic) FavoritesItemDataField *m_dataItem; // @synthesize m_dataItem;
@property(retain, nonatomic) CMessageWrap *m_parent; // @synthesize m_parent;
- (void).cxx_destruct;
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (BOOL)StartDownload;
- (id)GetSightPath;
- (id)GetFilePath;
- (id)GetFileName;
- (id)GetFileExt;
- (id)GetMusicInfo;
- (BOOL)IsUrlMusicThumbPath:(id *)arg1;
- (id)GetWebPageDomin;
- (BOOL)IsUrlWebPageThumbPath:(id *)arg1;
- (unsigned long)GetVideoDuration;
- (id)GetVideoTitle;
- (BOOL)IsUrlVideoThumbPath:(id *)arg1;
- (unsigned long)GetVoiceFormat;
- (id)GetAudioInfo;
- (id)GetImgArray;
- (unsigned long)GetImgCount;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned long)GetImageIndex;
- (id)GetImageSourcePath;
- (id)GetImagePath;
- (id)GetImageLocalID;
- (unsigned long)GetParentLocalID;
- (BOOL)CanbeForwardToWC;
- (BOOL)CanbeForwardToChat;
- (unsigned long)GetDataIndex;
- (id)GetDataItem;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)GetParent;
- (id)GetDataSrcName;
- (float)GetRecordNodeContentHeight;
- (id)Convert2VideoInfo;
- (id)Convert2AppFileMsg;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 dataList:(id)arg3 desc:(id)arg4 Index:(unsigned long)arg5;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

