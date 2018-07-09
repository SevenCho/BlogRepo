//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class FavoritesItemDB, NSMutableArray;

@interface FavoritesBatchDelMgr : MMObject <PBMessageObserverDelegate>
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchDelArray;
    NSMutableArray *_failArray;
    id <FavoritesBatchDelMgrDelegate> _delegate;
    BOOL _isDeling;
}

@property(nonatomic) __weak id <FavoritesBatchDelMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkFailQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)HandleBatchDelFavItemResp:(id)arg1 Event:(unsigned long)arg2;
- (void)TryStartBatchDel;
- (void)addBatchDelFavoritesItemList:(id)arg1;
- (void)dealloc;
- (BOOL)loadBatchDelQueue;
- (void)initDB:(id)arg1;
- (id)init;

@end

