//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TADBreakPoint : NSObject
{
    _Bool _oneTime;
    double _start;
    double _end;
    long long _type;
    long long _anchorid;
}

@property(nonatomic) long long anchorid; // @synthesize anchorid=_anchorid;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool oneTime; // @synthesize oneTime=_oneTime;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;

@end

