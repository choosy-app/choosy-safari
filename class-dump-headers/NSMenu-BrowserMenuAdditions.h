/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSMenu.h"

@interface NSMenu (BrowserMenuAdditions)
- (id)initWithDictionaryRepresentation:(id)fp8;
- (void)popUpInRect:(struct _NSRect)fp8 ofView:(id)fp24 didInsertInitialSeparator:(char *)fp28;
- (id)addAlwaysDisabledItemWithTitle:(id)fp8;
- (id)addItemWithTitle:(id)fp8 action:(SEL)fp12 target:(id)fp16 tag:(int)fp20;
- (id)addItemWithTitle:(id)fp8 action:(SEL)fp12 target:(id)fp16;
- (id)addItemWithTitle:(id)fp8 action:(SEL)fp12 tag:(int)fp16;
- (void)removeAllItems;
- (void)removeItemsAfterIndex:(int)fp8;
- (id)itemWithTarget:(id)fp8 andAction:(SEL)fp12;
- (void)removeUselessMenuItemSeparators;
- (void)transferAllItemsFromMenu:(id)fp8;
- (void)cancelTrackingImmediately:(BOOL)fp8;
@end

