//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@interface AddPhotoGalleryFavoriteRequest : CTBusinessBean <NSCoding>
{
    int businessId;
    int businessType;
}

@property(nonatomic) int businessType; // @synthesize businessType;
@property(nonatomic) int businessId; // @synthesize businessId;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
