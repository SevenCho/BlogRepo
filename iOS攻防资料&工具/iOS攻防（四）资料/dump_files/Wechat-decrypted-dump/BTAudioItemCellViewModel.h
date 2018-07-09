//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTReaderItemCellViewModel.h"

#import "IAudioReceiverExt.h"
#import "IMusicPlayerExt.h"

@class MMMusicInfo, NSString;

@interface BTAudioItemCellViewModel : BTReaderItemCellViewModel <IAudioReceiverExt, IMusicPlayerExt>
{
    MMMusicInfo *m_musicInfo;
    BOOL _bPlaying;
}

+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(nonatomic) BOOL bPlaying; // @synthesize bPlaying=_bPlaying;
- (void).cxx_destruct;
- (void)onMusicPlayStatusChanged;
- (void)OnEndPlaying:(unsigned long)arg1 isForceStop:(BOOL)arg2;
- (void)OnBeginPlaying:(unsigned long)arg1 ErrNo:(int)arg2;
@property(readonly, nonatomic) MMMusicInfo *musicInfo;
- (id)coverImgURL;
@property(readonly, nonatomic) NSString *timeStr;
- (struct CGSize)titleSize;
- (id)titleStr;
- (id)titleLabelStyles;
- (float)viewHeight;
- (id)itemViewClassName;
- (void)updateWithReaderWrap:(id)arg1 itemIndex:(unsigned long)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(float)arg5;
- (id)initWithReaderWrap:(id)arg1 itemIndex:(unsigned long)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(float)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

