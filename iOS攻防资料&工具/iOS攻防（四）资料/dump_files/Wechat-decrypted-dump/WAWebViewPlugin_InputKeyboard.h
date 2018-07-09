//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WATextInputDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, WACustomKeyboard, WAJSEventHandler_BaseEvent;

@interface WAWebViewPlugin_InputKeyboard : WAWebViewPlugin_embedView <UIGestureRecognizerDelegate, UIScrollViewDelegate, WATextInputDelegate>
{
    float _toolBarHeight;
    int _orientation;
    NSMutableDictionary *_textInputs;
    float _keyboardHeight;
    BOOL _keyboardDidShow;
    BOOL _forceAdjustView;
    BOOL _viewDisappear;
    BOOL _canShowKeyboard;
    BOOL _hidding;
    float _offset;
    float _customNavBarY;
    BOOL _modalMask;
    BOOL _durationSwith;
    BOOL _systemKeyboard;
    id <InputKeyboardDelegate> _inputDelegate;
    id <WATextInputInterface> _field;
    WACustomKeyboard *_customKeyboard;
    NSDictionary *_delayParam;
    WAJSEventHandler_BaseEvent *_handler;
}

@property(retain, nonatomic) WAJSEventHandler_BaseEvent *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDictionary *delayParam; // @synthesize delayParam=_delayParam;
@property(retain, nonatomic) WACustomKeyboard *customKeyboard; // @synthesize customKeyboard=_customKeyboard;
@property(nonatomic) BOOL systemKeyboard; // @synthesize systemKeyboard=_systemKeyboard;
@property(nonatomic) BOOL durationSwith; // @synthesize durationSwith=_durationSwith;
@property(retain, nonatomic) id <WATextInputInterface> field; // @synthesize field=_field;
@property(nonatomic) BOOL modalMask; // @synthesize modalMask=_modalMask;
@property(nonatomic) __weak id <InputKeyboardDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (void).cxx_destruct;
- (void)onScrollViewDidEndScroll:(id)arg1;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onSelectDrop:(id)arg1 input:(id)arg2;
- (void)onDeleteDrop:(id)arg1 input:(id)arg2;
- (float)getContentHeight:(unsigned long)arg1;
- (int)getLineCount:(unsigned long)arg1;
- (BOOL)onReturn:(id)arg1;
- (void)didHeightChange:(float)arg1 lineNum:(int)arg2 input:(id)arg3;
- (void)onCaretBreak;
- (void)didValueChange:(id)arg1 pos:(int)arg2 input:(id)arg3 keyCode:(unsigned short)arg4;
- (void)onFocus:(id)arg1;
- (BOOL)updateTextArea:(id)arg1;
- (BOOL)removeTextArea:(unsigned long)arg1;
- (unsigned long)insertTextArea:(id)arg1;
- (BOOL)updateTextField:(id)arg1;
- (void)onDone;
- (void)hideKeyBoard:(BOOL)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)setDelayedHandler:(id)arg1 withParam:(id)arg2;
- (BOOL)keyboardShowAnimating;
- (BOOL)keyboardVisible;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)adjustViewPosition:(BOOL)arg1;
- (void)enterBackground;
- (void)didRotate:(id)arg1;
- (void)onSystemKeyboardWillShow:(id)arg1;
- (void)showCustomKeyboard:(int)arg1 confirmButton:(BOOL)arg2;
- (void)showSystemKeyboard:(BOOL)arg1;
- (void)setSystemKeyboardMode:(BOOL)arg1;
- (void)switchEmojiKeyBoard;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (void)setInputValue:(id)arg1 cursorPos:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showKeyboardForExistInput:(id)arg1;
- (int)getConfirmButton:(id)arg1;
- (void)addNotifications;
- (void)onKeyboardDidReady;
- (void)showKeyBoard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

