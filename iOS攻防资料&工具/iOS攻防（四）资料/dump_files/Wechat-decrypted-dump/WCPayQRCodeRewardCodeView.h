//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UITextField, WCPayControlData;

@interface WCPayQRCodeRewardCodeView : MMUIView <UITextFieldDelegate>
{
    id <WCPayQRCodeRewardCodeViewDelegate> _delegate;
    WCPayControlData *_controlData;
    int _currentCodeDisplayMode;
    NSString *_inputContent;
    UIImageView *_codeImageView;
    UIImageView *_headImgView;
    UITextField *_textField;
    UIButton *_photoHitButton;
}

@property(retain, nonatomic) UIButton *photoHitButton; // @synthesize photoHitButton=_photoHitButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIImageView *codeImageView; // @synthesize codeImageView=_codeImageView;
@property(retain, nonatomic) NSString *inputContent; // @synthesize inputContent=_inputContent;
@property(nonatomic) int currentCodeDisplayMode; // @synthesize currentCodeDisplayMode=_currentCodeDisplayMode;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) __weak id <WCPayQRCodeRewardCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)confirmChangeToInputMode;
- (void)confirmChangeToHeadImgMode;
- (void)codeViewRemoveWordingFail;
- (void)codeViewRemovewordingSucc;
- (void)codeViewSetWordingFail;
- (void)codeViewSetWordingSucc;
- (void)changeToInputMode;
- (void)changeToHeadImgMode;
- (void)photoHitBtnClick;
- (BOOL)loadCacheCodeViewIfExist;
- (id)getSelfHeaderImageViewWithImgLen:(float)arg1;
- (void)updateAccessibility;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 codeDelegate:(id)arg2 controlData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

