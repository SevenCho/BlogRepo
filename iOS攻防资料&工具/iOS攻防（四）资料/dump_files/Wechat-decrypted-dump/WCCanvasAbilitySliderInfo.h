//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCCanvasAbilitySliderInfo : MMObject <NSCoding>
{
    NSString *_label;
    float _value;
    float _fontSize;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSString *_foregroundImage;
    NSString *_backgroundImage;
}

@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(retain, nonatomic) NSString *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) float value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

