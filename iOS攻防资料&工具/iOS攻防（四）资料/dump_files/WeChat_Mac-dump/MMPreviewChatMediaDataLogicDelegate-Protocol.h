//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageData, NSArray;

@protocol MMPreviewChatMediaDataLogicDelegate <NSObject>

@optional
- (void)onMsgImgDataLogicLoadOKWithLast:(NSArray *)arg1 Next:(NSArray *)arg2;
- (BOOL)onMsgImgDataMatch:(MessageData *)arg1;
@end

