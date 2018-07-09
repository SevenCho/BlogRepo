//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCXmlParser : NSObject
{
}

+ (BOOL)SetABTestInfo:(id)arg1 ABTestItem:(id)arg2;
+ (BOOL)ExtractRecommendAdInfo:(id)arg1 ByAdMsgXml:(id)arg2;
+ (BOOL)ExtractRecommendMetaInfo:(id)arg1 ByRecXml:(id)arg2;
+ (void)setCanvasComponentItem:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2 withSizeType:(int)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5;
+ (void)setAdCanvasPage:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2 withSizeType:(int)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5;
+ (void)setAdCanvasInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)replaceXMLNode:(id)arg1 toNode:(id)arg2 forString:(id)arg3;
+ (id)filterXMLNode:(id)arg1 fromString:(id)arg2;
+ (BOOL)SetAdvertiseXml:(id)arg1 ByAdXml:(id)arg2;
+ (BOOL)setAdCanvasExtXml:(id)arg1 ByXmlNode:(struct XmlReaderNode_t *)arg2;
+ (BOOL)SetAdvertiseInfo:(id)arg1 ByAdInfo:(id)arg2;
+ (BOOL)SetAdvertiseInfo:(id)arg1 ByAdInfoXml:(struct XmlReaderNode_t *)arg2;
+ (BOOL)SetBGStorage:(id)arg1 ByXml:(id)arg2 preferLang:(id)arg3;
+ (id)WCBGStorageToXML:(id)arg1;
+ (BOOL)SetDataItem:(id)arg1 ByXml:(id)arg2;
+ (id)albumListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgAlbumFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgAuthorFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgGroupListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)XmlOfNoteInfoDataList:(id)arg1;
+ (id)XmlOfNoteInfo:(id)arg1;
+ (id)dataListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)noteInfoFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)bgGroupFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)mediaListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)mediaItemFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)urlFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (void)setWeAppInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setStreamVideoInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setMusicInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setActionInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setAppInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (void)setLocationInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)xmlOfStreamVideoInfo:(id)arg1;
+ (id)xmlOfWeAppInfo:(id)arg1;
+ (id)xmlOfMusicInfo:(id)arg1;
+ (id)xmlOfActionInfo:(id)arg1;
+ (id)xmlOfAppInfo:(id)arg1;
+ (id)xmlOfLocationInfo:(id)arg1;
+ (void)setWCContentItem:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)WCUploadTaskToXML:(id)arg1;

@end

