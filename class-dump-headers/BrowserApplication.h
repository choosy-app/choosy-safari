/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSApplication.h"

@interface BrowserApplication : NSApplication
{
    BOOL _isProcessingContextMenuEvent;
    BOOL _isClosingAllWindows;
}

- (void)orderFrontStandardAboutPanel:(id)fp8;
- (id)targetForAction:(SEL)fp8 to:(id)fp12 from:(id)fp16;
- (BOOL)sendAction:(SEL)fp8 to:(id)fp12 from:(id)fp16;
- (void)sendEvent:(id)fp8;
- (id)nextEventMatchingMask:(unsigned int)fp8 untilDate:(id)fp12 inMode:(id)fp16 dequeue:(BOOL)fp20;
- (struct _NSModalSession *)beginModalSessionForWindow:(id)fp8;
- (void)endModalSession:(struct _NSModalSession *)fp8;
- (BOOL)isClosingAllWindows;
- (void)closeAllWindows:(id)fp8;
- (id)makeWindowsPerform:(SEL)fp8 inOrder:(BOOL)fp12;
- (BOOL)anyWindowsVisible;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (BOOL)isProcessingContextMenuEvent;
- (id)orderedWindows;

@end

