//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageCropToolBarDelegate.h"
#import "EditImageEmotionToolAttrDelegate.h"
#import "EditImageMosaicToolAttrDelegate.h"
#import "EditImageOperationDelegate.h"
#import "EditImagePenToolAttrDelegate.h"
#import "IMMAssetICloudExt.h"
#import "IUiUtilExt.h"
#import "UIGestureRecognizerDelegate.h"

@class EditImageCropGridView, EditImageCropOverlayView, EditImageCropToolBarView, EditImageEmotionToolAttrView, EditImageMosaicToolAttrView, EditImagePenToolAttrView, EditImageScrollView, MMTimer, MMUIImageView, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface EditImageIntialView : MMUIView <EditImageEmotionToolAttrDelegate, EditImageCropToolBarDelegate, UIGestureRecognizerDelegate, EditImageOperationDelegate, EditImagePenToolAttrDelegate, EditImageMosaicToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    BOOL m_hasClickEditButton;
    UIView *_topEditImageBar;
    MMUIImageView *_topBackgroundView;
    UIView *_bottomEditImageBar;
    MMUIImageView *_bottomBackgroundView;
    EditImagePenToolAttrView *_penAttrBar;
    EditImageMosaicToolAttrView *_mosaicAttrBar;
    EditImageEmotionToolAttrView *_emotionAttrView;
    UIView *_topGradientBar;
    UIView *_topGradientBar2;
    UIImageView *_gradientBgView;
    UIButton *_undoBtn;
    UIButton *_toolBtn;
    UIView *_toolsBarView;
    UIButton *_redoBtn;
    UIButton *_penBtn;
    UIButton *_mosaicBtn;
    UIButton *_textBtn;
    UIButton *_emotionBtn;
    UIButton *_cropBtn;
    UIButton *_cancelBtn;
    UIButton *_doneBtn;
    unsigned long fromScene;
    unsigned long fromEntrance;
    BOOL _hasDisplayImage;
    BOOL _hasOriginalImage;
    float _iCloudDownloadProgress;
    BOOL _bIsiCloudImage;
    NSMutableArray *_tmpSaveDrawLayerArray;
    UIView *_iCloudMaskView;
    UILabel *_iCloudProgressLabel;
    UIView *_iCloudBarBackgroundView;
    UIImageView *_iCloudImage;
    BOOL _bHasAbort;
    BOOL _bUseOriginalImage;
    UIImage *_saveOriginalImage;
    BOOL _isAnimating;
    BOOL _isToolBarOccupy;
    BOOL _isCropOver;
    BOOL _isCropStartAnimationReady;
    BOOL _isAnimateEnable;
    BOOL _isRotating;
    BOOL _isRotationIconLocked;
    BOOL _isAspectRatioLocked;
    id <EditImageInitialViewDelegate> _delegate;
    NSString *_assetURL;
    EditImageCropToolBarView *_cropToolBar;
    EditImageCropGridView *_cropGridView;
    UIPanGestureRecognizer *_gridPanGes;
    unsigned int _cropEdge;
    float _naturalTopLength;
    EditImageCropOverlayView *_overlayView;
    int _lastToolType;
    MMTimer *_timer;
    unsigned int _currentRotationOrientation;
    unsigned int _startRotationOrientation;
    EditImageScrollView *_eIScrollView;
    struct CGPoint _cropTouchPoint;
    struct CGSize _oldStartImageFrameSize;
    struct CGPoint _originalScrollViewOffset;
    struct CGRect _cropFrame;
    struct CGRect _cropOriginalFrame;
    struct CGRect _cropTouchFrame;
    struct CGRect _contentFrame;
}

