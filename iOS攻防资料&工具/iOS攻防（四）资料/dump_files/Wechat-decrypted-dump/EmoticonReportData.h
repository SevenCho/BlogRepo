//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EmoticonReportData : MMObject
{
}

+ (void)ReportSendGifWithDatalength:(unsigned int)arg1 md5:(id)arg2 scene:(unsigned int)arg3;
+ (void)ReportSelectGifFailedWithDatalength:(unsigned int)arg1 scene:(unsigned int)arg2;
+ (void)ReportEmoticonAction:(unsigned int)arg1 newScene:(int)arg2 searchEmotWrap:(id)arg3;
+ (void)ReportEmoticonAction:(unsigned int)arg1 scene:(unsigned int)arg2 messageWrap:(id)arg3;
+ (void)ReportEmoticonDownloadFromQrcode;
+ (void)ReportEmoticonDownloadFromNodeView;
+ (void)ReportEmoticonDownloadFromSns;
+ (void)ReportEmoticonDownloadFromPreview;
+ (void)ReportEmoticonBoardShowClick;

@end

