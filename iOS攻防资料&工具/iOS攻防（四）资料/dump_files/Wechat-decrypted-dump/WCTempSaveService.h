//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSOperationQueue, NSString, WCTempSaveModel;

@interface WCTempSaveService : MMService <MMService>
{
    BOOL _isReadingFile;
    unsigned int _curType;
    WCTempSaveModel *_textModel;
    WCTempSaveModel *_mediaModel;
    NSOperationQueue *_mediaFileQueue;
    NSOperationQueue *_textFileQueue;
}

@property(nonatomic) BOOL isReadingFile; // @synthesize isReadingFile=_isReadingFile;
@property(retain, nonatomic) NSOperationQueue *textFileQueue; // @synthesize textFileQueue=_textFileQueue;
@property(retain, nonatomic) NSOperationQueue *mediaFileQueue; // @synthesize mediaFileQueue=_mediaFileQueue;
@property(retain, nonatomic) WCTempSaveModel *mediaModel; // @synthesize mediaModel=_mediaModel;
@property(retain, nonatomic) WCTempSaveModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) unsigned int curType; // @synthesize curType=_curType;
- (void).cxx_destruct;
- (id)getTextModelFromFile;
- (id)getMediaModelFromFile;
- (BOOL)shouldAutoRemove:(id)arg1;
- (id)getLastPostInVisibleLabelNames;
- (id)getLastPostVisibleLabelNames;
- (void)setMediaText:(id)arg1 imageArray:(id)arg2 sightDraft:(id)arg3 poiInfo:(id)arg4 tempSelectContacts:(id)arg5 remindContactUsernames:(id)arg6;
- (void)setText:(id)arg1 poiInfo:(id)arg2 tempSelectContacts:(id)arg3 remindContactUsernames:(id)arg4;
- (void)removeOldMediaFile;
- (void)removeOldTextFile;
- (id)openOldSight;
- (id)openOldImages;
- (id)openOldMediaText;
- (id)openOldText;
- (BOOL)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

