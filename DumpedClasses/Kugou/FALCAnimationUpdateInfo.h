//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSMutableArray<FALCAnimationInfo>;

@interface FALCAnimationUpdateInfo : FAModel
{
    long long _maxVersion;
    NSMutableArray<FALCAnimationInfo> *_bigGiftList;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSMutableArray<FALCAnimationInfo> *bigGiftList; // @synthesize bigGiftList=_bigGiftList;
@property(nonatomic) long long maxVersion; // @synthesize maxVersion=_maxVersion;
- (void).cxx_destruct;

@end

