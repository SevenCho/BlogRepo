//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "GPUImageVideoCameraDelegate.h"
#import "MMovieCompressorDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WACameraQRCodeScannerDelegate.h"
#import "WCCameraPreviewDelegate.h"
#import "WCCameraWriterDelegate.h"

@class GPUImageCropFilter, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIImage, WACameraScanScanner, WAFilterLogic, WCCameraCapture, WCCameraPreview;

@interface WACameraLogicController : NSObject <UIAlertViewDelegate, MMovieCompressorDelegate, WCCameraWriterDelegate, WCCameraPreviewDelegate, AVCaptureMetadataOutputObjectsDelegate, GPUImageVideoCameraDelegate, WACameraQRCodeScannerDelegate>
{
    WCCameraPreview *_cameraPreview;
    WAFilterLogic *_filterLogic;
    GPUImageCropFilter *_cropFilter;
    NSMutableArray *m_compressorAry;
    unsigned int m_currID;
    NSObject<OS_dispatch_queue> *m_logicQueue;
    NSMutableArray *m_recordIDAry;
    unsigned long m_currWriterID;
    int m_currentOrientation;
    BOOL isShowingPreview;
    BOOL isCameraAppear;
    BOOL bNeedOutputVideoBuffer;
    BOOL _shouldHandleScan;
    BOOL _m_isTakingPicture;
    BOOL _m_shouldStart;
    BOOL _m_requestAuthAccess;
    BOOL _m_isNeedResumeWXMusic;
    id <WACameraLogicControllerDelegate> _delegate;
    WCCameraCapture *_cameraCapture;
    NSString *_m_videoPath;
    UIImage *_m_thumbImage;
    UIImage *_m_originalImage;
    int _recordState;
    NSMutableDictionary *_recorderDict;
    WACameraScanScanner *_cameraScanScanner;
}

+ (BOOL)isAuthStatusOK;
+ (BOOL)needCheckRequestAuthAccess;
@property(nonatomic) BOOL m_isNeedResumeWXMusic; // @synthesize m_isNeedResumeWXMusic=_m_isNeedResumeWXMusic;
@property(retain, nonatomic) WACameraScanScanner *cameraScanScanner; // @synthesize cameraScanScanner=_cameraScanScanner;
@property(retain, nonatomic) NSMutableDictionary *recorderDict; // @synthesize recorderDict=_recorderDict;
@property(nonatomic) BOOL m_requestAuthAccess; // @synthesize m_requestAuthAccess=_m_requestAuthAccess;
@property(nonatomic) BOOL m_shouldStart; // @synthesize m_shouldStart=_m_shouldStart;
@property(nonatomic) int recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) UIImage *m_originalImage; // @synthesize m_originalImage=_m_originalImage;
@property(nonatomic) BOOL m_isTakingPicture; // @synthesize m_isTakingPicture=_m_isTakingPicture;
@property(retain, nonatomic) UIImage *m_thumbImage; // @synthesize m_thumbImage=_m_thumbImage;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(retain, nonatomic) WCCameraCapture *cameraCapture; // @synthesize cameraCapture=_cameraCapture;
@property(nonatomic) BOOL shouldHandleScan; // @synthesize shouldHandleScan=_shouldHandleScan;
@property(nonatomic) __weak id <WACameraLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL bNeedOutputVideoBuffer; // @synthesize bNeedOutputVideoBuffer;
@property(nonatomic) BOOL isCameraAppear; // @synthesize isCameraAppear;
@property(nonatomic) BOOL isShowingPreview; // @synthesize isShowingPreview;
- (void).cxx_destruct;
- (void)onGotBarcode:(id)arg1 Type:(id)arg2 rawData:(id)arg3;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)filterType:(unsigned int)arg1;
- (void)setCameraPositon:(int)arg1;
- (void)setFlashType:(int)arg1;
- (void)switchCamera;
- (void)didTakeDoneWithSightPath:(id)arg1 thumbImg:(id)arg2 isMuted:(BOOL)arg3;
- (void)didTakeDoneWithPicture:(id)arg1;
- (void)didTapRetake;
- (void)onTakenPicture:(id)arg1;
- (BOOL)takePicture;
- (BOOL)stopRecord;
- (BOOL)startRecord;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2;
- (void)showPreviewViewWithImage:(id)arg1;
- (void)cancelWriterWithoutReprepare;
- (void)cancelWriter;
- (BOOL)finishWriter;
- (BOOL)startWriter;
- (float)sightCaptureMaxDuration;
- (void)cameraViewControllerDidRotate:(id)arg1;
- (void)onCameraStop:(id)arg1;
- (void)onWriterResign;
- (void)onMovieCompressFinished:(int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onWriterFailed:(int)arg1;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned long)arg4;
- (void)zoomFactor:(float)arg1;
- (BOOL)isSupportZoomWithFactor:(float)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned long)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned long)arg3;
- (BOOL)isRecording:(unsigned long)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecording:(unsigned long)arg1;
- (void)stopRecording:(unsigned long)arg1;
- (unsigned long)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(BOOL)arg3 maxVideoDuration:(float)arg4 orientation:(int)arg5 compressAudio:(BOOL)arg6 audioBitrate:(float)arg7;
- (void)pauseCamera;
- (void)resumeCamera;
- (void)removeCameraCropFilter;
- (void)setScanFreq:(float)arg1;
- (void)setScanCropRect:(struct CGRect)arg1;
- (void)setCameraCropRect:(struct CGRect)arg1;
- (void)updateCameraPreviewRect:(struct CGRect)arg1;
- (void)loadCameraLogicWithContentView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

