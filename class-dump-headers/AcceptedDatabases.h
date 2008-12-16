/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SheetWithTableController.h"

@class NSMutableArray, NSMutableDictionary;

@interface AcceptedDatabases : SheetWithTableController
{
    NSMutableArray *_origins;
    NSMutableDictionary *_databasesForOrigins;
    BOOL _refreshIsPending;
}

- (void)dealloc;
- (void)awakeFromNib;
- (void)removeSelectedItems:(id)fp8;
- (void)showSheetInWindow:(id)fp8;
- (void)hideSheet:(id)fp8;
- (id)outlineView:(id)fp8 child:(int)fp12 ofItem:(id)fp16;
- (BOOL)outlineView:(id)fp8 isItemExpandable:(id)fp12;
- (int)outlineView:(id)fp8 numberOfChildrenOfItem:(id)fp12;
- (id)outlineView:(id)fp8 objectValueForTableColumn:(id)fp12 byItem:(id)fp16;
- (void)outlineView:(id)fp8 willDisplayCell:(id)fp12 forTableColumn:(id)fp16 item:(id)fp20;

@end
