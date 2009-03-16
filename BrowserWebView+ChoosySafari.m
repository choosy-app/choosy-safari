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
- (void)_original_webView:(WebView *)sender decidePolicyForNavigationAction:(NSDictionary *)actionInformation request:(NSURLRequest *)request frame:(WebFrame *)frame decisionListener:(id < WebPolicyDecisionListener >)listener;
@end

@implementation BrowserWebView (ChoosySafari)

+ (void)initChoosySafari
{
	[ChoosySafari renameSelector:@selector(webView:contextMenuItemsForElement:defaultMenuItems:) toSelector:@selector(_original_webView:contextMenuItemsForElement:defaultMenuItems:) onClass:[self class]];
	[ChoosySafari renameSelector:@selector(_new_webView:contextMenuItemsForElement:defaultMenuItems:) toSelector:@selector(webView:contextMenuItemsForElement:defaultMenuItems:) onClass:[self class]];
	
	[ChoosySafari renameSelector:@selector(webView:decidePolicyForNavigationAction:request:frame:decisionListener:) toSelector:@selector(_original_webView:decidePolicyForNavigationAction:request:frame:decisionListener:) onClass:[self class]];
	[ChoosySafari renameSelector:@selector(_new_webView:decidePolicyForNavigationAction:request:frame:decisionListener:) toSelector:@selector(webView:decidePolicyForNavigationAction:request:frame:decisionListener:) onClass:[self class]];
}

- (void)_new_webView:(WebView *)sender decidePolicyForNavigationAction:(NSDictionary *)actionInformation request:(NSURLRequest *)request frame:(WebFrame *)frame decisionListener:(id < WebPolicyDecisionListener >)listener
{
	//NSLog(@"Decide policy for navigation action: %@", actionInformation);
	//NSLog(@"Request: %@", request);
	
	if([[actionInformation valueForKey:@"WebActionModifierFlagsKey"] intValue] == 131072)
	{
		NSString *choosyURL = [NSString stringWithFormat:@"x-choosy://prompt.all/%@", [actionInformation valueForKey:@"WebActionOriginalURLKey"]];
		[[NSWorkspace sharedWorkspace] openURL:[NSURL URLWithString:choosyURL]];
		return;
	}

	[self _original_webView:sender decidePolicyForNavigationAction:actionInformation request:request frame:frame decisionListener:listener];
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
