//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WALocalCacheFilePathUtil : NSObject
{
}

+ (id)getAppBrandWebCacheRootDir;
+ (id)getPublicStoragePath;
+ (id)getPublicResPathWithDebugModeType:(unsigned int)arg1 version:(unsigned int)arg2;
+ (id)getWeAppLocalCacheFileNameWithVersion:(unsigned long long)arg1;
+ (id)getWeAppLocalCacheRootDirPathWithAppid:(id)arg1;
+ (id)getReleaseAppLocalCacheRootDirPath;
+ (id)getWeAppDebugLocalCacheRootDirPathWithAppid:(id)arg1;
+ (id)getDebugWeAppLocalCacheRootDirPath;
+ (id)getWeAppLocalCacheFilePathWithAppInfo:(id)arg1;
+ (id)getWeAppLocalCacheFilePathWithAppid:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned int)arg3 packageType:(unsigned int)arg4 moduleName:(id)arg5 encryptType:(unsigned int)arg6;
+ (id)videoCachesDirectoryPathWithURL:(id)arg1;
+ (id)downloadCachesDirectoryPath;

@end

