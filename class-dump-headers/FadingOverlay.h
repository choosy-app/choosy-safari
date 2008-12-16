/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class FadingOverlayView, NSView, NSWindow;

@interface FadingOverlay : NSObject
{
    NSView *_targetView;
    NSWindow *_overlayWindow;
    FadingOverlayView *_overlayView;
    id _delegate;
}

- (id)initWithTargetView:(id)fp8 overlayViewClass:(Class)fp12;
- (void)dealloc;
- (void)attachOverlay;
- (BOOL)containsScreenPoint:(struct _NSPoint)fp8;
- (id)delegate;
- (void)detachOverlay;
- (float)fractionFadedIn;
- (BOOL)ignoresMouseEvents;
- (id)overlayView;
- (void)setDelegate:(id)fp8;
- (void)setFractionFadedIn:(float)fp8;
- (void)setHolesNeedUpdateInTargetViewRect:(struct _NSRect)fp8;
- (void)setIgnoresMouseEvents:(BOOL)fp8;
- (id)targetView;

@end

