/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString, WebBookmark;

@interface WebBookmarkGroup : NSObject
{
    NSString *_versionString;
    NSString *_file;
    WebBookmark *_topBookmark;
    NSMutableDictionary *_bookmarksByUUID;
    NSMutableDictionary *_bookmarksByURLString;
    BOOL _notificationsSuppressed;
    BOOL _loading;
}

+ (id)bookmarkGroupWithFile:(id)fp8;
- (id)initWithFile:(id)fp8;
- (void)dealloc;
- (id)_keyForURLStringDictionaryForBookmark:(id)fp8;
- (void)_removeBookmarkFromURLStringDictionary:(id)fp8;
- (void)_addBookmarkToURLStringDictionary:(id)fp8;
- (void)_addChildrenOfBookmarkToURLStringDictionary:(id)fp8;
- (id)bookmarksForURLString:(id)fp8;
- (id)bookmarkForUUID:(id)fp8;
- (void)transferUUIDFrom:(id)fp8 to:(id)fp12;
- (void)_addBookmark:(id)fp8;
- (void)_bookmark:(id)fp8 changedUUIDFrom:(id)fp12 to:(id)fp16;
- (void)removeBookmark:(id)fp8;
- (id)versionString;
- (id)topBookmark;
- (void)_sendNotification:(id)fp8 forBookmark:(id)fp12 children:(id)fp16;
- (void)_setTopBookmark:(id)fp8;
- (void)_bookmarkWillChange:(id)fp8;
- (void)_bookmarkDidChange:(id)fp8;
- (void)_bookmarkURLStringWillChange:(id)fp8;
- (void)_bookmarkURLStringDidChange:(id)fp8;
- (void)_bookmarkUnreadRSSCountDidChange:(id)fp8;
- (void)_bookmarkChild:(id)fp8 wasAddedToParent:(id)fp12;
- (void)_bookmarkChildren:(id)fp8 wereAddedToParent:(id)fp12;
- (void)_bookmarkChild:(id)fp8 wasRemovedFromParent:(id)fp12;
- (void)_bookmarkChildren:(id)fp8 wereRemovedFromParent:(id)fp12;
- (void)_bookmarksWillBeReloaded;
- (void)_bookmarksWereReloaded;
- (id)addNewBookmarkToBookmark:(id)fp8 withTitle:(id)fp12 URLString:(id)fp16 type:(int)fp20;
- (id)insertNewBookmarkAtIndex:(unsigned int)fp8 ofBookmark:(id)fp12 withTitle:(id)fp16 URLString:(id)fp20 type:(int)fp24;
- (id)file;
- (BOOL)_loadBookmarkGroupGuts;
- (BOOL)loadBookmarkGroup;
- (BOOL)_bookmarksForURLStringsDictionaryExists;
- (BOOL)_saveBookmarkGroupGuts;
- (BOOL)saveBookmarkGroup;
- (void)suppressNotifications;
- (void)resumeNotifications;

@end

