//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BackgroundConsumeLogger : NSObject
{
}

+ (id)shareInstance;
- (void)onBgTaskEnd:(unsigned long long)arg1;
- (void)onBgTaskBegin:(unsigned long long)arg1;
- (void)onFetchEnd:(int)arg1;
- (void)onFetchBegin:(int)arg1 curMode:(int)arg2;

@end
