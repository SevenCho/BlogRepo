//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonDescMgrExt.h"
#import "IRecordPermissionCheckExt.h"
#import "ISysCallCheckExt.h"
#import "MMGrowTextViewDelegate.h"
#import "MMQuickSendEmoticonViewDelegate.h"
#import "MMTransparentButtonDelegate.h"
#import "SelectAttachmentViewControllerDelegate.h"
#import "ShortVideoBarDelegate.h"
#import "UITextViewDelegate.h"
#import "VoiceInputViewDelegate.h"
#import "WASendSessionMsgViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CAGradientLayer, EmoticonBoardView, MMEmoticonView, MMGrowTextView, MMQuickSendEmoticonView, MMTransparentButton, NSString, NSURL, RecordView, SelectAttachmentView, SelectAttachmentViewController, ShortVideoToolbar, UIButton, UIView, VoiceInputView, WASendSessionMsgView;

@interface MMInputToolView : MMUIView <MMQuickSendEmoticonViewDelegate, WASendSessionMsgViewDelegate, EmoticonDescMgrExt, UITextViewDelegate, ISysCallCheckExt, WCActionSheetDelegate, MMGrowTextViewDelegate, MMTransparentButtonDelegate, SelectAttachmentViewControllerDelegate, VoiceInputViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, IRecordPermissionCheckExt, ShortVideoBarDelegate>
{
    UIButton *_inputModeChangeButton;
    UIView *_toolView;
    VoiceInputView *_voiceInputView;
    SelectAttachmentView *_attachmentView;
    EmoticonBoardView *_expressionView;
    MMGrowTextView *_textView;
    UIButton *_attachmentButton;
    UIButton *_expressionDoneButton;
    UIView *_recordingTipsView;
    MMTransparentButton *_recordButton;
    UIButton *_expressionButton;
    RecordView *_recordView;
    UIButton *_sendCaptrueView;
    WASendSessionMsgView *_sendWeAppSessionMsgView;
    UIButton *m_quickSendEmoticonBackView;
    UIView *m_quickSendEmoticonView;
    MMEmoticonView *m_emoticonView;
    int _keyboardHeight;
    int _inputMode;
    int _positionMode;
    int _contentMode;
    id <MMInputToolViewDelegate> _delegate;
    SelectAttachmentViewController *m_selectAttachmentViewController;
    int iMuteCount;
    int _recordStatus;
    id <MMInputToolViewCustomizationDelegate> _uiDelegate;
    NSURL *_nsLastCaptrueAssetURL;
    BOOL m_bPositioning;
    ShortVideoToolbar *_sightToolbar;
    int _preSightInputMode;
    int _preSightPositionMode;
    int _preSightContentMode;
    float _bizInputBtnWidth;
    BOOL _showToolViewAfterAnimation;
    float _keyboardTop;
    UIView *_bkgView;
    BOOL _isWeAppSessionMsgBtnHidding;
    BOOL _hasReceiveTextBeginEditing;
    BOOL _isDetectingExternalKeyboard;
    UIView *m_keyboardBackgroundView;
    BOOL _weappSessionMsgBtnIgnoreFirstTextEdit;
    SEL mRecordSelector;
    unsigned int _fMaxLength;
    MMQuickSendEmoticonView *_quickSendEmoticonView;
    CAGradientLayer *_toolViewShadowLayer;
}

