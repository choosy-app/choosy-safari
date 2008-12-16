/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSControl.h"

@class DownloadProgressEntry, NSImage, NSProgressIndicator, NSTimer, TextCell;

@interface DownloadRow : NSControl
{
    NSProgressIndicator *_progressIndicator;
    struct _NSRect _iconFrame;
    struct _NSRect _filenameFrame;
    struct _NSRect _statusFrame;
    struct _NSRect _revealFrame;
    struct _NSRect _stopResumeFrame;
    DownloadProgressEntry *_entry;
    NSTimer *_progressTimer;
    BOOL _isSelected;
    int _buttonState;
    int _pressedButton;
    TextCell *_filenameTextCell;
    TextCell *_statusTextCell;
    NSImage *_iconImage;
    NSImage *_stopResumeImage;
    NSImage *_revealImage;
    int _revealTrackingRectTag;
    int _stopResumeTrackingRectTag;
}

- (id)_listView;
- (void)_removeTrackingRects;
- (void)_updateTrackingRects;
- (void)_updateFrames:(BOOL)fp8;
- (id)initWithEntry:(id)fp8;
- (void)dealloc;
- (void)setFrameSize:(struct _NSSize)fp8;
- (BOOL)_stopResumeButtonEnabled;
- (void)_drawIcon:(struct _NSRect)fp8;
- (void)_drawFilename:(struct _NSRect)fp8;
- (void)_drawStatus:(struct _NSRect)fp8;
- (void)_drawStopResume:(struct _NSRect)fp8;
- (void)_drawReveal:(struct _NSRect)fp8;
- (void)updateCell:(id)fp8;
- (void)drawRect:(struct _NSRect)fp8;
- (id)_resumeImageForCurrentState;
- (id)_stopImageForCurrentState;
- (id)_revealImageForCurrentState;
- (void)_updateButtons;
- (void)_updateIconAndFilename;
- (void)_updateProgressAnimation;
- (void)_startProgressAnimation;
- (void)_startDiskCopyAnimation;
- (void)_stopProgressAnimation;
- (id)_timeRemainingString;
- (id)_rateString;
- (id)_errorSummary;
- (id)displayableFileType;
- (id)_statusAndRateText;
- (id)_statusAndTimeRemainingText;
- (id)_openHelpString;
- (id)_revealHelpString;
- (id)_stopResumeHelpString;
- (id)_stopResumeAccessibilityDescription;
- (id)_statusText;
- (void)_updateStatusField;
- (void)stageDidChange;
- (void)currentFileDidChange;
- (void)progressDidChange;
- (void)_updateTextColor;
- (unsigned int)draggingSourceOperationMaskForLocal:(BOOL)fp8;
- (void)windowDidBecomeOrResignKey:(id)fp8;
- (id)entry;
- (float)bestWidth;
- (void)setSelected:(BOOL)fp8;
- (BOOL)isSelected;
- (void)open:(id)fp8;
- (BOOL)acceptsFirstMouse:(id)fp8;
- (BOOL)allowsRowSelectionAtPoint:(struct _NSPoint)fp8;
- (void)mouseDown:(id)fp8;
- (void)mouseDragged:(id)fp8;
- (void)mouseUp:(id)fp8;
- (void)_updateButtonStateAndStatusField;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)fp8;
- (BOOL)accessibilityIsAttributeSettable:(id)fp8;
- (id)accessibilityHitTest:(struct _NSPoint)fp8;
- (id)accessibilityDescriptionForButtonInfo:(id)fp8;
- (BOOL)accessibilityButtonInfoIsEnabled:(id)fp8;
- (void)accessibilityPerformActionForButtonInfo:(id)fp8;
- (id)accessibilityHelpStringForChildInfo:(id)fp8;
- (struct _NSRect)accessibilityScreenRectForChild:(id)fp8;

@end

