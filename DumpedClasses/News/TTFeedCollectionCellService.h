//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet;

@interface TTFeedCollectionCellService : NSObject
{
    Class _defalutCellHeperClass;
    NSMutableOrderedSet *_cellHelperSet;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableOrderedSet *cellHelperSet; // @synthesize cellHelperSet=_cellHelperSet;
@property(retain, nonatomic) Class defalutCellHeperClass; // @synthesize defalutCellHeperClass=_defalutCellHeperClass;
- (void).cxx_destruct;
- (void)enumerateCellClassUsingBlock:(CDUnknownBlockType)arg1;
- (Class)cellClassFromFeedCategory:(id)arg1;
- (void)registerFeedCollectionCellHelperClass:(Class)arg1;
- (void)setDefaultFeedCollectionCellHelperClass:(Class)arg1;
- (id)init;

@end

