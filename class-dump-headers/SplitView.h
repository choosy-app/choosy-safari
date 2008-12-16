/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSSplitView.h"

@class NSColor;

@interface SplitView : NSSplitView
{
    float _dividerBottomDelta;
    NSColor *_dividerColor;
    float _dividerThickness;
    BOOL _hasCustomThickness;
    int _style;
    BOOL _userResizingDisabled;
}

- (id)init;
- (float)_scaledDividerThickness;
- (id)_dividerFrames;
- (void)_setDividerColor:(id)fp8;
- (struct _NSRect)_cursorRectArea;
- (void)setSplitViewStyle:(int)fp8;
- (void)setDividerBottomMarginDelta:(float)fp8;
- (void)setDividerThickness:(float)fp8;
- (float)dividerThickness;
- (BOOL)userResizingDisabled;
- (void)setUserResizingDisabled:(BOOL)fp8;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)drawDividerInRect:(struct _NSRect)fp8;
- (id)hitTest:(struct _NSPoint)fp8;
- (void)mouseDown:(id)fp8;
- (void)resetCursorRects;
- (void)dealloc;

@end

