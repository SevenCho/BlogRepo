//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface WACommonPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <WACustomPickerDelegate> _delegate;
    int _selected;
    UIPickerView *_customPicker;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIPickerView *customPicker; // @synthesize customPicker=_customPicker;
@property(nonatomic) int selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <WACustomPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCancel;
- (void)onConfirm;
- (int)getItemNum;
- (id)getValue;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

