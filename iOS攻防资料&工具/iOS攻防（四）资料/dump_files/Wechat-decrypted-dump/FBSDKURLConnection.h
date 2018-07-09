//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSString, NSURLConnection, NSURLResponse;

@interface FBSDKURLConnection : NSObject <NSURLConnectionDataDelegate>
{
    id <FBSDKURLConnectionDelegate> _delegate;
    NSURLConnection *_connection;
    NSMutableData *_data;
    CDUnknownBlockType _handler;
    NSURLResponse *_response;
    unsigned long _requestStartTime;
    unsigned int _loggerSerialNumber;
}

@property(readonly, nonatomic) unsigned int loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
@property(nonatomic) unsigned long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) id <FBSDKURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)invokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 response:(id)arg2 responseData:(id)arg3;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)init;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

