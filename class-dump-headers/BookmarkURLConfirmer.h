/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class WebBookmark;

@interface BookmarkURLConfirmer : NSObject
{
    WebBookmark *_bookmark;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
}

+ (void)beginURLConfirmationForBookmark:(id)fp8 modalForWindow:(id)fp12 modalDelegate:(id)fp16 didEndSelector:(SEL)fp20 contextInfo:(void *)fp24;
- (void)dealloc;

@end
