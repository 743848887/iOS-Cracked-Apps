//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface VZFViewReusePoolManager : NSObject
{
    NSMutableDictionary *_reusePoolMap;
    struct vector<UIView *, std::__1::allocator<UIView *>> _existedViews;
}

+ (id)viewReusePoolManagerForView:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)viewForNode:(id)arg1 ParentView:(id)arg2 Frame:(struct CGRect)arg3;
- (void)reset:(id)arg1;
- (id)init;

@end
