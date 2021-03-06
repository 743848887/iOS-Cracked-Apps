//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface QQURLCache : NSURLCache
{
    _Bool _isFetchingToken;
    NSString *_tokenRequestAppID;
    NSString *_tokenRequestParameterString;
    NSObject<OS_dispatch_queue> *_urlCacheQueue;
    NSMutableDictionary *_requestBeginTimeDict;
    NSTimer *_failedUrlCheckTimer;
}

+ (_Bool)isSupportOfflineApp:(id)arg1;
+ (id)mimeTypeForURL:(id)arg1;
+ (void)activateOnUse;
+ (void)activateOnLoginSuccess;
+ (void)activate_ios7;
+ (void)activate;
+ (id)getInstance;
- (id)responseWithURL:(id)arg1 withContent:(id)arg2 mimeType:(id)arg3;
- (id)cachedResponseForRequest:(id)arg1;
- (void)removeRequestRecord:(id)arg1 cachedResponse:(id)arg2;
- (void)removeAllCachedResponses;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)peroidUrlFailCheck;
- (void)dealloc;
- (void)resetParams;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;

@end

