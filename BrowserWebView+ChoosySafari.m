//
//  BrowserWebView+ChoosySafari.m
//  ChoosySafari
//
//  Created by George on 16/12/2008.
//  Copyright 2008 George Brocklehurst. All rights reserved.
//

#import "BrowserWebView+ChoosySafari.h"
#import "ChoosySafari.h"

@interface BrowserWebView (DummyReplacedMethods)
- (id)_original_webView:(id)webview contextMenuItemsForElement:(id)element defaultMenuItems:(id)items;
@end

@implementation BrowserWebView (ChoosySafari)

+ (void)initChoosySafari
{
	[ChoosySafari renameSelector:@selector(webView:contextMenuItemsForElement:defaultMenuItems:) toSelector:@selector(_original_webView:contextMenuItemsForElement:defaultMenuItems:) onClass:[self class]];
	[ChoosySafari renameSelector:@selector(_new_webView:contextMenuItemsForElement:defaultMenuItems:) toSelector:@selector(webView:contextMenuItemsForElement:defaultMenuItems:) onClass:[self class]];
}

- (id)_new_webView:(id)webview contextMenuItemsForElement:(id)element defaultMenuItems:(id)items;
{
	NSLog(@"++++++++++++++ Context menu items for element: %@", element);
	return [self _original_webView:webview contextMenuItemsForElement:element defaultMenuItems:items];
}

@end
