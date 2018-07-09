//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface ShakePeopleStorage : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSMutableArray *m_arrShakeList;
    unsigned long m_uiSoundStatus;
    unsigned long m_uiNewArriveCount;
}

+ (void)initialize;
@property(nonatomic) unsigned long m_uiNewArriveCount; // @synthesize m_uiNewArriveCount;
@property(nonatomic) unsigned long m_uiSoundStatus; // @synthesize m_uiSoundStatus;
@property(retain, nonatomic) NSMutableArray *m_arrShakeList; // @synthesize m_arrShakeList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)preInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

