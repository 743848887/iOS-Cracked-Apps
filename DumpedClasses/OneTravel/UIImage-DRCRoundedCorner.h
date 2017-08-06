//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class UIColor;

@interface UIImage (DRCRoundedCorner)
+ (CDStruct_3c058996)transformationRentRadius:(CDStruct_3c058996)arg1 size:(struct CGSize)arg2 borderWidth:(double)arg3;
+ (id)drc_imageWithDRCRoundedCornersAndSize:(struct CGSize)arg1 rentRadius:(CDStruct_3c058996)arg2 borderColor:(id)arg3 borderWidth:(double)arg4 backgroundColor:(id)arg5 backgroundImage:(id)arg6 withContentMode:(long long)arg7;
@property(retain, nonatomic) UIColor *drc_borderColor;
@property(retain, nonatomic) UIColor *drc_pathColor;
@property(nonatomic) double drc_pathWidth;
@property(nonatomic) double drc_borderWidth;
- (struct CGRect)convertRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (void)drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (id)scaleToSize:(struct CGSize)arg1 withContentMode:(long long)arg2 backgroundColor:(id)arg3;
@end
