//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface BrandTimelineExposeInfo : MMObject
{
    NSString *_bizUsername;
    unsigned int _idx;
    unsigned int _itemIndex;
    unsigned int _exposePos;
    unsigned int _exposeCount;
    unsigned int _exposeBrowseState;
    unsigned int _expandState;
    unsigned int _isExpandDafault;
    unsigned int _createTime;
    unsigned int _exposeTimeStamp;
    unsigned int _isStar;
    unsigned int _isNewMsg;
    unsigned int _msgType;
    NSString *_itemInfoStr;
    NSString *_title;
    unsigned long long _mid;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemInfoStr; // @synthesize itemInfoStr=_itemInfoStr;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int isNewMsg; // @synthesize isNewMsg=_isNewMsg;
@property(nonatomic) unsigned int isStar; // @synthesize isStar=_isStar;
@property(nonatomic) unsigned int exposeTimeStamp; // @synthesize exposeTimeStamp=_exposeTimeStamp;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int isExpandDafault; // @synthesize isExpandDafault=_isExpandDafault;
@property(nonatomic) unsigned int expandState; // @synthesize expandState=_expandState;
@property(nonatomic) unsigned int exposeBrowseState; // @synthesize exposeBrowseState=_exposeBrowseState;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned int exposePos; // @synthesize exposePos=_exposePos;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) unsigned int idx; // @synthesize idx=_idx;
@property(nonatomic) unsigned long long mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
- (void).cxx_destruct;
- (id)initWithItemViewModel:(id)arg1 sectionIndex:(unsigned int)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned long)arg4 isStar:(BOOL)arg5;

@end

