//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "VoicePrintHandlerDelegate.h"
#import "WCAccountErrorHandleLogicDelegate.h"

@class NSString, WCAccountControlData, WCAccountErrorHandleLogic;

@interface WCAccountBaseControlLogic : WCBaseControlLogic <VoicePrintHandlerDelegate, WCAccountErrorHandleLogicDelegate>
{
    WCAccountControlData *m_data;
    WCAccountErrorHandleLogic *m_errorHandleLogic;
    BOOL m_bNeverAutoStop;
}

- (void).cxx_destruct;
- (BOOL)isFromReg;
- (void)openMainFrame:(BOOL)arg1 showStyle:(id)arg2;
- (void)checkStopLogic;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 shouldHideNavBar:(BOOL)arg3;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (BOOL)onHandleError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)vcResignFirstResponder;
- (void)vcBecomeFirstResponder;
- (void)stopLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

