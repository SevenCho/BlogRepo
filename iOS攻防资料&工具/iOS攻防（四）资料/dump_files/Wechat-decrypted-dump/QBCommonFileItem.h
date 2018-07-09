//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QBCommonFileItem : NSObject
{
    NSString *_moduleName;
    NSString *_fileName;
    NSString *_fileUrl;
    NSString *_fileContentMd5;
    NSString *_fileContentSignature;
    NSString *_fileEncryptAlgorithm;
}

+ (id)itemWithInfo:(id)arg1;
+ (id)itemWupObj:(id)arg1 moduleName:(id)arg2;
@property(retain, nonatomic) NSString *fileEncryptAlgorithm; // @synthesize fileEncryptAlgorithm=_fileEncryptAlgorithm;
@property(retain, nonatomic) NSString *fileContentSignature; // @synthesize fileContentSignature=_fileContentSignature;
@property(retain, nonatomic) NSString *fileContentMd5; // @synthesize fileContentMd5=_fileContentMd5;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;

@end

