/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WebBookmark.h"

@interface WebBookmark (BookmarkCollectionsFileInternal)
+ (id)_allLeafBookmarksInStandardCollectionsMatchingSelector:(SEL)fp8;
- (BOOL)_addressOfContentItem:(id)fp8 isInSet:(id)fp12;
- (void)_collectContentItems:(id)fp8 matchingSearchStrings:(id)fp12 orWithAddressInSet:(id)fp16 fromContentItem:(id)fp20;
- (void)_collectLeafBookmarks:(id)fp8 matchingSelector:(SEL)fp12 fromContentItem:(id)fp16;
- (BOOL)_contentItem:(id)fp8 matchesString:(id)fp12 options:(int)fp16;
- (id)_contentItemIsFeedBookmark:(id)fp8;
- (id)_contentItemIsWebClipBookmark:(id)fp8;
- (BOOL)_isCollection;
@end

