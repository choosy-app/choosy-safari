/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ButtonPlus.h"

@interface RolloverTrackingButton : ButtonPlus
{
    BOOL _mouseOver;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _trackingMouseDown;
    BOOL _trackingRectUpdatePending;
    int _trackingRectTag;
    id delegate;
}

- (void)initTrackingRect;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)setFrameOrigin:(struct _NSPoint)fp8;
- (void)setFrameSize:(struct _NSSize)fp8;
- (void)setFrameRotation:(float)fp8;
- (void)setBoundsOrigin:(struct _NSPoint)fp8;
- (void)setBoundsSize:(struct _NSSize)fp8;
- (void)setBoundsRotation:(float)fp8;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)mouseIsOver;
- (void)mouseEnteredOrExited:(BOOL)fp8;
- (void)mouseDown:(id)fp8;
- (void)setRedrawOnMouseEnteredAndExited:(BOOL)fp8;
- (BOOL)redrawOnMouseEnteredAndExited;
- (BOOL)shouldUseRolloverAppearance;
- (void)updateMouseIsOver:(int)fp8;
- (void)removeTrackingRect;
- (void)updateTrackingRect;
- (void)_updateTrackingRectSoon;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;
- (void)rightMouseDown:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end
