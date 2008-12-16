/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSView.h"

#import "WebDocumentSearching-Protocol.h"
#import "WebDocumentView-Protocol.h"

@class BookmarksViewController;

@interface BookmarksView : NSView <WebDocumentView, WebDocumentSearching>
{
    BOOL _contentsLoaded;
    NSView *_contents;
    BookmarksViewController *_activeBookmarksViewController;
}

- (id)initWithFrame:(struct _NSRect)fp8;
- (void)setDataSource:(id)fp8;
- (void)dataSourceUpdated:(id)fp8;
- (void)setNeedsLayout:(BOOL)fp8;
- (void)viewWillMoveToHostWindow:(id)fp8;
- (void)viewDidMoveToHostWindow;
- (void)dealloc;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setNextKeyView:(id)fp8;
- (void)controllerDidSwitchIntoView;
- (void)controllerWillSwitchOutOfView;
- (void)layout;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;
- (BOOL)searchFor:(id)fp8 direction:(BOOL)fp12 caseSensitive:(BOOL)fp16 wrap:(BOOL)fp20;

@end

