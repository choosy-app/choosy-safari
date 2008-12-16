//
//  BrowserWebView+ChoosySafari.m
//  ChoosySafari
//
//  Created by George on 16/12/2008.
//  Copyright 2008 George Brocklehurst. Some rights reserved (see accompanying LICENSE file for details).
//

#import "BrowserWebView+ChoosySafari.h"
#import "ChoosySafari.h"

@interface BrowserWebView (DummyReplacedMethods)
- (NSArray*)_original_webView:(id)webview contextMenuItemsForElement:(NSDictionary*)element defaultMenuItems:(NSArray*)items;
@end

@implementation BrowserWebView (ChoosySafari)

+ (void)initChoosySafari
{
	[ChoosySafari renameSelector:@selector(webView:contextMenuItemsForElement:defaultMenuItems:) toSelector:@selector(_original_webView:contextMenuItemsForElement:defaultMenuItems:) onClass:[self class]];
	[ChoosySafari renameSelector:@selector(_new_webView:contextMenuItemsForElement:defaultMenuItems:) toSelector:@selector(webView:contextMenuItemsForElement:defaultMenuItems:) onClass:[self class]];
}

- (void)choosyMenuItemClicked:(id)sender
{
	NSString *link = [sender representedObject];
	[[NSWorkspace sharedWorkspace] openURL:[NSURL URLWithString:[NSString stringWithFormat:@"x-choosy://prompt.all/%@", link]]];
}

- (NSArray*)_new_webView:(id)webview contextMenuItemsForElement:(NSDictionary*)element defaultMenuItems:(NSArray*)defaultItems;
{	
	NSArray *items = [self _original_webView:webview contextMenuItemsForElement:element defaultMenuItems:defaultItems];

	if([[element objectForKey:@"WebElementLinkIsLive"] boolValue])
	{
		//NSLog(@"++++++++++++++ Found a link: %@", [element objectForKey:@"WebElementLinkURL"]);
		//NSLog(@"Items collection is a %@ ... %@", [items class], items);
		
		NSMenuItem *choosyMenuItem = [[NSMenuItem alloc] initWithTitle:@"Open Link in Choosy" action:@selector(choosyMenuItemClicked:) keyEquivalent:@""];
		[choosyMenuItem setRepresentedObject:[element objectForKey:@"WebElementLinkURL"]];
		[choosyMenuItem setTarget:self];
		
		NSMutableArray *updatedItems = [items mutableCopy];
		
		[updatedItems insertObject:choosyMenuItem atIndex:2];
		
		items = [NSArray arrayWithArray:updatedItems];
		
		[choosyMenuItem release], choosyMenuItem = nil;
		[updatedItems release], updatedItems = nil;
	}
	
	return items;
}

@end
