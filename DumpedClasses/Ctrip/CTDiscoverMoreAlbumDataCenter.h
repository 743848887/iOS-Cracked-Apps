//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTDiscoverMoreAlbumDataCenter : NSObject
{
    NSMutableArray *_albumArray;
}

+ (void)trimData;
+ (void)clearData;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *albumArray; // @synthesize albumArray=_albumArray;
- (void).cxx_destruct;

@end
