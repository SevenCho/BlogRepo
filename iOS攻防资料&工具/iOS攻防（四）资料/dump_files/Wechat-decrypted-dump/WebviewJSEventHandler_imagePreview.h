//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "PhotoViewControllerDelegate.h"

@class NSString, PhotoViewController;

@interface WebviewJSEventHandler_imagePreview : WebviewJSEventHandlerBase <PhotoViewControllerDelegate>
{
    PhotoViewController *m_photoViewController;
    int _webViewInterfaceOrientation;
}

- (void).cxx_destruct;
- (void)photoVCDidBePoped;
- (void)dealloc;
- (void)showImageWithUrls:(id)arg1 current:(id)arg2;
- (void)uninitImageViewer;
- (void)OnWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

