//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItemDelegate.h"

@class CountryCodeWrap, WCPayCountryCodeItem;

@protocol WCPayCountryCodeItemDelegate <WCBaseInfoItemDelegate>
- (void)countryCodeItem:(WCPayCountryCodeItem *)arg1 isCountryCodeValid:(BOOL)arg2;
- (void)countryCodeItem:(WCPayCountryCodeItem *)arg1 didSelectCountryCode:(CountryCodeWrap *)arg2;
@end

