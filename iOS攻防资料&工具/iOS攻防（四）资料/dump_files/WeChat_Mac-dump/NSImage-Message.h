//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (Message)
- (void)syncMiddleImageDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)middleImageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)genMiddleImageData;
- (id)resizeToMaxWidth:(int)arg1 andMaxHeight:(int)arg2;
- (id)croppedImage:(struct CGRect)arg1;
- (struct CGSize)calculateFitSize:(struct CGSize)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
- (id)genThumbnailImage;
- (id)thumbnailDataWithSize:(struct CGSize)arg1;
- (id)thumbnailRawDataWithSize:(struct CGSize)arg1;
- (id)safeThumbnailDataWithSize:(struct CGSize)arg1;
- (id)thumbnailDataForMessage;
@end

