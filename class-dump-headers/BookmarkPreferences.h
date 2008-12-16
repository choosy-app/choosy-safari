/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PreferencesModule.h"

@class ISyncController, NSButton;

@interface BookmarkPreferences : PreferencesModule
{
    NSButton *bookmarksToolbarIncludesAddressBookCheckbox;
    NSButton *bookmarksToolbarIncludesBonjourCheckbox;
    NSButton *bookmarksMenuIncludesAddressBookCheckbox;
    NSButton *bookmarksMenuIncludesBookmarksToolbarCheckbox;
    NSButton *bookmarksMenuIncludesBonjourCheckbox;
    NSButton *bookmarksCollectionsIncludeAddressBookCheckbox;
    NSButton *bookmarksCollectionsIncludeBonjourCheckbox;
    NSButton *synchronizeWithDotMacCheckbox;
    NSButton *openDotMacButton;
    ISyncController *_iSyncController;
}

- (void)setUpCheckbox:(id)fp8 fromPreferenceKey:(id)fp12;
- (void)updateBookmarksViews;
- (void)updateSyncViews;
- (void)toggleBookmarksToolbarIncludesAddressBook:(id)fp8;
- (void)toggleBookmarksToolbarIncludesBonjour:(id)fp8;
- (void)toggleBookmarksMenuIncludesAddressBook:(id)fp8;
- (void)toggleBookmarksMenuIncludesBookmarksToolbar:(id)fp8;
- (void)toggleBookmarksMenuIncludesBonjour:(id)fp8;
- (void)toggleBookmarksCollectionsIncludeAddressBook:(id)fp8;
- (void)toggleBookmarksCollectionsIncludeBonjour:(id)fp8;
- (void)initializeFromDefaults;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)isResizable;
- (id)dotMacInfoAlert;
- (void)displayDotMacInfoSheet;
- (void)dotMacInfoSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)openDotMacPreferences:(id)fp8;
- (void)toggleSynchronizeBookmarks:(id)fp8;
- (void)windowDidBecomeMain:(id)fp8;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)_parentalControlsDidChange;
- (id)helpAnchor;
- (void)iSyncControllerSyncInProgressDidChange:(id)fp8;
- (void)iSyncControllerCanSynchronizeBookmarksDidChange:(id)fp8;
- (void)iSyncControllerSynchronizesBookmarksDidChange:(id)fp8;

@end

