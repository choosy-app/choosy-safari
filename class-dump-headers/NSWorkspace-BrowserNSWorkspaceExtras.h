/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSWorkspace.h"

@interface NSWorkspace (BrowserNSWorkspaceExtras)
- (BOOL)removeFileFromQuarantineAtPath:(id)fp8;
- (BOOL)openURL:(id)fp8 withApplicationAtPath:(id)fp12;
- (BOOL)openWebClipWidgetWithURL:(id)fp8 positionWidgetAtPoint:(struct _NSPoint)fp12;
- (BOOL)openDashboardURL:(id)fp8;
- (BOOL)openURL:(id)fp8 withApplicationWithBundleIdentifier:(id)fp12;
- (id)infoForLaunchedApplicationWithBundleID:(id)fp8 preferringPath:(id)fp12;
- (id)pathForApplicationWithBundleIdentifier:(id)fp8;
- (id)pathForApplicationForURLScheme:(id)fp8;
- (id)pathForApplicationOfFileAtPath:(id)fp8;
- (id)pathForApplicationForMIMEType:(id)fp8;
- (BOOL)launchApplicationAtPath:(id)fp8 processSerialNumber:(struct ProcessSerialNumber *)fp12 alreadyOpen:(char *)fp16 event:(id)fp20;
- (id)infoForLaunchedApplicationAtPath:(id)fp8;
- (BOOL)isLaunchedApplicationAtPath:(id)fp8;
- (BOOL)processSerialNumber:(struct ProcessSerialNumber *)fp8 forApplicationAtPath:(id)fp12;
- (id)findFolderPathForDomainType:(unsigned long)fp8 folderType:(unsigned long)fp12;
- (BOOL)moveFileToTrash:(id)fp8;
- (id)_internetLocationFileExtensions;
- (id)_internetLocationFileExtensionsArray;
- (BOOL)isInternetLocationFileAtPath:(id)fp8;
- (id)internetLocationFileExtensionForURL:(id)fp8;
- (BOOL)URL:(id *)fp8 title:(id *)fp12 forInternetLocationFileAtPath:(id)fp16;
- (id)URLForInternetLocationFileAtPath:(id)fp8;
- (id)createInternetLocationFileInDirectory:(id)fp8 withURL:(id)fp12 title:(id)fp16;
- (void)noteDirectoryContentsChangedAtPath:(id)fp8;
- (void)sendDistributedNotificationForFinishedDownloadAtPath:(id)fp8;
- (void)sendDistributedNotificationForChangeToDownloadFileAtPath:(id)fp8;
- (id)downloadAssessmentForPath:(id)fp8;
@end
