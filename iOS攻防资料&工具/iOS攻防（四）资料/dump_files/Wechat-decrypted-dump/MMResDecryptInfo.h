//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMResDecryptUrlInfo, NSString;

@interface MMResDecryptInfo : MMObject
{
    unsigned long _resType;
    unsigned long _subResType;
    unsigned long _eid;
    unsigned long _scene;
    NSString *_sampleId;
    unsigned long _reportId;
    MMResDecryptUrlInfo *_resDecryptInfo;
}

@property(retain, nonatomic) MMResDecryptUrlInfo *resDecryptInfo; // @synthesize resDecryptInfo=_resDecryptInfo;
@property(nonatomic) unsigned long reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) unsigned long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long eid; // @synthesize eid=_eid;
@property(nonatomic) unsigned long subResType; // @synthesize subResType=_subResType;
@property(nonatomic) unsigned long resType; // @synthesize resType=_resType;
- (void).cxx_destruct;
- (void)dealloc;

@end

