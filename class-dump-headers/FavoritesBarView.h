/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SlidingViewsBar.h"

@class FavoriteButton, NSMutableArray, NSTimer;

@interface FavoritesBarView : SlidingViewsBar
{
    float _firstFavoriteLeftEdge;
    float _buttonHeight;
    float _lastWidth;
    BOOL _showingBonjour;
    BOOL _showingAddressBook;
    BOOL _showUnreadRSSCounts;
    NSMutableArray *_clippedMenuItems;
    BOOL _shouldAbortDrop;
    unsigned int _builtInSubviewsCount;
    FavoriteButton *_queueButton;
    NSTimer *_menuTrackingTimer;
}

+ (id)supportedProxyIdentifiers;
- (id)menuItemsForClippedItemsIndicator:(id)fp8;
- (unsigned int)specialBookmarkSourcesCount;
- (unsigned int)lastNonSlidingViewIndex;
- (float)maxButtonXWithoutClipIndicator;
- (float)maxButtonXWithClipIndicator;
- (float)paddingBetweenButtons;
- (float)buttonBottomOffset;
- (float)minSlidingViewX;
- (float)minButtonX;
- (void)_resetClippedItems;
- (void)_layOutButtons;
- (void)finishedSlidingAnimation:(id)fp8;
- (void)addButtonForBookmark:(id)fp8;
- (void)refreshButtons;
- (void)refreshButtonsSoon;
- (BOOL)contentsOutOfSyncWithDefaults;
- (void)preferenceValueChanged:(id)fp8;
- (void)_favoritesChanged:(id)fp8;
- (void)_bookmarksReloaded:(id)fp8;
- (void)_favoritesViewFrameChanged:(id)fp8;
- (float)rightEdgeOfFavoritesViewSubviews;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)awakeFromNib;
- (void)dealloc;
- (void)windowWillClose;
- (BOOL)bookmarkWithURLString:(id)fp8 isInArray:(id)fp12;
- (void)deleteFavoritesWithURLsMatchingBookmarks:(id)fp8;
- (void)setDraggedBookmarksPendingDeletion:(id)fp8;
- (void)deletePendingDraggedBookmarks;
- (id)_buttonAtMouseLocation:(struct _NSPoint)fp8;
- (id)_buttonWithOpenMenu;
- (void)_queueButtonMenuForPopUp:(id)fp8;
- (BOOL)hasQueuedButtonMenu;
- (void)showQueuedButtonMenu;
- (void)beginTrackingFavoritesMenus;
- (BOOL)isTrackingFavoritesMenus;
- (void)endTrackingFavoritesMenus;
- (void)_updateFavoritesTracking;
- (void)_deleteDraggedBookmark:(id)fp8;
- (void)titleChangeSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)confirmURLAndTitleForNewBookmark:(id)fp8;
- (BOOL)addDroppedBookmarks:(id)fp8 atIndex:(unsigned int)fp12;
- (unsigned int)dropIndexFromDraggingInfo:(id)fp8;
- (void)reorderedSlidingView:(id)fp8;
- (unsigned int)updateDropTarget:(id)fp8;
- (float)widthOfDraggingInfo:(id)fp8;
- (void)_URLConfirmationDidEndForNewBookmark:(id)fp8 confirmed:(BOOL)fp12 contextInfo:(void *)fp16;
- (void)addProxyWithIdentifier:(id)fp8;
- (void)undoAddProxyWithIdentifier:(id)fp8;
- (BOOL)performDragOperation:(id)fp8;
- (void)createFolderInFavoritesBar:(id)fp8;
- (id)menu;
- (void)removeProxyWithIdentifier:(id)fp8;
- (void)undoRemoveProxyWithIdentifier:(id)fp8;

@end

