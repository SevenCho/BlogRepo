//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMAssetPickerBrowserStateInfo : NSObject
{
    BOOL _selectable;
    BOOL _videoCropable;
    unsigned int _imageSize;
    NSString *_errorInfo;
}

+ (void)reportSelectImageFailedWithFileSize:(unsigned int)arg1;
+ (id)videoStateInfoWithAvAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(int)arg3 isSlowmotion:(BOOL)arg4;
+ (id)gifStateInfoWithImageData:(id)arg1 image:(id)arg2 isSend:(BOOL)arg3 needCheckValid:(BOOL)arg4 maxSize:(unsigned int)arg5;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) unsigned int imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) BOOL videoCropable; // @synthesize videoCropable=_videoCropable;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
- (void).cxx_destruct;

@end

