/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSSearchFieldCell.h"

@class NSButtonCell, NSString;

@interface SearchFieldCell : NSSearchFieldCell
{
    NSButtonCell *standardCancelCell;
    NSButtonCell *snapBackCell;
    NSString *accessibilityDescription;
}

+ (void)addSearchString:(id)fp8;
+ (void)clearRecentSearches;
+ (void)updateCellForSearchField:(id)fp8;
- (id)init;
- (void)dealloc;
- (BOOL)_textIsEmpty;
- (BOOL)snapBackIsVisibleButSuperclassIsUnaware;
- (BOOL)cancelButtonIsSuppressed;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (id)snapBackCell;
- (void)setIsShowingSnapBack:(BOOL)fp8;
- (BOOL)isShowingSnapBack;
- (BOOL)trackMouse:(id)fp8 inRect:(struct _NSRect)fp12 ofView:(id)fp28 untilMouseUp:(BOOL)fp32;
- (void)_addStringToRecentSearches:(id)fp8;
- (void)_searchFieldClearRecents:(id)fp8;
- (void)recentSearchesChanged:(id)fp8;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescription;
- (void)setAccessibilityDescription:(id)fp8;
- (id)accessibilityAttributeValue:(id)fp8;
- (BOOL)accessibilityIsAttributeSettable:(id)fp8;

@end
