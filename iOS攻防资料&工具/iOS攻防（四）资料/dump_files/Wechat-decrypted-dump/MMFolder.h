//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface MMFolder : NSObject <PBCoding>
{
    NSString *name;
    NSMutableArray *subFiles;
    NSMutableArray *subFolders;
    int _level;
    long long size;
}

+ (void)initialize;
@property int level; // @synthesize level=_level;
@property(retain) NSMutableArray *subFolders; // @synthesize subFolders;
@property(retain) NSMutableArray *subFiles; // @synthesize subFiles;
@property long long size; // @synthesize size;
@property(retain) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

