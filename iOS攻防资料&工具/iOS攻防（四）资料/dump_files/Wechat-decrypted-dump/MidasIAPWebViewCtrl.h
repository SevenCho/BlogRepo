//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasIAPBaseViewCtrl.h"

@class NSString, UIWebView;

@interface MidasIAPWebViewCtrl : MidasIAPBaseViewCtrl
{
    NSString *reqUrl;
    UIWebView *webView;
}

@property(nonatomic) __weak UIWebView *webView; // @synthesize webView;
@property(retain, nonatomic) NSString *reqUrl; // @synthesize reqUrl;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)reload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)onBack:(BOOL)arg1;

@end

