//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QBFileUtils : NSObject
{
}

+ (id)commonFilePathWithName:(id)arg1;
+ (void)setCommonFileDirectory:(id)arg1;
+ (id)fileNameWithPrefix:(id)arg1 subfix:(id)arg2;
+ (BOOL)deleteFileWithName:(id)arg1;
+ (id)getDataWithFileName:(id)arg1;
+ (BOOL)saveData:(id)arg1 withFileName:(id)arg2;
+ (BOOL)checkRootPathExist;
+ (id)rootPath;
+ (id)libPath;
+ (BOOL)disableFileBackup:(id)arg1;

@end

