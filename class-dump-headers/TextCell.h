/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class NSString;

@interface TextCell : NSTextFieldCell
{
    BOOL _doesNotTruncate;
    BOOL _highlightsWithITunesStyleGradient;
    NSString *_truncationAlternateString;
    NSString *_secondTruncationAlternateString;
}

+ (id)updateCellForColumn:(id)fp8 inView:(id)fp12;
- (struct _NSRect)adjustFrameToVerticallyCenterText:(struct _NSRect)fp8;
- (void)editWithFrame:(struct _NSRect)fp8 inView:(id)fp24 editor:(id)fp28 delegate:(id)fp32 event:(id)fp36;
- (void)selectWithFrame:(struct _NSRect)fp8 inView:(id)fp24 editor:(id)fp28 delegate:(id)fp32 start:(int)fp36 length:(int)fp40;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)centerTruncatesText;
- (void)setCenterTruncatesText:(BOOL)fp8;
- (BOOL)highlightsWithITunesStyleGradient;
- (void)setHighlightsWithITunesStyleGradient:(BOOL)fp8;
- (BOOL)_usingAlternateHighlightColorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)_drawHighlightWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)setTruncationAlternateString:(id)fp8;
- (id)truncationAlternateString;
- (void)setSecondTruncationAlternateString:(id)fp8;
- (id)secondTruncationAlternateString;

@end

