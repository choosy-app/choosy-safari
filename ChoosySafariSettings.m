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

- (IBAction)modifierKeyChanged:(id)sender
{
	[self willChangeValueForKey:@"modifierKeyInformation"];
	[self didChangeValueForKey:@"modifierKeyInformation"];
}

- (NSString*)modifierKeyInformation
{
	switch([modifierKeyPopup selectedTag])
	{
		case ChoosyModifierKeyNone:
			return @"Links will always open in Safari, even if a modifier key is pressed.";
			
		case ChoosyModifierKeyShift:
			return @"Hold the shift key when clicking on a link to open it in Choosy.";
			
		case ChoosyModifierKeyCommand:
			return @"Hold the command key when clicking on a link to open it in Choosy. Note: This will replace Safari's default functionality for command clicking on a link.";
			
		case ChoosyModifierKeyOption:
			return @"Hold the option key when clicking on a link to open it in Choosy. Note: This will replace Safari's default functionality for option clicking on a link.";
	}
	
	return nil;
}

/**
 * Called when switching preference panels.
 */
- (void)willBeDisplayed
{
	[self willChangeValueForKey:@"modifierKeyInformation"];
	[self didChangeValueForKey:@"modifierKeyInformation"];
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
