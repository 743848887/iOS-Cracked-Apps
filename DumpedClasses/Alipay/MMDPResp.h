//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface MMDPResp : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasTraceid;
    _Bool _hasFileid;
    _Bool _hasTimestamp;
    _Bool _hasErrcode;
    _Bool _hasFilemd5;
    _Bool _hasFilelength;
    _Bool _hasFileoffset;
    _Bool _hasDatalength;
    unsigned int _errcode;
    unsigned int _filelength;
    unsigned int _fileoffset;
    unsigned int _datalength;
    NSString *_traceid;
    NSString *_fileid;
    unsigned long long _timestamp;
    NSString *_filemd5;
    NSMutableArray *_extra;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *extra; // @synthesize extra=_extra;
@property(nonatomic) unsigned int datalength; // @synthesize datalength=_datalength;
@property(nonatomic) unsigned int fileoffset; // @synthesize fileoffset=_fileoffset;
@property(nonatomic) unsigned int filelength; // @synthesize filelength=_filelength;
@property(retain, nonatomic) NSString *filemd5; // @synthesize filemd5=_filemd5;
@property(nonatomic) unsigned int errcode; // @synthesize errcode=_errcode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *fileid; // @synthesize fileid=_fileid;
@property(retain, nonatomic) NSString *traceid; // @synthesize traceid=_traceid;
@property(readonly) _Bool hasDatalength; // @synthesize hasDatalength=_hasDatalength;
@property(readonly) _Bool hasFileoffset; // @synthesize hasFileoffset=_hasFileoffset;
@property(readonly) _Bool hasFilelength; // @synthesize hasFilelength=_hasFilelength;
@property(readonly) _Bool hasFilemd5; // @synthesize hasFilemd5=_hasFilemd5;
@property(readonly) _Bool hasErrcode; // @synthesize hasErrcode=_hasErrcode;
@property(readonly) _Bool hasTimestamp; // @synthesize hasTimestamp=_hasTimestamp;
@property(readonly) _Bool hasFileid; // @synthesize hasFileid=_hasFileid;
@property(readonly) _Bool hasTraceid; // @synthesize hasTraceid=_hasTraceid;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtra:(id)arg1;
- (void)setExtraArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
