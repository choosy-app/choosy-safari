/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSWindow;

@interface SheetRequest : NSObject
{
    NSWindow *_window;
    id _modalDelegate;
    SEL _didCloseSelector;
    void *_contextInfo;
}

- (id)icon;
- (id)label;
- (id)window;
- (void)displaySheetInWindow:(id)fp8;
- (void)displaySheet;

@end

