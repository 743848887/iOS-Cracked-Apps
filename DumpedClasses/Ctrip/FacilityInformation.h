//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FacilityInformation : CTBusinessBean
{
    _Bool _isCategory;
    int _id;
    int _parentId;
    NSString *_categoryName;
    NSString *_facilityId;
    NSString *_facilityName;
    NSString *_facilityDesc;
}

@property(copy, nonatomic) NSString *facilityDesc; // @synthesize facilityDesc=_facilityDesc;
@property(copy, nonatomic) NSString *facilityName; // @synthesize facilityName=_facilityName;
@property(copy, nonatomic) NSString *facilityId; // @synthesize facilityId=_facilityId;
@property(nonatomic) _Bool isCategory; // @synthesize isCategory=_isCategory;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) int parentId; // @synthesize parentId=_parentId;
@property(nonatomic) int id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
