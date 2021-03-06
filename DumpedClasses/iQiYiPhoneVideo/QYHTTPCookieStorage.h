//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView;

@interface QYHTTPCookieStorage : NSObject <WKNavigationDelegate>
{
    WKWebView *_webView;
    NSString *_js;
    CDUnknownBlockType _block;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setCookieWithProperties:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

