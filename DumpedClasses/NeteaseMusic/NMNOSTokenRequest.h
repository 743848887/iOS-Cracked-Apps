//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMNOSTokenRequest : NMBaseRequest
{
    _Bool _isUsingVideoCloud;
    NSString *_uploadFilePath;
    unsigned long long _uploadType;
}

@property(readonly, nonatomic) _Bool isUsingVideoCloud; // @synthesize isUsingVideoCloud=_isUsingVideoCloud;
@property(readonly, nonatomic) unsigned long long uploadType; // @synthesize uploadType=_uploadType;
@property(readonly, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1 type:(unsigned long long)arg2;

@end
