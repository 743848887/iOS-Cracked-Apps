//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DiOverlayPathView.h"

@class DiPolyline;

@interface DiPolylineView : DiOverlayPathView
{
    DiPolyline *_polyline;
}

@property(readonly, nonatomic) DiPolyline *polyline; // @synthesize polyline=_polyline;
- (void)dealloc;
- (id)initWithPolyline:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
