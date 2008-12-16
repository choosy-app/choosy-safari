/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class WebView;

@interface ClipFinder : NSObject
{
    struct _NSSize _minSize;
    float _maxPageWidthFraction;
    WebView *_webView;
}

- (void)dealloc;
- (id)initWithWebView:(id)fp8;
- (id)bestClippedNodeAtScreenPoint:(struct _NSPoint)fp8;
- (id)bestVisibleClippedNode;
- (struct _NSSize)minimumClipSize;
- (void)setMinimumClipSize:(struct _NSSize)fp8;
- (float)maximumPageWidthFraction;
- (void)setMaximumPageWidthFraction:(float)fp8;

@end
