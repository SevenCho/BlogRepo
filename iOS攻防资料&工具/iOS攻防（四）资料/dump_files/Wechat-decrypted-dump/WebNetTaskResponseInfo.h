//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WebNetTaskResponseInfo : NSObject
{
    NSString *m_nsClientMsgID;
    unsigned long m_uiFileLength;
    long m_nRetCode;
    long m_nHttpStatusCode;
    BOOL m_isResumed;
}

@property(nonatomic) BOOL m_isResumed; // @synthesize m_isResumed;
@property(nonatomic) long m_nHttpStatusCode; // @synthesize m_nHttpStatusCode;
@property(nonatomic) long m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned long m_uiFileLength; // @synthesize m_uiFileLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;

@end

