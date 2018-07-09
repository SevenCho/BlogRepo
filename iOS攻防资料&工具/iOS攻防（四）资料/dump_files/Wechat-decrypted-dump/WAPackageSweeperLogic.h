//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WAPackageSweeperLogic : NSObject
{
}

- (void)scanAndCleanInvalidNotifyInfo;
- (void)scanAndCleanInvalidModuleInfoData;
- (void)scanAndCleanInvalidEncryptInfoData;
- (void)scanAndCleanInvalidNormalInfoData;
- (void)scanAndCleanInvalidInfoData;
- (void)scanAndCleanDebugPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseModulePkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseEncryptPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseNormalPkgForAppId:(id)arg1;
- (void)scanAndCleanReleasePkgForAppId:(id)arg1;
- (void)scanAndCleanDebugDir;
- (void)scanAndCleanReleaseDir;
- (void)sweepContactAndDatas:(id)arg1;
- (void)sweepLocalPkgWithContactNewLogic:(id)arg1 debugType:(unsigned int)arg2 force:(BOOL)arg3;
- (void)sweepLocalPkgWithContactOldLogic:(id)arg1 debugType:(unsigned int)arg2 force:(BOOL)arg3;
- (void)sweepLocalPkgWithContact:(id)arg1 debugType:(unsigned int)arg2 force:(BOOL)arg3;
- (void)sweepNormalPkgUnderVersion:(unsigned long long)arg1 forAppid:(id)arg2;
- (void)checkLocalStorage;
- (void)checkToSweepContactAndDatas:(id)arg1;
- (void)sweepLowerVersionPkgAndContactIfNeededForContacts:(id)arg1;
- (void)sweepOutDatedEncryptPkgForContacts:(id)arg1;
- (void)sweepOutDatedModulePkg;
- (void)sweepOutDatedNormalPkgForContacts:(id)arg1;
- (void)sweepInvalidPkgAndInfoData;
- (void)saveCheckPointTime;
- (BOOL)isCurrentTimeReachCheckPoint;
- (void)reportCheckAction;
- (void)sweepLocalPkgWhenEnterBackgroundNewLogic;
- (void)sweepLocalPkgWhenEnterBackgroundOldLogic;
- (void)sweepLocalPkgWhenEnterBackground;

@end

