/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BrowserWebView.h"

@interface BrowserWebView (BrowserContextMenu)
- (void)downloadURLUsingSavePanel:(id)fp8;
- (void)downloadLinkUsingSavePanel:(id)fp8;
- (void)choseDownloadLocationFromPanel:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (id)currentUserDesktopFolderPath;
- (id)saveToDownloadsFolderMenuTitleForImage:(BOOL)fp8;
- (BOOL)haveSupportediPhotoVersion;
- (id)webView:(id)fp8 contextMenuItemsForElement:(id)fp12 defaultMenuItems:(id)fp16;
- (void)addLinkToBookmarks:(id)fp8;
- (void)viewFrameSource:(id)fp8;
- (void)saveDocumentAs:(id)fp8;
- (void)printFrame:(id)fp8;
- (void)printWindow:(id)fp8;
- (void)openWithITunes:(id)fp8;
- (void)openWithQuickTime:(id)fp8;
- (void)googleSearch:(id)fp8;
- (id)URLFromSelectedStringInElement:(id)fp8;
- (void)goToAddress:(id)fp8;
- (void)openURLInNewTab:(id)fp8 tabLocation:(id)fp12;
- (void)openURLInNewWindow:(id)fp8;
- (id)tabLocationFromElement:(id)fp8;
- (void)goToAddressInNewTab:(id)fp8;
- (void)goToAddressInNewWindow:(id)fp8;
- (void)openLinkInNewTab:(id)fp8;
- (void)openLinkInNewWindow:(id)fp8;
- (void)openImageInNewTab:(id)fp8;
- (void)openImageInNewWindow:(id)fp8;
- (void)openFrameInNewTab:(id)fp8;
- (void)openFrameInNewWindow:(id)fp8;
- (void)copyEmailAddresses:(id)fp8;
- (void)copyImageAddress:(id)fp8;
- (void)saveFileWrapperForURLKey:(id)fp8 menuItem:(id)fp12;
- (void)saveFileWrapperToDownloadsFolderForURLKey:(id)fp8 menuItem:(id)fp12;
- (void)saveImageAs:(id)fp8;
- (void)saveLinkAs:(id)fp8;
- (void)saveImageToDownloadsFolder:(id)fp8;
- (void)saveLinkToDownloadsFolder:(id)fp8;
- (void)saveDocumentToDownloadsFolder:(id)fp8;
- (void)reportiPhotoErrorWithMessage:(id)fp8;
- (void)sendImagesToiPhoto;
- (void)didLaunchApplication:(id)fp8;
- (void)useImageAsDesktopPicture:(id)fp8;
- (void)addImageToiPhotoLibrary:(id)fp8;
@end

