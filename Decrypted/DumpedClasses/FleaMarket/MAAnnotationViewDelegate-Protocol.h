//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAAnnotationView, UIControl;

@protocol MAAnnotationViewDelegate <NSObject>
- (struct CLLocationCoordinate2D)coordinateFromMapviewPoint:(struct CGPoint)arg1;
- (struct CGRect)annotationVisibleRect;
- (struct CGAffineTransform)annotationViewGetMapTransform:(MAAnnotationView *)arg1;
- (void)annotationView:(MAAnnotationView *)arg1 calloutAccessoryControlTapped:(UIControl *)arg2;
@end
