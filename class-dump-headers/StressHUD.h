/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSTimer;

@interface StressHUD : NSWindow
{
    NSTimer *clock;
}

- (id)init;
- (void)becameActive;
- (void)becameInactive;
- (id)initWithContentRect:(struct _NSRect)fp8 styleMask:(unsigned int)fp24 backing:(unsigned int)fp28 defer:(BOOL)fp32;
- (void)tick;
- (void)start;
- (void)stop;

@end

