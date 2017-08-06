//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FXLogFileUtil : NSObject
{
}

+ (_Bool)zipArchiveFileFromPathArray:(id)arg1 zipFilePath:(id)arg2;
+ (_Bool)zipArchiveFileFromPath:(id)arg1 zipFilePath:(id)arg2;
+ (id)getFilePathlistFromDirPath:(id)arg1;
+ (id)getFilenamelistFromDirPath:(id)arg1;
+ (id)getFilePathlistOfType:(id)arg1 fromDirPath:(id)arg2;
+ (id)getFilenamelistOfType:(id)arg1 fromDirPath:(id)arg2;
+ (_Bool)creatLogFile:(id)arg1;
+ (_Bool)createTmpFolder;
+ (_Bool)createLogRootFolder;
+ (id)logFilePath;
+ (id)logFileName;
+ (id)tmpFolderPath;
+ (id)rootFolderPath;
+ (long long)getFileSize:(id)arg1;
+ (void)writeStrToPath:(id)arg1;
+ (void)writeStr:(id)arg1 toFilePath:(id)arg2;
+ (void)moveFileFromPath:(id)arg1 toPath:(id)arg2;
+ (id)appCacheDirectory;
+ (id)appRecourseDirectory;
+ (_Bool)fileExist:(id)arg1;
+ (_Bool)createFolderWithPath:(id)arg1;
+ (void)removeAllFileExceptPath:(id)arg1;
+ (id)CachesFilePath;
+ (id)LibraryFilePath;
+ (void)deleteDocFileWithFileName:(id)arg1;
+ (void)deleteFileWithPath:(id)arg1;
+ (id)docFilePathWithFileName:(id)arg1;
+ (id)docRootFolderPath;

@end
