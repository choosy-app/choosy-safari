/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSView, NSWindow;

@interface Overlay : NSObject
{
    NSView *_targetView;
    NSWindow *_overlayWindow;
    NSView *_overlayView;
    BOOL _sharesKey;
    id _delegate;
}

+ (Class)overlayWindowClass;
- (id)initWithTargetView:(id)fp8 overlayViewClass:(Class)fp12;
- (void)dealloc;
- (void)attachOverlay;
- (BOOL)containsScreenPoint:(struct _NSPoint)fp8;
- (void)detachOverlay;
- (BOOL)isAttached;
- (id)targetView;
- (id)overlayView;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (BOOL)ignoresMouseEvents;
- (void)setIgnoresMouseEvents:(BOOL)fp8;
- (BOOL)sharesKeyWithParentWindow;
- (void)setSharesKeyWithParentWindow:(BOOL)fp8;

@end

