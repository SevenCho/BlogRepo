//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MMFavoriteFileServiceExt.h"

@class AVPlayer, AVPlayerLayer, FavoritesItem, FavoritesItemDataField, NSString;

@interface MMChatLogSightView : NSView <MMFavoriteFileServiceExt>
{
    BOOL _isFavorite;
    FavoritesItem *_favoritesItem;
    FavoritesItemDataField *_recordMsgData;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    NSView *_aPlayerView;
}

@property(nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property(retain, nonatomic) NSView *aPlayerView; // @synthesize aPlayerView=_aPlayerView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) FavoritesItemDataField *recordMsgData; // @synthesize recordMsgData=_recordMsgData;
@property(retain, nonatomic) FavoritesItem *favoritesItem; // @synthesize favoritesItem=_favoritesItem;
- (void).cxx_destruct;
- (void)favoriteFileService:(id)arg1 didFinishDownloadWithFavItemData:(id)arg2 type:(int)arg3 filePath:(id)arg4 taskID:(id)arg5;
- (void)refreshPlayerLayer:(id)arg1;
- (void)play;
- (void)setup;
- (id)initWithFavoriteItem:(id)arg1 recordMsgData:(id)arg2 isFavorite:(BOOL)arg3 frame:(struct CGRect)arg4;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

