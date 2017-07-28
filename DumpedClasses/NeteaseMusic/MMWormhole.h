//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableDictionary, NSString;

@interface MMWormhole : NSObject
{
    NSString *_applicationGroupIdentifier;
    NSString *_directory;
    NSFileManager *_fileManager;
    NSMutableDictionary *_listenerBlocks;
}

@property(retain, nonatomic) NSMutableDictionary *listenerBlocks; // @synthesize listenerBlocks=_listenerBlocks;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(copy, nonatomic) NSString *applicationGroupIdentifier; // @synthesize applicationGroupIdentifier=_applicationGroupIdentifier;
- (void).cxx_destruct;
- (void)stopListeningForMessageWithIdentifier:(id)arg1;
- (void)listenForMessageWithIdentifier:(id)arg1 listener:(CDUnknownBlockType)arg2;
- (void)clearAllMessageContents;
- (void)clearMessageContentsForIdentifier:(id)arg1;
- (id)messageWithIdentifier:(id)arg1;
- (void)passMessageObject:(id)arg1 identifier:(id)arg2;
- (id)listenerBlockForIdentifier:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)unregisterForNotificationsWithIdentifier:(id)arg1;
- (void)registerForNotificationsWithIdentifier:(id)arg1;
- (void)sendNotificationForMessageWithIdentifier:(id)arg1;
- (void)deleteFileForIdentifier:(id)arg1;
- (id)messageObjectFromFileWithIdentifier:(id)arg1;
- (void)writeMessageObject:(id)arg1 toFileWithIdentifier:(id)arg2;
- (id)filePathForIdentifier:(id)arg1;
- (id)messagePassingDirectoryPath;
- (void)dealloc;
- (id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2;
- (id)init;

@end
