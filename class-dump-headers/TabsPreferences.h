/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PreferencesModule.h"

@class NSButton, NSTabView;

@interface TabsPreferences : PreferencesModule
{
    NSButton *commandClickMakesTabsCheckbox;
    NSButton *selectNewTabsCheckbox;
    NSButton *confirmClosingMultiplePagesCheckbox;
    NSTabView *finePrintSwitcher;
}

- (id)preferencesNibName;
- (void)updateViews;
- (void)toggleCommandClickMakesTabs:(id)fp8;
- (void)toggleSelectNewTabs:(id)fp8;
- (void)toggleConfirmClosingMultiplePages:(id)fp8;
- (void)initializeFromDefaults;
- (BOOL)isResizable;
- (id)helpAnchor;

@end

