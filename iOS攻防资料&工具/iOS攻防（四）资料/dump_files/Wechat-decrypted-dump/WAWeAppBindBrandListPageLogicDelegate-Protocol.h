//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol WAWeAppBindBrandListPageLogicDelegate <NSObject>
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)didFinishFetchNextPageItems:(NSMutableArray *)arg1 pageNum:(unsigned long)arg2 beginPos:(unsigned int)arg3;
@end

