//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController;

@protocol MMRTCMenuResponderDelegate <NSObject>

@optional
- (MMUIViewController *)getCurrentViewController;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)onRichTextViewExit;
- (void)hideToolViewAnimated:(BOOL)arg1;
@end

