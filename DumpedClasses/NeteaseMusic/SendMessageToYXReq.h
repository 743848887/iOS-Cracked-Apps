//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YXBaseReq.h"

@class NSString, YXMediaMessage;

@interface SendMessageToYXReq : YXBaseReq
{
    _Bool _bText;
    int _scene;
    NSString *_text;
    YXMediaMessage *_message;
    NSString *_comment;
    id _internalData;
}

@property(retain, nonatomic) id internalData; // @synthesize internalData=_internalData;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) YXMediaMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool bText; // @synthesize bText=_bText;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (_Bool)isValid;
- (id)stringifyToJSONString;
- (void)decodeFromNSDict:(id)arg1;
- (id)encodeToNSDict;
- (void)dealloc;
- (id)init;

@end
