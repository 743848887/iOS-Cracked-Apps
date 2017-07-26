//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EZCamera, EZScene, NSMutableArray;

@interface WXRDMEventPatchCenter : NSObject
{
    NSMutableArray *touchingNodes;
    _Bool _enable;
    EZScene *_scene;
    EZCamera *_camera;
}

@property(nonatomic) __weak EZCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) __weak EZScene *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (void)pickAll:(id)arg1 rayPoint:(float *)arg2 rayDirect:(float *)arg3 result:(id)arg4;
- (id)pickNodesAtRayPoint:(float *)arg1 direction:(float *)arg2;
- (void)handleLongPress:(id)arg1 screenSize:(struct CGSize)arg2 pressPoint:(struct CGPoint)arg3;
- (void)detectAll:(id)arg1 rayPoint:(float *)arg2 rayDirect:(float *)arg3;
- (void)handleTapWithScreenSize:(struct CGSize)arg1 tapPoint:(struct CGPoint)arg2;
- (id)init;

@end
