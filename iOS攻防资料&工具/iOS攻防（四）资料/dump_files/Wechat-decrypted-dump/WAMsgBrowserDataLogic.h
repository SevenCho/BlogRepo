//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MsgNewImgDataLogicDelegate.h"

@class CContact, MsgNewImgDataLogic, NSMutableSet, NSString;

@interface WAMsgBrowserDataLogic : MMObject <MsgNewImgDataLogicDelegate>
{
    BOOL _isDone;
    CContact *_contact;
    id <WAMsgBrowserDataLogicDelegate> _delegate;
    MsgNewImgDataLogic *_dataLogic;
    NSMutableSet *_weappSet;
}

@property(retain, nonatomic) NSMutableSet *weappSet; // @synthesize weappSet=_weappSet;
@property(retain, nonatomic) MsgNewImgDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(nonatomic) __weak id <WAMsgBrowserDataLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (id)msgArr;
- (void)fetchData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

