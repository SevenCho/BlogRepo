//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface WCCardLayoutStorage : MMObject <PBCoding>
{
    NSMutableArray *expiringList;
    NSMutableArray *memberCardList;
    NSMutableArray *nearbyList;
    NSMutableArray *recentList;
    NSMutableArray *labelList;
    NSMutableArray *firstList;
    NSString *layoutBuff;
    BOOL bShowLayoutRed;
    unsigned long layoutRedEndTime;
    NSString *layoutTip;
    unsigned long layoutUpdateTime;
    NSString *entrySubTitle;
    unsigned long topScene;
    NSMutableArray *_labelList;
    NSMutableArray *_firstList;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *firstList; // @synthesize firstList=_firstList;
@property(retain, nonatomic) NSMutableArray *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) NSMutableArray *recentList; // @synthesize recentList;
@property(nonatomic) unsigned long topScene; // @synthesize topScene;
@property(retain, nonatomic) NSString *entrySubTitle; // @synthesize entrySubTitle;
@property(nonatomic) unsigned long layoutUpdateTime; // @synthesize layoutUpdateTime;
@property(retain, nonatomic) NSString *layoutTip; // @synthesize layoutTip;
@property(nonatomic) unsigned long layoutRedEndTime; // @synthesize layoutRedEndTime;
@property(nonatomic) BOOL bShowLayoutRed; // @synthesize bShowLayoutRed;
@property(retain, nonatomic) NSString *layoutBuff; // @synthesize layoutBuff;
@property(retain, nonatomic) NSMutableArray *nearbyList; // @synthesize nearbyList;
@property(retain, nonatomic) NSMutableArray *memberCardList; // @synthesize memberCardList;
@property(retain, nonatomic) NSMutableArray *expiringList; // @synthesize expiringList;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

