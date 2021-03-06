//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DeviceService.h"

#import "ExternalInputControl.h"
#import "KeyControl.h"
#import "Launcher.h"
#import "MediaControl.h"
#import "MediaPlayer.h"
#import "MouseControl.h"
#import "PlayListControl.h"
#import "PowerControl.h"
#import "TVControl.h"
#import "TextInputControl.h"
#import "ToastControl.h"
#import "UIAlertViewDelegate.h"
#import "VolumeControl.h"
#import "WebAppLauncher.h"
#import "WebOSTVServiceSocketClientDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, ServiceDescription, UIAlertView, WebOSTVServiceConfig, WebOSTVServiceMouse, WebOSTVServiceSocketClient;

@interface WebOSTVService : DeviceService <UIAlertViewDelegate, WebOSTVServiceSocketClientDelegate, Launcher, MediaPlayer, MediaControl, VolumeControl, TVControl, KeyControl, MouseControl, PowerControl, WebAppLauncher, ExternalInputControl, ToastControl, TextInputControl, PlayListControl>
{
    NSArray *_permissions;
    NSMutableDictionary *_webAppSessions;
    NSMutableDictionary *_appToAppIdMappings;
    NSTimer *_pairingTimer;
    UIAlertView *_pairingAlert;
    NSMutableArray *_keyboardQueue;
    _Bool _keyboardQueueProcessing;
    _Bool _mouseInit;
    UIAlertView *_pinAlertView;
    int _pairingType;
    ServiceDescription *_serviceDescription;
    WebOSTVServiceSocketClient *_socket;
    WebOSTVServiceMouse *_mouseSocket;
    id <ServiceCommandDelegate> _serviceCommandDelegate;
}

+ (id)externalInputInfoFromDictionary:(id)arg1;
+ (id)appInfoFromDictionary:(id)arg1;
+ (id)channelInfoFromDictionary:(id)arg1;
+ (id)discoveryParameters;
@property(retain, nonatomic) id <ServiceCommandDelegate> serviceCommandDelegate; // @synthesize serviceCommandDelegate=_serviceCommandDelegate;
@property(readonly, nonatomic) WebOSTVServiceMouse *mouseSocket; // @synthesize mouseSocket=_mouseSocket;
@property(readonly, nonatomic) WebOSTVServiceSocketClient *socket; // @synthesize socket=_socket;
- (id)serviceDescription;
- (void).cxx_destruct;
- (id)createWebAppSessionWithLaunchSession:(id)arg1 andService:(id)arg2;
- (void)getSystemInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getServiceListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)showToastWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)showClickableToast:(id)arg1 URL:(id)arg2 iconData:(id)arg3 iconExtension:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)showClickableToast:(id)arg1 URL:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)showClickableToast:(id)arg1 appInfo:(id)arg2 params:(id)arg3 iconData:(id)arg4 iconExtension:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)showClickableToast:(id)arg1 appInfo:(id)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)showToast:(id)arg1 iconData:(id)arg2 iconExtension:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)showToast:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (int)toastControlPriority;
- (id)toastControl;
- (id)subscribeTextInputStatusWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)sendKeys;
- (void)sendDeleteWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)sendEnterWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)sendText:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (int)textInputControlPriority;
- (id)textInputControl;
@property(readonly, nonatomic) NSDictionary *webAppSessions;
@property(readonly, nonatomic) NSDictionary *appToAppIdMappings;
- (id)webAppSessionForLaunchSession:(id)arg1;
- (void)sendPairingKey:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)subscribeIsWebAppPinned:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)isWebAppPinned:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)unPinWebApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)pinWebApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)connectToWebApp:(id)arg1 joinOnly:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)joinWebAppWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)joinWebApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)closeWebApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchWebApp:(id)arg1 params:(id)arg2 relaunchIfRunning:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)launchWebApp:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)launchWebApp:(id)arg1 relaunchIfRunning:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)launchWebApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (int)webAppLauncherPriority;
- (id)webAppLauncher;
- (void)powerOnWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)powerOffWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)powerControlPriority;
- (id)powerControl;
- (void)clickWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)scroll:(struct CGVector)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)move:(struct CGVector)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)disconnectMouse;
- (void)connectMouseWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)mouseControlPriority;
- (id)mouseControl;
- (void)sendKeyCode:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)homeWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)backWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)okWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)rightWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)leftWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)downWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)upWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)sendMouseButton:(int)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (int)keyControlPriority;
- (id)keyControl;
- (id)subscribe3DEnabledWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)set3DEnabled:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)get3DEnabledWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribeProgramListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getProgramListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribeProgramInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getProgramInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setChannel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)channelDownWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)channelUpWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribeCurrentChannelWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getChannelListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getCurrentChannelWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)tvControlPriority;
- (id)tvControl;
- (id)subscribeVolumeWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribeMuteWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)volumeDownWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)volumeUpWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setVolume:(float)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getVolumeWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setMute:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMuteWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)volumeControlPriority;
- (id)volumeControl;
- (void)jumpToTrackWithIndex:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)playPreviousWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)playNextWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)playListControlPriority;
- (id)playListControl;
- (void)getPositionAndDurationWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribeMediaInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getMediaMetaDataWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribePlayStateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getPositionWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getDurationWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getPlayStateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)seek:(double)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fastForwardWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)rewindWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)stopWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)pauseWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)playWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)mediaControlPriority;
- (id)mediaControl;
- (void)closeMedia:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)displayMediaWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)playMediaWithMediaInfo:(id)arg1 shouldLoop:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)playMedia:(id)arg1 shouldLoop:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)playMedia:(id)arg1 iconURL:(id)arg2 title:(id)arg3 description:(id)arg4 mimeType:(id)arg5 shouldLoop:(_Bool)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)displayImageWithMediaInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)displayImage:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)displayImage:(id)arg1 iconURL:(id)arg2 title:(id)arg3 description:(id)arg4 mimeType:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (int)mediaPlayerPriority;
- (id)mediaPlayer;
- (void)setExternalInput:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getExternalInputListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)closeInputPicker:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchInputPickerWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)externalInputControlPriority;
- (id)externalInputControl;
- (void)closeApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)subscribeAppState:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getAppState:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getRunningAppWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)subscribeRunningAppWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)connectToApp:(id)arg1 joinOnly:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)joinApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)connectToApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchYouTube:(id)arg1 startTime:(float)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)launchYouTube:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchNetflix:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchHulu:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchBrowser:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchAppStore:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchAppWithInfo:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)launchAppWithInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)launchApplication:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)launchApp:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getAppListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (int)launcherPriority;
- (id)launcher;
@property(retain, nonatomic) NSArray *permissions;
- (void)socket:(id)arg1 didCloseWithError:(id)arg2;
- (void)socket:(id)arg1 didFailWithError:(id)arg2;
- (void)socketDidConnect:(id)arg1;
- (void)socket:(id)arg1 registrationFailed:(id)arg2;
- (void)socketWillRegister:(id)arg1;
- (void)dismissPinAlertView;
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showAlert;
- (_Bool)requiresPairing;
- (void)disconnectWithError:(id)arg1;
- (void)disconnect;
- (void)connect;
- (_Bool)connected;
- (_Bool)isConnectable;
- (void)updateCapabilities;
- (id)dlnaService;
- (void)setServiceDescription:(id)arg1;
- (void)setServiceConfig:(id)arg1;
@property(readonly, nonatomic) WebOSTVServiceConfig *webOSTVServiceConfig;
- (int)pairingType;
- (void)setPairingType:(int)arg1;
- (id)initWithServiceConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

