//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicService.h"

@class NSDictionary;

@interface TBSNSNetService : TBSNSBasicService
{
    int _markT;
    NSDictionary *_params;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int markT; // @synthesize markT=_markT;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)operation;

@end
