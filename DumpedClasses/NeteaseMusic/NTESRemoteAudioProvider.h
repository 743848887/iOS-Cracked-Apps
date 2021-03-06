//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTESFileAudioProvider.h"

#import "NSURLSessionDataDelegate.h"
#import "NTESAudioDecoderDelegate.h"

@class NSArray, NSDictionary, NSHTTPURLResponse, NSOperationQueue, NSString, NSURLSession, NSURLSessionDataTask, NTESAudioCacheFile, NTESAudioDecoder, NTESAudioNormalizer;

@interface NTESRemoteAudioProvider : NTESFileAudioProvider <NTESAudioDecoderDelegate, NSURLSessionDataDelegate>
{
    NSArray *_timeoutSettings;
    struct _opaque_pthread_mutex_t _mutex;
    NSString *_cacheDirectory;
    NSString *_fileName;
    NSString *_filePath;
    unsigned long long _expectedFileLength;
    NTESAudioCacheFile *_cacheFile;
    unsigned long long _preloadDataLength;
    unsigned long long _downloadSpeed;
    double _bufferingPercent;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _waitingForDecode;
    _Bool _waitingForDownload;
    _Bool _downloading;
    _Bool _preloading;
    _Bool _isNetworkFailed;
    _Bool _isCacheCreationFailed;
    _Bool _isCacheWriteDataFailed;
    _Bool _isDataParseFailed;
    _Bool _stopped;
    _Bool _requiresCompleteFile;
    unsigned long long _checkOffset;
    unsigned long long _offset;
    unsigned long long _receivedLength;
    unsigned long long _retryTimes;
    unsigned long long _bytesUpboundPerLoad;
    double _lastRequestTime;
    _Bool _continueLoadDataWhenPause;
    NSArray *_cookies;
    NSDictionary *_headers;
    double _startedTime;
    double _responseTime;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_session;
    NSOperationQueue *_delegateQueue;
    NSHTTPURLResponse *_response;
    _Bool _temporaryCacheFile;
    NTESAudioDecoder *_decoder;
    NTESAudioNormalizer *_normalizer;
    NSArray *_acceptedMIMEType;
    NSDictionary *_proxyDictionary;
    NSArray *_protocolClasses;
}

