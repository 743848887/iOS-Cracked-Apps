//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDictStorage.h"

@class NSMutableDictionary;

@interface HCPttMessageStorage : GSDictStorage
{
    NSMutableDictionary *_pttMessageCaches;
}

@property(retain, nonatomic) NSMutableDictionary *pttMessageCaches; // @synthesize pttMessageCaches=_pttMessageCaches;
- (void).cxx_destruct;
- (_Bool)messageHasRead:(id)arg1;
- (id)getPttMessageModel:(long long)arg1;
- (void)addMessage:(id)arg1;
- (void)save;
- (void)load;
- (_Bool)shouldSeparateWithUin;
- (id)storageKey;

@end

