//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "NSTextFieldDelegate.h"

@class MMTextField, NSMutableArray, NSString;

@interface MMProfileOpenIMCellView : NSTableCellView <NSTextFieldDelegate>
{
    CDUnknownBlockType _didDescButtonClick;
    MMTextField *_keyLabel;
    NSMutableArray *_valueViews;
    double _maxKeyLableLength;
}

@property(nonatomic) double maxKeyLableLength; // @synthesize maxKeyLableLength=_maxKeyLableLength;
@property(retain, nonatomic) NSMutableArray *valueViews; // @synthesize valueViews=_valueViews;
@property(retain, nonatomic) MMTextField *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(copy, nonatomic) CDUnknownBlockType didDescButtonClick; // @synthesize didDescButtonClick=_didDescButtonClick;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)onDescButtonClick:(id)arg1;
- (id)createLabel:(id)arg1 withContact:(id)arg2;
- (void)updateUI:(id)arg1 withContact:(id)arg2;
- (void)updateFont:(double)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 withMaxLength:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

