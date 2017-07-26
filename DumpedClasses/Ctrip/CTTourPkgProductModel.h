//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSArray, NSString;

@interface CTTourPkgProductModel : CTJSONModel
{
    NSString *_productId;
    NSString *_title;
    NSString *_img;
    NSString *_level;
    NSString *_minPrice;
    NSString *_departCityId;
    NSArray *_specialTagList;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *specialTagList; // @synthesize specialTagList=_specialTagList;
@property(copy, nonatomic) NSString *departCityId; // @synthesize departCityId=_departCityId;
@property(copy, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end
