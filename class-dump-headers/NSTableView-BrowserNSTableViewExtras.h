/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSTableView.h"

@interface NSTableView (BrowserNSTableViewExtras)
- (id)columnMeasurementsForType:(int)fp8;
- (void)setColumnMeasurements:(id)fp8 forType:(int)fp12;
- (id)columnWidths;
- (id)columnMinWidths;
- (id)columnMaxWidths;
- (void)setColumnMinWidths:(id)fp8;
- (void)setColumnMaxWidths:(id)fp8;
- (float)heightRequiredToShowAllContent;
- (float)columnWidthForCellWidth:(float)fp8 atRow:(int)fp12;
- (float)widthRequiredToShowAllContentForColumn:(id)fp8;
- (float)constrainProposedWidth:(float)fp8 forColumn:(id)fp12;
- (BOOL)resizesColumnsProportionally;
- (void)columnsChanged;
- (id)columnWidthsMaintainingProportions;
- (float)bestWidthNonProportional;
- (float)bestWidthProportional;
- (float)bestWidth;
- (struct _NSSize)bestSize;
- (void)collapseSelectionToSingleRow;
- (void)selectPreviousRow;
- (void)scrollToBeginning;
- (void)scrollToEnd;
- (void)scrollPageUp;
- (void)scrollPageDown;
- (BOOL)handleScrollKeyEvent:(id)fp8;
@end
