//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VoicePrintLogicControllerFactory.h"

#import "IRecordPermissionCheckExt.h"
#import "IVoicePrintMgrExt.h"
#import "VoicePrintViewControllerDelegate.h"

@class MMTimer, NSString;

@interface CreateVoicePrintLogicController : VoicePrintLogicControllerFactory <IRecordPermissionCheckExt, VoicePrintViewControllerDelegate, IVoicePrintMgrExt>
{
    BOOL _isCreateFirst;
    int _failureTimes;
    float averagePeakMeter;
    MMTimer *mEnvironmentCheckTimeOutTimer;
}

+ (id)factoryMethod;
@property(retain, nonatomic) MMTimer *mEnvironmentCheckTimeOutTimer; // @synthesize mEnvironmentCheckTimeOutTimer;
- (void).cxx_destruct;
- (void)OnUploadError:(int)arg1 andVoiceId:(unsigned long)arg2;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned long)arg2;
- (void)OnRegOkWithBioSigKey:(id)arg1 VoiceId:(unsigned long)arg2;
- (void)OnLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
- (void)OnEndRecord:(BOOL)arg1;
- (void)OnStartRecord;
- (void)OnEnviromentCheckResult:(BOOL)arg1;
- (void)OnEnviromentCheckModeLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnClickEnvironmentCheckReTryBtn;
- (void)OnTryVerifyBtnDone;
- (void)OnBackButtonDone;
- (void)stopNonBlockLoading;
- (void)startNonBlockLoading;
- (void)OnTalkButtonCanceled;
- (void)beginAllAnimation;
- (void)OnTalkButtonPressed;
- (void)OnViewDidLoad;
- (void)voicePrintBtnPressed;
- (void)processTimeOut;
- (void)TimerEnvironmentCheckTimeOut;
- (void)StartEnviromentCheck;
- (void)getResourceSuccess;
- (void)callVoicePrintMgrStart;
- (void)dealloc;
- (id)initWithScene:(unsigned long)arg1;
- (void)unregisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

