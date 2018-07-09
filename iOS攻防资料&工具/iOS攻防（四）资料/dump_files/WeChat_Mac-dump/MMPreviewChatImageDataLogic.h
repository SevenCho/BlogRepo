//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MMPreviewChatImageDataLogic : NSObject
{
    unsigned int m_uiPreLocalID;
    unsigned int m_uiNextLocalID;
    unsigned int m_uiPreMsgCreateTime;
    unsigned int m_uiNextMsgCreateTime;
    NSMutableArray *m_arrPreMsgList;
    NSMutableArray *m_arrNextMsgList;
    NSMutableArray *m_arrMsgList;
    NSString *m_nsChatName;
    unsigned int m_uiPreLoadMsgCount;
    unsigned int m_uiPreReadMsgCount;
    unsigned long long m_preLoadOrder;
    BOOL _m_bLoading;
    BOOL _m_bPreEnd;
    BOOL _m_bNextEnd;
    id <MMPreviewChatImageDataLogicDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MMPreviewChatImageDataLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_bNextEnd; // @synthesize m_bNextEnd=_m_bNextEnd;
@property(nonatomic) BOOL m_bPreEnd; // @synthesize m_bPreEnd=_m_bPreEnd;
@property(nonatomic) BOOL m_bLoading; // @synthesize m_bLoading=_m_bLoading;
- (void).cxx_destruct;
- (void)preLoad:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (id)asyncLoadMore:(BOOL)arg1;
- (BOOL)isMsgMatch:(id)arg1;
- (void)updateMsgArray;
- (id)getMsgFor:(unsigned int)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (void)resetWithCurrentMsg:(id)arg1;
- (id)getNextCurMsg:(id)arg1;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (id)getMsgArray;
- (id)initWithPreLoadCount:(unsigned int)arg1 PreReadCount:(unsigned int)arg2 ChatName:(id)arg3 Order:(unsigned long long)arg4 InitialMessage:(id)arg5;

@end

