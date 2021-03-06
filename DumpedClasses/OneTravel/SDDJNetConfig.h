//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SDDJNetConfig : NSObject
{
    NSArray *_localConfigData;
    long long _curNetEnvironment;
}

+ (id)sharedInstance;
@property(nonatomic) long long curNetEnvironment; // @synthesize curNetEnvironment=_curNetEnvironment;
@property(copy, nonatomic) NSArray *localConfigData; // @synthesize localConfigData=_localConfigData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nodeURL;
- (id)baseH5URL;
@property(readonly, copy, nonatomic) NSString *tcpPort;
@property(readonly, copy, nonatomic) NSString *tcpHost;
@property(readonly, copy, nonatomic) NSString *httpsPort;
@property(readonly, copy, nonatomic) NSString *httpPort;
@property(readonly, copy, nonatomic) NSString *httpHost;
@property(readonly, copy, nonatomic) NSString *appSecKey;
@property(readonly, copy, nonatomic) NSString *appKey;
- (id)curConfigData;
- (void)switchNetConfig:(long long)arg1;
- (void)didOneTravelConfigEnvironmentChanged:(id)arg1;
- (id)init;

@end

