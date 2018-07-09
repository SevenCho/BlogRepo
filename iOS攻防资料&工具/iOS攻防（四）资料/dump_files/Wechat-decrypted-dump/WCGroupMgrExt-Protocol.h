//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCGroup;

@protocol WCGroupMgrExt <NSObject>

@optional
- (void)onWCGroupSetMemberToGroupsReturn:(BOOL)arg1 username:(NSString *)arg2 groupIDs:(NSArray *)arg3;
- (void)onWCGroupModMemberReturn:(BOOL)arg1 group:(WCGroup *)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(WCGroup *)arg2;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(WCGroup *)arg2;
- (void)onWCDeleteGroupReturn:(BOOL)arg1 groupID:(NSString *)arg2;
- (void)onWCChangeGroupNameReturn:(BOOL)arg1 groupID:(NSString *)arg2;
- (void)onWCCreateGroupReturn:(BOOL)arg1 group:(WCGroup *)arg2;
- (void)onWCGroupUpdatedReturn:(BOOL)arg1;
- (void)onWCGroupRecommendUpdated;
- (void)onWCGroupUpdated;
@end

