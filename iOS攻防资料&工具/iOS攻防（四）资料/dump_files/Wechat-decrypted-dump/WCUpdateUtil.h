//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCUpdateUtil : NSObject
{
}

+ (BOOL)deobfAndUnzipFile:(id)arg1 to:(id)arg2;
+ (id)getDirOfUpdateTmp;
+ (BOOL)unzipFile:(id)arg1 toDir:(id)arg2;
+ (BOOL)isInfoMatchNative:(id)arg1;
+ (id)getMatchedInfoForBundle:(id)arg1;
+ (id)getNativeUUIDs;
+ (id)_getNativeUUIDs;
+ (id)formatUUID:(id)arg1;
+ (id)getRealPath:(id)arg1;
+ (_Bool)canExitOnEnteringBackground;
+ (id)getConfigFilePathForBundle:(id)arg1;
+ (id)getUpdateBundle:(id)arg1;
+ (id)getUpdateResDirPath;
+ (id)getUpdateDataDirPath;
+ (id)getUpdateDataZipFilePath;
+ (id)getDirOfUpdate;

@end

