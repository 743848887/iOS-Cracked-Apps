//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CFT_TPMonitorItem : NSObject
{
    _Bool _changed;
    _Bool _persist;
    int _tag;
    id _handle;
    SEL _callback;
}

@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool persist; // @synthesize persist=_persist;
@property(nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(nonatomic) SEL callback; // @synthesize callback=_callback;
@property(nonatomic) id handle; // @synthesize handle=_handle;
- (id)initWithTag:(int)arg1 target:(id)arg2 callback:(SEL)arg3 persist:(_Bool)arg4;

@end
