//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMShareActionSheet, MMShareActionSheetCell, MMShareActionSheetSection;

@protocol MMShareActionSheetDelegate <NSObject>

@optional
- (void)actionSheet:(MMShareActionSheet *)arg1 didDismissWithItem:(MMShareActionSheetCell *)arg2 atSection:(MMShareActionSheetSection *)arg3;
- (void)actionSheet:(MMShareActionSheet *)arg1 willDismissWithItem:(MMShareActionSheetCell *)arg2 atSection:(MMShareActionSheetSection *)arg3;
- (void)actionSheetCancel:(MMShareActionSheet *)arg1;
- (BOOL)actionSheetShouldCancel:(MMShareActionSheet *)arg1;
- (void)actionSheet:(MMShareActionSheet *)arg1 didSelectWithItem:(MMShareActionSheetCell *)arg2 atSection:(MMShareActionSheetSection *)arg3;
@end

