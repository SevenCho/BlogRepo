//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLAuthenticationChallenge, WKNavigation, WKNavigationAction, WKNavigationResponse, WKWebView;

@protocol WKNavigationDelegate <NSObject>

@optional
- (void)webViewWebContentProcessDidTerminate:(WKWebView *)arg1;
- (void)webView:(WKWebView *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(int, NSURLCredential *))arg3;
- (void)webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(int))arg3;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(int))arg3;
@end

