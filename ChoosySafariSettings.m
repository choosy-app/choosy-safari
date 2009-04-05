//
//  ChoosySafariSettings.m
//  ChoosySafari
//
//  Created by George on 05/04/2009.
//  Copyright 2009 George Brocklehurst. Some rights reserved (see accompanying LICENSE file for details).
//

#import "ChoosySafariSettings.h"


@implementation ChoosySafariSettings

/**
 * Image to display in the preferences toolbar
 */
- (NSImage*)imageForPreferenceNamed:(NSString*)_name
{
	NSString *iconPath = [[NSBundle bundleForClass:[self class]] pathForResource:@"choosy" ofType:@"icns"];
	return [[[NSImage alloc] initWithContentsOfFile:iconPath] autorelease];
}

/**
 * Override to return the name of the relevant nib
 */
- (NSString*)preferencesNibName
{
	return @"ChoosySafariSettings";
}

/**
 * Called when switching preference panels.
 */
- (void)willBeDisplayed
{
}

/**
 * Called when window closes or "save" button is clicked.
 */
- (void)saveChanges
{
}

/**
 * Not sure how useful this is, so far always seems to return YES.
 */
- (BOOL)hasChangesPending
{
	return TRUE;
}

/**
 * Called when we relinquish ownership of the preferences panel.
 */
- (void)moduleWillBeRemoved
{
}

/**
 * Called after willBeDisplayed, once we "own" the preferences panel.
 */
- (void)moduleWasInstalled
{
}

- (BOOL)isResizable
{
	return FALSE;
}

@end
