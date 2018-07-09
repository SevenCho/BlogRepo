//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface WCActionSheetItem : NSObject
{
    BOOL _bEnable;
    BOOL _bCustom;
    BOOL _bDestructiveButton;
    NSString *_title;
    NSString *_titleColor;
    int _titleSize;
    NSString *_desc;
    NSString *_descColor;
    int _descSize;
    UIImage *_iconImage;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
}

@property(nonatomic) BOOL bDestructiveButton; // @synthesize bDestructiveButton=_bDestructiveButton;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) BOOL bCustom; // @synthesize bCustom=_bCustom;
@property(nonatomic) BOOL bEnable; // @synthesize bEnable=_bEnable;
@property(nonatomic) int descSize; // @synthesize descSize=_descSize;
@property(copy, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) int titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (float)getItemHeight;
- (id)initWithTitle:(id)arg1 fontSize:(int)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(int)arg5 descFontColor:(id)arg6 enable:(BOOL)arg7;
- (id)initWithTitle:(id)arg1;

@end

