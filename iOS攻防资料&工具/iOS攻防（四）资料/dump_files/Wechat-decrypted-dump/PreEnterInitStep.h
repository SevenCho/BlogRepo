//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "UIAlertViewDelegate.h"
#import "initLogicControllerDelegate.h"

@class InitLogicController, NSString;

@interface PreEnterInitStep : PreEnterBaseStep <initLogicControllerDelegate, UIAlertViewDelegate>
{
    InitLogicController *m_initLogicController;
    BOOL m_bInitOK;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showSyncAddrAlert;
- (BOOL)checkDBAutoRecover;
- (void)stopIniting:(unsigned long)arg1;
- (void)handleInitOk;
- (void)percentIniting:(id)arg1;
- (BOOL)isInitOK;
- (BOOL)isIniting;
- (void)startStep;
- (id)initFromReg:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

