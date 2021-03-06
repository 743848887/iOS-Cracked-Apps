//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KFWebCacheHandle.h"

@class NSDictionary, NSString;

@interface KFWebCacheFileHandle : NSObject <KFWebCacheHandle>
{
    NSString *_urlKey;
    double _timeout;
    NSDictionary *_parameterdic;
}

@property(retain, nonatomic) NSDictionary *parameterdic; // @synthesize parameterdic=_parameterdic;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *urlKey; // @synthesize urlKey=_urlKey;
- (void).cxx_destruct;
- (_Bool)removeWebCachesWithCachePool:(id)arg1;
- (id)identifierOfHandle;
- (id)webCachesDicWithCachePool:(id)arg1;
- (void)deleteCachesFolder;
- (void)uploadCachesInFileWithDic:(id)arg1;
- (id)addWebCacheWithCachePool:(id)arg1 withDic:(id)arg2 isNeedUpLoadFile:(_Bool)arg3 isDeleteFolder:(_Bool)arg4 cacheCreateTime:(id)arg5;
- (void)addWebCacheWithCachePool:(id)arg1 withDic:(id)arg2 isNeedUpLoadFile:(_Bool)arg3 isDeleteFolder:(_Bool)arg4;
- (id)initWithUrlKey:(id)arg1 timeout:(double)arg2 parameterDic:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