@property(retain, nonatomic) CAGradientLayer *toolViewShadowLayer; // @synthesize toolViewShadowLayer=_toolViewShadowLayer;
@property(retain, nonatomic) MMQuickSendEmoticonView *quickSendEmoticonView; // @synthesize quickSendEmoticonView=_quickSendEmoticonView;
@property(nonatomic) BOOL weappSessionMsgBtnIgnoreFirstTextEdit; // @synthesize weappSessionMsgBtnIgnoreFirstTextEdit=_weappSessionMsgBtnIgnoreFirstTextEdit;
@property(nonatomic) unsigned int fMaxLength; // @synthesize fMaxLength=_fMaxLength;
@property(nonatomic) SEL mRecordSelector; // @synthesize mRecordSelector;
@property(nonatomic) __weak id <MMInputToolViewCustomizationDelegate> _uiDelegate; // @synthesize _uiDelegate;
@property(nonatomic) BOOL m_bPositioning; // @synthesize m_bPositioning;
@property(retain, nonatomic) RecordView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) int positionMode; // @synthesize positionMode=_positionMode;
@property(nonatomic) int inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) __weak id <MMInputToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMTransparentButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIView *recordingTipsView; // @synthesize recordingTipsView=_recordingTipsView;
@property(retain, nonatomic) UIButton *expressionDoneButton; // @synthesize expressionDoneButton=_expressionDoneButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) EmoticonBoardView *expressionView; // @synthesize expressionView=_expressionView;
@property(retain, nonatomic) ShortVideoToolbar *sightToolbar; // @synthesize sightToolbar=_sightToolbar;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *inputModeChangeButton; // @synthesize inputModeChangeButton=_inputModeChangeButton;
- (void).cxx_destruct;
- (void)onClickSendSessionMsgBtn;
- (void)layoutWeAppSessionMsgBtn;
- (void)initWeAppSessionMsgBtn;
- (void)hideWeAppSessionMsgBtn;
- (void)showWeAppSessionMsgBtn;
- (void)updateWeAppSessionMsgImageURL:(id)arg1 imageData:(id)arg2;
- (void)dealloc;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (BOOL)CheckVoiceBtnState;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)InputIsAvailableChanged:(BOOL)arg1;
- (BOOL)isFocusOnTextInput;
- (id)currentViewController;
- (void)onCameraResign;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(BOOL)arg3 isMuted:(BOOL)arg4 editVideoAttr:(id)arg5;
- (void)onShortVideoToolBtnClick:(int)arg1;
- (void)initSightToolView;
- (void)hideSightCamera;
- (BOOL)isTracking;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setVoiceEnabled:(BOOL)arg1;
- (void)resetSelectAttachmentView;
- (void)resetVoiceInputView;
- (void)resetRecordView;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)isPointInRecordButton:(struct CGPoint)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)resetGrowTextView;
- (void)insertString:(id)arg1;
- (void)ShowCountingTips:(int)arg1;
- (void)HideRecordTips;
- (void)ShowTooShortTips;
- (void)ShowTooLongTips;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)showRecord:(id)arg1;
- (void)showCancel:(id)arg1;
- (void)cancelRecording;
- (void)stopRecording:(id)arg1;
- (void)resalStartRecording;
- (void)startRecording:(id)arg1;
- (void)setContentMode:(int)arg1 animated:(BOOL)arg2;
- (void)NotifyViewControllerPostionChanged:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)setPoisitionMode:(int)arg1 animated:(BOOL)arg2 fromShake:(BOOL)arg3;
- (void)setPoisitionMode:(int)arg1 animated:(BOOL)arg2;
- (void)didMoveToWindow;
- (float)getContentViewHeight:(int)arg1;
- (void)onPositionAnimationEnd;
- (void)setInputMode:(int)arg1 animated:(BOOL)arg2;
- (void)onGroupPayButtonClicked:(id)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(id)arg1;
- (void)onRedEnvelopesClicked:(id)arg1;
- (void)onTransferButtonClicked:(id)arg1;
- (void)onServiceButtonClicked:(id)arg1;
- (void)on3rdServiceButtonClicked:(id)arg1;
- (void)onMyFavoritesButtonClicked:(id)arg1;
- (void)logSightCameraEntranceWithCameraButton:(BOOL)arg1;
- (void)onCameraControllerClicked:(id)arg1;
- (void)onFileBrowserClicked:(id)arg1;
- (void)onMediaBrowserClicked:(id)arg1;
- (void)onCardPkgButtonClicked:(id)arg1;
- (void)realStartMultiTalk;
- (void)onMultiTalkButtonClicked:(id)arg1;
- (void)onShareCardButtonClicked:(id)arg1;
- (void)onLocationButtonClicked:(id)arg1;
- (void)videoVoipBtnRealClicked;
- (BOOL)isEnableVoiceVoipFromPlugin;
- (void)onVideoVoipButtonClicked:(id)arg1;
- (void)asyncStartNetDetect;
- (BOOL)canShowGroupPayEntry;
- (BOOL)hasGroupPayEntry;
- (BOOL)canShowCardPkgEntry;
- (BOOL)canShowEnterpriseBrandEntry;
- (BOOL)canShowLocation;
- (BOOL)canShowFavEntry;
- (BOOL)canShowSight;
- (BOOL)canShowFileBrowser;
- (BOOL)canShowRedEnvelopesEntey;
- (BOOL)canShowTransferMoneyEntry;
- (id)getMsgSendOpEntry;
- (BOOL)hasRedEnvelopesEntry;
- (BOOL)hasTransferMoneyEntry;
- (BOOL)canShowServiceEntry;
- (BOOL)hasServiceEntry;
- (id)getServiceAppList;
- (id)getAttachmentViewServiceAppList;
- (void)didSelectAttachmentAtIndex:(unsigned int)arg1;
- (void)voiceInputBtnRealClicked;
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)voiceVoipBtnRealClicked;
- (void)onVoiceVoipButtonClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onSendCaptrueButtonClicked:(id)arg1;
- (void)onAttachmentModeChangeButtonClicked:(id)arg1;
- (void)showCaptrueButton;
- (void)tryShowCaptrueButton;
- (void)onInputModeChangeButtonClicked:(id)arg1;
- (void)onWillDisappear;
@property(nonatomic) __weak NSString *text;
- (void)hideToolView:(BOOL)arg1;
- (void)Reset;
- (id)initWithUIDelegate:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)initSubView;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (BOOL)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)keyboardDidShow:(float)arg1;
- (void)keyboardWillShow:(float)arg1;
- (void)updateCustomToolView;
- (void)UpdateTabBarSendButtonState;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewDidDeleteToNil;
- (BOOL)TextViewDidDelete;
- (void)deleteEmoticon;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)changeTextViewColorForEmoticonState:(BOOL)arg1;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (void)onSendButtonClicked;
- (BOOL)isOpenimChat;
- (void)updateRecordButtonDisabled;
- (void)updateToolViewHeight:(BOOL)arg1;
- (void)SetButtonHighlighted:(BOOL)arg1;
- (void)showSendCaptrueViewAnimated:(BOOL)arg1;
- (void)hideSendCaptrueView;
- (void)hideSendCaptrueViewAnimated:(BOOL)arg1;
- (void)initVoiceInputView;
- (void)OnVoiceInputSendBtnClicked;
- (void)OnVoiceInputKeyboardBtnClicked;
- (BOOL)ifStreamVoiceInputOn;
- (void)OnClearText;
- (void)OnTextRecoged:(id)arg1;
- (id)GetCurrentText;
- (void)initAttachmentView;
- (void)updateAttachmentView;
- (void)setIsAllowShareCard:(BOOL)arg1;
- (void)setIsAllowNameCardFollowRedEnveLope:(BOOL)arg1;
- (void)setIsAllowWxTalkFollowSight:(BOOL)arg1;
- (void)setIsAllowRecommendApp:(BOOL)arg1;
- (void)setIsAllowMultiTalk:(BOOL)arg1;
- (void)setIsAllowWxTalk:(BOOL)arg1;
- (void)setIsAllowVoiceInput:(BOOL)arg1;
- (void)setIsAllowVoip:(BOOL)arg1 VoiceVoip:(BOOL)arg2;
- (id)configEmoticonView;
@property(nonatomic) int iKeyboardAnimationCurve;
@property(nonatomic) float fKeyboardAnimationDuration;
- (void)fixBtnY;
- (float)getDefaultTextViewHeight;
- (BOOL)isHiddenInputChangeButton;
- (void)initToolView;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned int)arg2;
- (void)onGetEmoticonDesc:(id)arg1 emoticonWrapList:(id)arg2 abTestItem:(id)arg3;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)toRecordStautsTooShortTips;
- (void)toRecordStautsTooLongTips;
- (void)toRecordStautsRecordCancelTips;
- (void)toRecordStautsRecording;
- (void)toRecordStautsPerparing;
- (void)toRecordStautsIdle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

