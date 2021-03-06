//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTESAudioProvider.h"

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVURLAsset, NSLock, NSMutableDictionary, NSURL, NTESAudioBuffer;

@interface NTESMediaLibAudioProvider : NTESAudioProvider
{
    NSLock *_lock;
    struct _opaque_pthread_mutex_t _waitMutex;
    struct _opaque_pthread_cond_t _wait;
    _Bool _failed;
    _Bool _finished;
    long long _retryCount;
    NSURL *_url;
    AVURLAsset *_asset;
    AVAssetTrack *_track;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_output;
    struct AudioStreamBasicDescription _outputFormat;
    NSMutableDictionary *_outputFormatDic;
    CDStruct_1b6d18a9 _readTimeOffset;
    unsigned long long _sampleIndex;
    unsigned long long _duration;
    unsigned long long _sampleCount;
    NTESAudioBuffer *_buffer;
    _Bool _stopped;
}

+ (id)providerWithURL:(id)arg1;
+ (id)providerWithMediaItem:(id)arg1;
+ (struct AudioStreamBasicDescription)trackFormat:(id)arg1;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)signal;
- (void)wait;
- (void)clean;
- (void)stop;
- (void)cleanInternal;
- (_Bool)readBytes:(void *)arg1 length:(unsigned long long *)arg2 sampleNumber:(unsigned long long *)arg3 sampleIndex:(unsigned long long *)arg4;
- (void)seekToTime:(double)arg1;
- (_Bool)prepareToProvide;
- (_Bool)checkWaitingForData;
- (void)loadData;
- (unsigned long long)currentSampleIndex;
- (double)duration;
- (_Bool)reloadDataWhenSwithing;
- (double)bufferingPercent;
- (_Bool)waiting;
- (_Bool)cancelled;
- (_Bool)failed;
- (_Bool)finished;
- (_Bool)seekable;
- (_Bool)readyToSeek;
- (_Bool)ready;
- (_Bool)complete;
- (long long)source;
- (void)loadDataInternal;
- (_Bool)createReader;
- (CDStruct_1b6d18a9)convertSampleToCMTime:(unsigned long long)arg1;
- (CDStruct_1b6d18a9)secondsToCMTime:(double)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithMediaItem:(id)arg1;

@end

