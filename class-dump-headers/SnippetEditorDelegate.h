/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@interface SnippetEditorDelegate : NSObject
{
    struct SnippetEditorController *_controller;
    BOOL _windowClosing;
}

- (id)initWithController:(struct SnippetEditorController *)fp8;
- (void)webView:(id)fp8 didClearWindowObject:(id)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 decidePolicyForNavigationAction:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (void)webView:(id)fp8 decidePolicyForNewWindowAction:(id)fp12 request:(id)fp16 newFrameName:(id)fp20 decisionListener:(id)fp24;
- (id)webView:(id)fp8 contextMenuItemsForElement:(id)fp12 defaultMenuItems:(id)fp16;
- (void)windowWillClose:(id)fp8;
- (BOOL)windowClosing;

@end

