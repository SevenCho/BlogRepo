//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, UIButton, UIImage, UIImageView;

@interface WACameraMediaPreview : UIView
{
    BOOL _bShowActionButton;
    BOOL _isPlaying;
    CDUnknownBlockType _didClickRetakeBlock;
    CDUnknownBlockType _didClickDoneBlock;
    UIImage *_image;
    NSString *_videoPath;
    UIView *_backgrounView;
    UIView *_previewView;
    UIImageView *_imageView;
    UIView *_bottomView;
    UIButton *_retakeButton;
    UIView *_retakeBgView;
    UIButton *_confirmButton;
    UIImageView *_m_topBkgView;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
}

@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIImageView *m_topBkgView; // @synthesize m_topBkgView=_m_topBkgView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *retakeBgView; // @synthesize retakeBgView=_retakeBgView;
@property(retain, nonatomic) UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *backgrounView; // @synthesize backgrounView=_backgrounView;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType didClickDoneBlock; // @synthesize didClickDoneBlock=_didClickDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickRetakeBlock; // @synthesize didClickRetakeBlock=_didClickRetakeBlock;
@property(nonatomic) BOOL bShowActionButton; // @synthesize bShowActionButton=_bShowActionButton;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)didClickDone;
- (void)didClickRetake;
- (void)playButtonAnimation;
- (void)setupBottomView;
- (void)setupTopView;
- (void)setupPreviewView;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)continuePlayVideo;
- (void)pauseVideo;
- (void)stopVideo;
- (id)setImage:(id)arg1 Orientation:(int)arg2 isFrontCamera:(BOOL)arg3;
- (void)setVideoPath:(id)arg1 withOrientation:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

