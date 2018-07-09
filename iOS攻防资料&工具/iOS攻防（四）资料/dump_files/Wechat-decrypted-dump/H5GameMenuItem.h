//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface H5GameMenuItem : NSObject
{
    BOOL _isCustom;
    UIImage *_iconImg;
    id _userInfo;
    unsigned int _itemId;
    NSString *_title;
    NSString *_thumbUrl;
    int _actionType;
    NSString *_targetUrl;
    unsigned int _placeId;
}

+ (id)initFromCustomMenuItem:(id)arg1;
@property(nonatomic) unsigned int placeId; // @synthesize placeId=_placeId;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(nonatomic) BOOL isCustom; // @synthesize isCustom=_isCustom;
- (void).cxx_destruct;
- (id)toStandardMenuItem;
- (id)getValidTitle;
- (BOOL)isValid;

@end

