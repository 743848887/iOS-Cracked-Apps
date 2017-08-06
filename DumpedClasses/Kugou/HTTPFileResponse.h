//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class NSFileHandle, NSString;

@interface HTTPFileResponse : NSObject <HTTPResponse>
{
    NSString *filePath;
    NSFileHandle *fileHandle;
}

- (id)filePath;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end
