//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "IMMFavRecordDownloadMgrExt.h"
#import "IMMRecordDownloadMgrExt.h"
#import "MMCheckBoxAttachmentViewDelegate.h"
#import "MMFavoritesMgrExt.h"
#import "MMRichAttachmentTextViewDelegate.h"
#import "MMRichTextViewToolBarDelegate.h"
#import "MMRichTextViewToolbarDataSource.h"
#import "MMTokenFieldDelegate.h"
#import "MMVideoAttachmentViewDelegate.h"
#import "MMVoiceAttachmentViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "NSTokenFieldDelegate.h"
#import "WeNoteArticleToolBarDelegate.h"

@class FavoritesItem, MMNoteEditorTagBar, MMRichAttachmentClipView, MMRichAttachmentTextStorage, MMRichAttachmentTextView, MMTextAttachmentCell, MMTimer, MMTokenField, MessageData, NSMutableArray, NSProgressIndicator, NSScrollView, NSString, NSTextField, NSView, WeNoteAudioMgr, WeNoteParagraphInfo, WeNoteWindowController;

@interface WeNoteDetailViewController : NSViewController <MMRichAttachmentTextViewDelegate, NSTextViewDelegate, MMVoiceAttachmentViewDelegate, MMVideoAttachmentViewDelegate, MMCheckBoxAttachmentViewDelegate, NSTokenFieldDelegate, MMTokenFieldDelegate, IMMRecordDownloadMgrExt, IMMFavRecordDownloadMgrExt, MMFavoritesMgrExt, WeNoteArticleToolBarDelegate, MMRichTextViewToolBarDelegate, MMRichTextViewToolbarDataSource>
{
    MMRichAttachmentTextStorage *_customTextStorage;
    WeNoteWindowController *_weakWindowController;
    MMTextAttachmentCell *highlightedCell;
    int plainTextMaxLength;
    int attachmentMaxNum;
    unsigned long long totalAttachementSizeLimit;
    unsigned long long singleAttachmentSizeLimit;
    BOOL _editing;
    BOOL _edited;
    BOOL _waitingFirstSynUpdatedFinish;
    BOOL _waitingUserSelectedSyncActionFinish;
    BOOL _tagBarIsAnimating;
    int _noteState;
    int _saveStatus;
    unsigned int _originalVersion;
    unsigned int _backupCount;
    FavoritesItem *_tagEditItem;
    MessageData *_parentMsg;
    FavoritesItem *_currentFavItem;
    WeNoteParagraphInfo *_editingParaInfo;
    NSMutableArray *_paragraphArray;
    WeNoteAudioMgr *_audioMgr;
    MMRichAttachmentTextView *_wenoteRichTextView;
    NSScrollView *_scrollView;
    MMRichAttachmentClipView *_clipView;
    MMNoteEditorTagBar *_noteTagBar;
    MMTokenField *_tagTokenField;
    NSView *_loadingViewContainer;
    NSProgressIndicator *_loadingIndicator;
    NSTextField *_loadingWording;
    NSString *_htmlDataID;
    NSString *_originalDeviceID;
    MMTimer *_backupTimer;
    MMTimer *_textDidChangeTimeOutTimer;
}

