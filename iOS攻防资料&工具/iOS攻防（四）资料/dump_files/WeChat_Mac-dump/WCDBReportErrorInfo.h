//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCDBReportErrorInfo : NSObject
{
    int _type;
    int _code;
    int _tag;
    int _op;
    int _extcode;
    NSString *_msg;
    NSString *_sql;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int extcode; // @synthesize extcode=_extcode;
@property(nonatomic) int op; // @synthesize op=_op;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) int code; // @synthesize code=_code;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

