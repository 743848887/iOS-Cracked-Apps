//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FalconVoice : NSObject
{
    struct EliminateNoise *_pElimi;
}

@property(nonatomic) struct EliminateNoise *pElimi; // @synthesize pElimi=_pElimi;
- (void)dealloc;
- (id)eliminateNoise:(id)arg1 bfinish:(_Bool)arg2;
- (id)initWithSampleRate:(int)arg1 packet:(int)arg2 maxsec:(int)arg3;

@end
