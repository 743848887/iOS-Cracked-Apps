//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface KGDirectoryMgr : NSObject
{
    NSString *_strBase;
    NSMutableDictionary *_dirs;
}

+ (_Bool)isEncryptionFile:(id)arg1;
+ (id)getTempAbsolutelPath:(id)arg1;
+ (id)getTempRelativePath:(id)arg1;
+ (void)checkTempDirectory;
+ (_Bool)moveFileFrom:(id)arg1 to:(id)arg2;
+ (_Bool)copyFileFrom:(id)arg1 to:(id)arg2;
+ (_Bool)deleteFile:(id)arg1;
+ (_Bool)isFileExist:(id)arg1;
- (void).cxx_destruct;
- (void)info;
- (_Bool)moveFileToRightPlace:(id)arg1 holderMask:(unsigned long long)arg2 movedPath:(id *)arg3;
- (_Bool)moveFileToRightPlace:(id)arg1 nowHolderType:(unsigned long long)arg2 movedPath:(id *)arg3;
- (_Bool)moveTempFileToRightPlace:(id)arg1 holderMask:(unsigned long long)arg2 fileName:(id)arg3 extName:(id)arg4 movedPath:(id *)arg5;
- (id)generateFileName:(id)arg1 qualityType:(int)arg2;
- (id)generateTempFileName:(id)arg1 qualityType:(int)arg2 orOther:(id)arg3 fileId:(long long)arg4;
- (void)deleteInfoFiles:(id)arg1;
- (void)deleteUnfinishedDownFile:(id)arg1;
- (_Bool)deleteTempFile:(id)arg1;
- (id)absolutePath:(id)arg1;
- (void)deleteTempFilesInDeleteDir;
- (_Bool)moveFileToDeleteDir:(id)arg1;
- (_Bool)moveFile:(id)arg1 from:(int)arg2 to:(int)arg3 dstFile:(id)arg4;
- (int)mapDirToType:(id)arg1;
- (id)getDirectory:(int)arg1;
- (id)getAbsoluteDirectory:(int)arg1;
- (_Bool)setDirectory:(int)arg1 dir:(id)arg2 error:(id *)arg3;
- (_Bool)needBackupPath:(id)arg1;
- (void)setDefaultDirectory;
- (void)dealloc;
- (id)init;

@end
