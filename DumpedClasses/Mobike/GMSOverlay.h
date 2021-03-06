//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GMSEntityAccessibleUIItem.h"
#import "NSCopying.h"

@class GMSMapView, NSString;

@interface GMSOverlay : NSObject <GMSEntityAccessibleUIItem, NSCopying>
{
    _Bool _tappable;
    int _zIndex;
    id <GMSAccessibilityContainer> _accessibilityContainer;
    NSString *_title;
    GMSMapView *_map;
    unsigned long long _overlayID;
    id <GMSOverlayManager> _manager;
}

@property(nonatomic) __weak id <GMSOverlayManager> manager; // @synthesize manager=_manager;
@property(nonatomic) unsigned long long overlayID; // @synthesize overlayID=_overlayID;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic, getter=isTappable) _Bool tappable; // @synthesize tappable=_tappable;
@property(nonatomic) __weak GMSMapView *map; // @synthesize map=_map;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <GMSAccessibilityContainer> accessibilityContainer; // @synthesize accessibilityContainer=_accessibilityContainer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (_Bool)isAccessibilityElement;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
@property(readonly, nonatomic) NSString *accessibilityIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)updateOnMap;
- (int)type;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(readonly, nonatomic) unsigned long long accessibilityTraits; // @dynamic accessibilityTraits;
@property(readonly, nonatomic) NSString *accessibilityValue; // @dynamic accessibilityValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

