//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCPayBusiF2FGetFavorCgiDelegate.h"

@class NSString;

@interface InternalLoadingFavor : NSObject <WCPayBusiF2FGetFavorCgiDelegate>
{
    id <InternalLoadingFavorDelegate> _m_delegate;
}

@property(nonatomic) __weak id <InternalLoadingFavorDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

