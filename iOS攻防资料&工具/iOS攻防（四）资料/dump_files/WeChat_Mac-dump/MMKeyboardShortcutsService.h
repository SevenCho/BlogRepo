//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt.h"
#import "JTCaptureRequestDelegate.h"
#import "MMService.h"

@class MMTimer, MMToastPanel, NSImageView, NSString, NSTextField;

@interface MMKeyboardShortcutsService : MMService <JTCaptureRequestDelegate, AccountServiceExt, MMService>
{
    BOOL _shouldPasteScreenshot;
    NSTextField *_filePathLabel;
    NSImageView *_imageView;
    MMToastPanel *_toastPanel;
    MMTimer *_screenshotSuccessTimer;
}

+ (void)LazyRegisterExtension;
@property(retain, nonatomic) MMTimer *screenshotSuccessTimer; // @synthesize screenshotSuccessTimer=_screenshotSuccessTimer;
@property(retain, nonatomic) MMToastPanel *toastPanel; // @synthesize toastPanel=_toastPanel;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak NSTextField *filePathLabel; // @synthesize filePathLabel=_filePathLabel;
@property(nonatomic) BOOL shouldPasteScreenshot; // @synthesize shouldPasteScreenshot=_shouldPasteScreenshot;
- (void).cxx_destruct;
- (void)closeToastPanel;
- (void)captureRequest:(id)arg1 didFinishWithImageData:(id)arg2 saveToPath:(id)arg3 error:(id)arg4;
- (void)captureRequestDidCancel:(id)arg1;
- (void)captureRequestDidChange:(id)arg1;
- (void)onAuthOK:(BOOL)arg1;
- (void)startScreenShot;
- (void)registerDefaultShortcuts;
- (void)setUpShortcutsFromDefaults;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

