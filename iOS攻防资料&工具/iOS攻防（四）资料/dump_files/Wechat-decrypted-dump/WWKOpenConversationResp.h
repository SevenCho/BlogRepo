//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKBaseResp.h"

#import "WWKApiSerializable.h"

@class NSString;

@interface WWKOpenConversationResp : WWKBaseResp <WWKApiSerializable>
{
}

- (BOOL)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

