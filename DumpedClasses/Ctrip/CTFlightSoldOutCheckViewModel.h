//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface CTFlightSoldOutCheckViewModel : CTViewModel
{
    int _segmentNo;
    long long _seatNumberLeft;
    NSString *_soldOutMessage;
}

@property(copy, nonatomic) NSString *soldOutMessage; // @synthesize soldOutMessage=_soldOutMessage;
@property(nonatomic) long long seatNumberLeft; // @synthesize seatNumberLeft=_seatNumberLeft;
@property(nonatomic) int segmentNo; // @synthesize segmentNo=_segmentNo;
- (void).cxx_destruct;
- (void)setUpWithProtoModel:(id)arg1;

@end

