//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSArray;

@protocol GroupSelectContactsViewControllerDelegate <NSObject>

@optional
- (void)onGroupMultiSelectContactReturn:(NSArray *)arg1;
- (void)onGroupSelectContactReturn:(CContact *)arg1;
- (BOOL)onShouldSelectContact:(CContact *)arg1;
@end

