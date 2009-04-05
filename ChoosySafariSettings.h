//
//  ChoosySafariSettings.h
//  ChoosySafari
//
//  Created by George on 05/04/2009.
//  Copyright 2009 George Brocklehurst. Some rights reserved (see accompanying LICENSE file for details).
//

#import <Cocoa/Cocoa.h>

/* From CocoaDev: http://www.cocoadev.com/index.pl?NSPreferences */
@interface NSPreferencesModule : NSObject
{
    IBOutlet NSBox *_preferencesView;
    NSSize _minSize;
    char _hasChanges;
    void *_reserved;
}

+ sharedInstance;
- (void)dealloc;
- init;
- preferencesNibName;
- (void)setPreferencesView:(NSView*)prefsView;
- viewForPreferenceNamed:(NSString*)name;
- imageForPreferenceNamed:(NSString*)name;
- titleForIdentifier:(NSString*)title;
- (BOOL)hasChangesPending;
- (void)saveChanges;
- (void)willBeDisplayed;
- (void)initializeFromDefaults;
- (void)didChange;
- (struct _NSSize)minSize;
- (void)setMinSize:(NSSize)minSize;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (BOOL)moduleCanBeRemoved;
- (BOOL)preferencesWindowShouldClose;
- (BOOL)isResizable;

@end

@interface ChoosySafariSettings : NSPreferencesModule
{

}

@end