@property(nonatomic) struct CGPoint originalScrollViewOffset; // @synthesize originalScrollViewOffset=_originalScrollViewOffset;
@property(nonatomic) BOOL isAspectRatioLocked; // @synthesize isAspectRatioLocked=_isAspectRatioLocked;
@property(retain, nonatomic) EditImageScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
@property(nonatomic) BOOL _isRotationIconLocked; // @synthesize _isRotationIconLocked;
@property(nonatomic) BOOL _isRotating; // @synthesize _isRotating;
@property(nonatomic) struct CGSize _oldStartImageFrameSize; // @synthesize _oldStartImageFrameSize;
@property(nonatomic) unsigned int _startRotationOrientation; // @synthesize _startRotationOrientation;
@property(nonatomic) unsigned int _currentRotationOrientation; // @synthesize _currentRotationOrientation;
@property(nonatomic) BOOL _isAnimateEnable; // @synthesize _isAnimateEnable;
@property(nonatomic) BOOL _isCropStartAnimationReady; // @synthesize _isCropStartAnimationReady;
@property(retain, nonatomic) MMTimer *_timer; // @synthesize _timer;
@property(nonatomic) BOOL _isCropOver; // @synthesize _isCropOver;
@property(nonatomic) BOOL _isToolBarOccupy; // @synthesize _isToolBarOccupy;
@property(nonatomic) BOOL _isAnimating; // @synthesize _isAnimating;
@property(nonatomic) int _lastToolType; // @synthesize _lastToolType;
@property(nonatomic) __weak EditImageCropOverlayView *_overlayView; // @synthesize _overlayView;
@property(nonatomic) float _naturalTopLength; // @synthesize _naturalTopLength;
@property(nonatomic) struct CGRect _contentFrame; // @synthesize _contentFrame;
@property(nonatomic) struct CGRect _cropTouchFrame; // @synthesize _cropTouchFrame;
@property(nonatomic) struct CGPoint _cropTouchPoint; // @synthesize _cropTouchPoint;
@property(nonatomic) unsigned int _cropEdge; // @synthesize _cropEdge;
@property(retain, nonatomic) UIPanGestureRecognizer *_gridPanGes; // @synthesize _gridPanGes;
@property(retain, nonatomic) EditImageCropGridView *_cropGridView; // @synthesize _cropGridView;
@property(nonatomic) struct CGRect _cropOriginalFrame; // @synthesize _cropOriginalFrame;
@property(nonatomic) struct CGRect _cropFrame; // @synthesize _cropFrame;
@property(retain, nonatomic) EditImageCropToolBarView *_cropToolBar; // @synthesize _cropToolBar;
@property(retain, nonatomic) NSString *_assetURL; // @synthesize _assetURL;
@property(nonatomic) __weak id <EditImageInitialViewDelegate> _delegate; // @synthesize _delegate;
- (void).cxx_destruct;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onMainWindowFrameChanged;
- (void)dealloc;
- (void)endEditImageView;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)updateToolBtns;
- (void)updateBtns;
- (void)selectLastToolType;
- (void)reloadEmotionToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (void)reloadViews;
- (void)startAnimateAspectCrop;
- (void)postInit;
- (void)checkiCloudImage;
- (void)abortEditImageAndShowMessage:(id)arg1;
- (void)afterDisplayImage:(id)arg1 withArray:(id)arg2;
- (void)initEditImageView;
- (void)initTopEditImageBar;
- (void)initEmotionToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)initPenToolAttrBar;
- (void)initiCloudMaskView;
- (void)initBottomEditImageBar;
- (void)setEmotionToolAttrViewHidden:(BOOL)arg1;
- (void)setToolsBarViewHidden:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(BOOL)arg1;
- (void)setEditImageAttrBarHiddenWithAnimation:(BOOL)arg1;
- (void)makeToolBarFlyAnimationHidden:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makeToolBarFadeAnimationHidden:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makeAllUIHidden:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationInBeganOrEndPhase:(BOOL)arg1;
- (void)onCropCancel;
- (void)onCropDone;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)onEmotionEditImage:(id)arg1;
- (void)onCropEditImage:(id)arg1;
- (void)onTextEditImage:(id)arg1;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (void)undoMosaicEditImage;
- (void)setSelectedMosaicStyleFromToolAttrView:(unsigned int)arg1;
- (void)setSelectedLineStyle:(unsigned int)arg1;
- (void)undoPenEditImage;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (BOOL)shouldUseOriginImage:(struct CGSize)arg1;
- (void)onEditImage:(unsigned long)arg1 withEditEntrance:(unsigned long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearEmotionToolOperation;
- (void)didSelectEmotion:(id)arg1 withMd5:(id)arg2;
- (void)onEmotionToolBarDoneBtnClicked:(BOOL)arg1;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)startEmotionTool;
- (void)clearOperation;
- (void)saveProperties;
- (void)goBackToEditView;
- (struct CGRect)calculateTrueEditImageViewFrameWithRatioImage:(struct CGSize)arg1;
- (void)revertRotateChanges;
- (void)trueCommitRotateChanges;
- (void)commitRotateChanges;
- (void)revertAllRotationChangesInEditPhase;
- (void)rotateImageDirectly:(BOOL)arg1;
- (void)rotateImageToOrientation:(unsigned int)arg1 withAnimation:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onCropToolBarRotateBtnClicked;
- (void)onCropToolBarRevertBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)onCropToolBarCancelBtnClicked;
- (void)cancelCropToolBar;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)gridPanGestureRecognized:(id)arg1;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;
- (unsigned int)cropEdgeForPoint:(struct CGPoint)arg1;
- (void)finishCroppingView;
- (void)croppingView;
- (void)triggerTimer;
- (void)resetTimer;
- (void)startTimer:(float)arg1;
- (void)startTimer;
- (void)matchOverlayViewToCropGridView;
- (void)trackFrameWhileAnimating;
- (void)moveContentToCenter;
- (BOOL)isCropped;
- (BOOL)isRotated;
- (void)checkForCanRevert;
- (void)setAspectRatio:(struct CGSize)arg1 withAnimation:(BOOL)arg2;
- (void)revertLayoutContentImage;
- (void)restoreLayoutContentImage;
- (void)setScrollViewMaxMinZoomScale:(BOOL)arg1;
- (void)initContentImage;
- (void)startAnimateToCropFrame;
- (void)showCropToolBarViewWithAnimated:(BOOL)arg1;
- (void)postStartCropView;
- (void)startCropView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

