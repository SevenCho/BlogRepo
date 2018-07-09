//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavURLItem : NSObject
{
    NSString *_title;
    NSString *_description;
    NSString *_cleanUrl;
    NSString *_thumbUrl;
    int _openCache;
    unsigned long _contentAttributeBitSetFlag;
    NSString *_canvasInfoXml;
}

@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml=_canvasInfoXml;
@property(nonatomic) unsigned long contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag=_contentAttributeBitSetFlag;
@property(nonatomic) int openCache; // @synthesize openCache=_openCache;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *cleanUrl; // @synthesize cleanUrl=_cleanUrl;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setContentOriginal:(BOOL)arg1;
- (BOOL)isContentOriginal;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

