/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WebBookmark.h"

@interface WebBookmark (BookmarkCollections)
+ (id)allCollections;
+ (id)builtInCollections;
+ (id)userCollections;
+ (BOOL)hasAnyUserCollections;
+ (id)allFeedBookmarksInStandardCollections;
+ (id)allWebClipBookmarksInStandardCollections;
- (id)addressStringForContentItem:(id)fp8;
- (BOOL)canAddContentItems;
- (BOOL)canCopyContentItems;
- (BOOL)canDeleteCollection;
- (BOOL)canDeleteContentItems;
- (id)childAtIndex:(int)fp8 ofContentItem:(id)fp12;
- (void)didCollapseContentItem:(id)fp8;
- (void)didExpandContentItem:(id)fp8;
- (BOOL)contentItem:(id)fp8 matchesStrings:(id)fp12 options:(int)fp16;
- (BOOL)contentItemAutomaticallyOpensInTabs:(id)fp8;
- (BOOL)contentItemCanHaveChildren:(id)fp8;
- (BOOL)contentItemsAreFilteredFromOtherSources;
- (id)contentItemsMatchingSearchStrings:(id)fp8 orWithAddressInSet:(id)fp12;
- (BOOL)contentItemsShouldShowUnreadRSSCounts;
- (id)contentItemsToInitiallyExpand;
- (id)contentItemsToExpandOnReload;
- (id)imageForContentItem:(id)fp8;
- (int)numberOfChildrenOfContentItem:(id)fp8;
- (id)parentOfContentItem:(id)fp8;
- (id)parentStringForContentItem:(id)fp8;
- (BOOL)shouldShowRSSLabelForContentItem:(id)fp8;
- (id)standardCollection;
- (id)titleStringForContentItem:(id)fp8 forEditing:(BOOL)fp12;
@end

