//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_navigateToMiniProgram : WAJSEventHandler_BaseEvent
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
}

- (void).cxx_destruct;
- (void)navigateToMiniProgramWitAppID:(id)arg1 userName:(id)arg2 debugMode:(unsigned int)arg3 pagePath:(id)arg4 extraData:(id)arg5 privateExtraData:(id)arg6 agentId:(id)arg7 navigationController:(id)arg8 sourceType:(unsigned int)arg9 preScene:(unsigned int)arg10 preSceneNote:(id)arg11 scene:(unsigned int)arg12 sceneNote:(id)arg13;
- (void)navigateToMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3;
- (void)mainThread_handleJSEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

