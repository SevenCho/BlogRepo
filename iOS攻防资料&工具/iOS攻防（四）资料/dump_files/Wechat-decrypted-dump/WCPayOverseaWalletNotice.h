//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface WCPayOverseaWalletNotice : NSObject <PBCoding>
{
    NSData *conent;
    NSData *url;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *url; // @synthesize url;
@property(retain, nonatomic) NSData *conent; // @synthesize conent;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

