//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface ContactProfileKeyValue : NSObject
{
    BOOL _isEditable;
    NSAttributedString *_key;
    NSAttributedString *_value;
    NSString *_placeHodlerStr;
}

@property(nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(copy, nonatomic) NSString *placeHodlerStr; // @synthesize placeHodlerStr=_placeHodlerStr;
@property(copy, nonatomic) NSAttributedString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSAttributedString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

