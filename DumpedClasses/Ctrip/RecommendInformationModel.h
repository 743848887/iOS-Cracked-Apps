//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface RecommendInformationModel : CTBusinessBean
{
    int _recommendType;
    int _eliminateConditionItems;
}

@property(nonatomic) int eliminateConditionItems; // @synthesize eliminateConditionItems=_eliminateConditionItems;
@property(nonatomic) int recommendType; // @synthesize recommendType=_recommendType;
- (id)getPBAnnotationArray;
- (id)init;

@end