+ (id)providerWithUrls:(id)arg1 cacheDirectory:(id)arg2 fileName:(id)arg3 expectedFileLength:(unsigned long long)arg4 defaultFileExtension:(unsigned long long)arg5 encryptor:(id)arg6;
+ (id)providerWithUrls:(id)arg1 cacheDirectory:(id)arg2 fileName:(id)arg3 expectedFileLength:(unsigned long long)arg4 defaultFileExtension:(unsigned long long)arg5;
+ (id)providerWithUrls:(id)arg1 expectedFileLength:(unsigned long long)arg2 defaultFileExtension:(unsigned long long)arg3 encryptor:(id)arg4;
+ (id)providerWithUrls:(id)arg1 expectedFileLength:(unsigned long long)arg2 defaultFileExtension:(unsigned long long)arg3;
+ (id)indexFileExtension;
+ (id)cacheFileExtension;
@property(copy, nonatomic) NSArray *protocolClasses; // @synthesize protocolClasses=_protocolClasses;
@property(copy, nonatomic) NSDictionary *proxyDictionary; // @synthesize proxyDictionary=_proxyDictionary;
@property(copy, nonatomic) NSArray *acceptedMIMEType; // @synthesize acceptedMIMEType=_acceptedMIMEType;
@property(nonatomic) _Bool continueLoadDataWhenPause; // @synthesize continueLoadDataWhenPause=_continueLoadDataWhenPause;
@property(nonatomic) unsigned long long bytesUpboundPerLoad; // @synthesize bytesUpboundPerLoad=_bytesUpboundPerLoad;
@property(nonatomic) unsigned long long preloadDataLength; // @synthesize preloadDataLength=_preloadDataLength;
@property(nonatomic) double bufferingPercent; // @synthesize bufferingPercent=_bufferingPercent;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(copy, nonatomic) NSArray *timeoutSettings; // @synthesize timeoutSettings=_timeoutSettings;
@property(readonly, nonatomic) _Bool preloading; // @synthesize preloading=_preloading;
@property(readonly, nonatomic) unsigned long long expectedFileLength; // @synthesize expectedFileLength=_expectedFileLength;
- (void).cxx_destruct;
- (void)clean;
- (void)stop;
- (_Bool)readBytes:(void *)arg1 length:(unsigned long long *)arg2 sampleNumber:(unsigned long long *)arg3 sampleIndex:(unsigned long long *)arg4;
- (void)seekToTime:(double)arg1;
- (_Bool)prepareToProvide;
- (void)streamerTriggerPause;
- (_Bool)checkWaitingForData;
- (void)loadData;
- (unsigned long long)currentSampleIndex;
- (double)duration;
- (_Bool)reloadDataWhenSwithing;
- (_Bool)finished;
- (_Bool)complete;
- (_Bool)waiting;
- (_Bool)seekable;
- (_Bool)readyToSeek;
- (_Bool)ready;
- (_Bool)cancelled;
- (_Bool)failed;
- (void)resetFailMark;
- (_Bool)isNetworkFailed;
- (long long)source;
- (void)decoderMetaDataDecodeFailed:(id)arg1;
- (void)decoderMetaDataDecodeFinished:(id)arg1;
- (void)decoderMetaDataDecoding:(id)arg1;
- (void)setDataDelegate:(id)arg1;
- (void)createDecoderIfNeeded;
@property(readonly, nonatomic) NSString *cacheIndexPath; // @dynamic cacheIndexPath;
@property(readonly, nonatomic) NSString *cacheFilePath; // @dynamic cacheFilePath;
- (void)updateBufferingPercent;
@property(readonly, nonatomic) unsigned long long downloadSpeed; // @dynamic downloadSpeed;
@property(readonly, nonatomic) unsigned long long expectedDownloadSpeed;
@property(readonly, copy, nonatomic) NSArray *urls; // @dynamic urls;
- (void)handleErrorWithDataTask:(id)arg1 didFailWithError:(id)arg2;
- (void)handleCompleteWithDataTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)checkResponse;
- (_Bool)checkResponseHeader;
- (long long)fileLengthFromResponse;
- (void)handleRequestFailed:(_Bool)arg1;
- (void)downloadDataFromOffsetInternal:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)continueDownloadIfNeeded:(_Bool)arg1;
- (void)downloadDataFromOffset:(unsigned long long)arg1 resetRetry:(_Bool)arg2;
- (void)downloadDataFromOffset:(unsigned long long)arg1;
- (void)finishLoadData:(id)arg1;
- (_Bool)saveData:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)stopLoadData;
- (void)cancelLoadDataInternal;
- (void)cancelLoadData;
- (void)loadDataInternal;
- (void)preloadData;
- (void)dealloc;
- (id)initWithUrls:(id)arg1 cacheDirectory:(id)arg2 fileName:(id)arg3 expectedFileLength:(unsigned long long)arg4 defaultFileExtension:(unsigned long long)arg5 encryptor:(id)arg6;
- (id)initWithUrls:(id)arg1 cacheDirectory:(id)arg2 fileName:(id)arg3 expectedFileLength:(unsigned long long)arg4 defaultFileExtension:(unsigned long long)arg5;
- (id)initWithUrls:(id)arg1 expectedFileLength:(unsigned long long)arg2 defaultFileExtension:(unsigned long long)arg3 encryptor:(id)arg4;
- (id)initWithUrls:(id)arg1 expectedFileLength:(unsigned long long)arg2 defaultFileExtension:(unsigned long long)arg3;
- (id)initWithUrls:(id)arg1 defaultFileExtension:(unsigned long long)arg2 encryptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NTESRemoteAudioProviderDownloadDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

