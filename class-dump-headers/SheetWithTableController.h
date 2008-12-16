/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSButton, NSTableView;

@interface SheetWithTableController : NSWindowController
{
    NSTableView *tableView;
    NSButton *removeButton;
    NSButton *removeAllButton;
}

- (void)awakeFromNib;
- (BOOL)canRemoveSelectedItems;
- (BOOL)canRemoveAllItems;
- (void)updateRemoveButtons;
- (void)showSheetInWindow:(id)fp8;
- (void)hideSheet:(id)fp8;
- (void)removeSelectedItems:(id)fp8;
- (void)removeAllItems:(id)fp8;
- (void)reloadTableData;
- (void)delete:(id)fp8;
- (BOOL)tableView:(id)fp8 keyDown:(id)fp12;
- (void)tableViewSelectionDidChange:(id)fp8;
- (BOOL)outlineView:(id)fp8 keyDown:(id)fp12;
- (void)outlineViewSelectionDidChange:(id)fp8;

@end
