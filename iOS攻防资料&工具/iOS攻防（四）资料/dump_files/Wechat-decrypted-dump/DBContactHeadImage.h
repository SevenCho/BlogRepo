//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSString;

@interface DBContactHeadImage : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned long imgHDStatus;
    NSString *headImgUrl;
    NSString *headHDImgUrl;
    NSString *headHDMd5;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *headHDMd5; // @synthesize headHDMd5;
@property(retain, nonatomic) NSString *headHDImgUrl; // @synthesize headHDImgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(nonatomic) unsigned long imgHDStatus; // @synthesize imgHDStatus;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