@property(nonatomic) BOOL tagBarIsAnimating; // @synthesize tagBarIsAnimating=_tagBarIsAnimating;
@property(retain, nonatomic) MMTimer *textDidChangeTimeOutTimer; // @synthesize textDidChangeTimeOutTimer=_textDidChangeTimeOutTimer;
@property(nonatomic) BOOL waitingUserSelectedSyncActionFinish; // @synthesize waitingUserSelectedSyncActionFinish=_waitingUserSelectedSyncActionFinish;
@property(nonatomic) BOOL waitingFirstSynUpdatedFinish; // @synthesize waitingFirstSynUpdatedFinish=_waitingFirstSynUpdatedFinish;
@property(retain, nonatomic) MMTimer *backupTimer; // @synthesize backupTimer=_backupTimer;
@property(nonatomic) unsigned int backupCount; // @synthesize backupCount=_backupCount;
@property(retain, nonatomic) NSString *originalDeviceID; // @synthesize originalDeviceID=_originalDeviceID;
@property(nonatomic) unsigned int originalVersion; // @synthesize originalVersion=_originalVersion;
@property(nonatomic) int saveStatus; // @synthesize saveStatus=_saveStatus;
@property(retain, nonatomic) NSString *htmlDataID; // @synthesize htmlDataID=_htmlDataID;
@property(retain) NSTextField *loadingWording; // @synthesize loadingWording=_loadingWording;
@property(retain) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain) NSView *loadingViewContainer; // @synthesize loadingViewContainer=_loadingViewContainer;
@property(retain) MMTokenField *tagTokenField; // @synthesize tagTokenField=_tagTokenField;
@property(retain) MMNoteEditorTagBar *noteTagBar; // @synthesize noteTagBar=_noteTagBar;
@property(retain, nonatomic) MMRichAttachmentClipView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMRichAttachmentTextView *wenoteRichTextView; // @synthesize wenoteRichTextView=_wenoteRichTextView;
@property(retain, nonatomic) WeNoteAudioMgr *audioMgr; // @synthesize audioMgr=_audioMgr;
@property(retain, nonatomic) NSMutableArray *paragraphArray; // @synthesize paragraphArray=_paragraphArray;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) int noteState; // @synthesize noteState=_noteState;
@property(retain, nonatomic) WeNoteParagraphInfo *editingParaInfo; // @synthesize editingParaInfo=_editingParaInfo;
@property(retain, nonatomic) FavoritesItem *currentFavItem; // @synthesize currentFavItem=_currentFavItem;
@property(retain, nonatomic) MessageData *parentMsg; // @synthesize parentMsg=_parentMsg;
@property(retain, nonatomic) FavoritesItem *tagEditItem; // @synthesize tagEditItem=_tagEditItem;
- (void).cxx_destruct;
- (void)showToastViewOnForwardedNote;
- (void)updateSyncBtnWithSyncStatus:(int)arg1;
- (void)onAddSuccess:(unsigned int)arg1;
- (void)onFavItem:(unsigned int)arg1 syncStatusChange:(int)arg2;
- (void)favoritesMgrDidAddItems:(id)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)onDownloadMsgRecordHtmlFile;
- (void)onDownloadFavHtmlFile;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadFavItemRecordOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)tokenFieldDoShow:(BOOL)arg1 diffHeight:(double)arg2;
- (BOOL)tagHasChanged:(id)arg1;
- (void)tokenFieldEscDidKeyUp:(id)arg1;
- (void)tokenFieldSizeDidChange:(struct CGRect)arg1 oldSize:(struct CGRect)arg2;
- (void)parseTagTokens:(id)arg1;
- (void)tokenFieldDidChange:(id)arg1;
- (id)urlEncodeString:(id)arg1;
- (void)updateTagField;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldUpdateToolBarWithBulletType:(id)arg2;
- (BOOL)textView:(id)arg1 shouldUpdateToolBarWithAttribtues:(id)arg2;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)superDeleteNote;
- (BOOL)superShareToFriends;
- (BOOL)superSaveNote;
- (BOOL)superHandlePickFile;
- (BOOL)superHandleEscapeEvent;
- (BOOL)textView:(id)arg1 shouldAcceptFileAttachment:(id)arg2;
- (BOOL)textView:(id)arg1 shouldAcceptPastedAttributedString:(id)arg2;
- (id)textView:(id)arg1 attachmentViewWithAttachment:(id)arg2;
- (void)setChecked;
- (void)attachmentView:(id)arg1 didClickOnParaInfo:(id)arg2;
- (void)attachmentView:(id)arg1 didLoadImage:(id)arg2 withSize:(struct CGSize)arg3;
- (id)getPlayingObjectId;
- (void)startPlayVoiceAnyway:(id)arg1 lastPlayTime:(double)arg2;
- (void)startPlayVoice:(id)arg1 lastPlayTime:(double)arg2;
- (id)getForwardFavItem;
- (BOOL)operationOutOfSingleAttachmentSizeLimit:(unsigned long long)arg1;
- (BOOL)operationOutOfTotalSizeLimit:(unsigned long long)arg1;
- (void)forwardMsgContentToContactsWithUserNames:(id)arg1;
- (void)forwardFavContentToContactsWithUserNames:(id)arg1;
- (void)forwardContent:(id)arg1;
- (id)selectedRangeFontForRichTextEditorToolbar;
- (int)infoTypeToFailedInsertIdKey:(int)arg1;
- (int)infoTypeToSuccessInsertIdKey:(int)arg1;
- (void)onPreprocessFilesDidFinish;
- (void)onPreprocessFilesWillStart;
- (void)richTextViewToolbarShouldAnimatedUpdateSynsStatusTipsLabel:(int)arg1 dotCount:(unsigned int)arg2;
- (void)richTextViewToolbarDidSelectShowMore:(id)arg1;
- (void)richTextViewToolbarDidSelectDeleteNote;
- (void)richTextViewToolbarDidSelectPickFiles:(id)arg1;
- (void)richTextViewToolbarDidSelectTagNote;
- (void)richTextViewToolbarDidSelectSyncNote;
- (void)richTextViewToolbarDidSelectFontSize:(id)arg1;
- (void)richTextViewToolbarDidSelectInsertSeperateLine;
- (void)richTextViewToolbarDidSelectTodoBulletPoint;
- (void)richTextViewToolbarDidSelectOrderBulletPoint;
- (void)richTextViewToolbarDidSelectBulletPoint;
- (void)richTextViewToolbarDidSelectUnderline;
- (void)richTextViewToolbarDidSelectItalic;
- (void)richTextViewToolbarDidSelectBold;
- (int)featuresEnabledForMMRichTextViewToolbar;
- (void)onTextDidChangeTimeOut;
- (BOOL)canForceSave;
- (void)resetParentFavItemOnConflict;
- (void)onWindowReisze;
- (BOOL)isFirstInitialSyningFavItem:(id)arg1;
- (BOOL)isEmpty;
- (void)saveWNArticleWithTagList:(id)arg1 action:(int)arg2;
- (void)backupOnAppTerminate;
- (void)backup;
- (void)scheduleBackup;
- (void)saveNoteWithAction:(int)arg1;
- (void)saveNoteOnCreateNew;
- (void)logAllInvalidDataField;
- (void)loadAttributedStringToTextView:(id)arg1;
- (id)parseParagrapsToAttributedString;
- (BOOL)shouldPreLoadingHtml:(id)arg1;
- (void)setupParentFavItem:(id)arg1 isOnWindowDidLoad:(BOOL)arg2;
- (void)setupParentMsg:(id)arg1;
- (BOOL)isWaitingSyncFinish;
- (void)msgSendToSetupParentFavItem:(id)arg1;
- (void)checkItemUploadStatus;
- (void)updateLoadingWording:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)initTagBar;
- (void)initRichTextView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWindowController:(id)arg1 noteState:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

