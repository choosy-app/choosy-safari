/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BookmarkSource.h"

@class BonjourServiceCollector, NSImage, NSMutableArray, NSNetService, TabLocation, WebBookmark;

@interface BonjourController : BookmarkSource
{
    BonjourServiceCollector *_httpCollector;
    BonjourServiceCollector *_wikiCollector;
    BonjourServiceCollector *_lprPrinterCollector;
    BonjourServiceCollector *_httpPrinterPageCollector;
    NSMutableArray *_wikiServices;
    NSMutableArray *_printerPageServices;
    NSMutableArray *_uncategorizedServices;
    NSMutableArray *_orderedNonEmptyCategories;
    WebBookmark *_aboutBonjourBookmark;
    NSImage *_bonjourIcon;
    NSNetService *_serviceToVisit;
    int _windowPolicyForServiceToVisit;
    TabLocation *_tabLocationForServiceToVisit;
}

+ (id)sharedBonjourController;
- (id)init;
- (void)dealloc;
- (void)netService:(id)fp8 didNotResolve:(id)fp12;
- (void)netServiceDidResolveAddress:(id)fp8;
- (void)bonjourServiceCollector:(id)fp8 didFindService:(id)fp12 moreComing:(BOOL)fp16;
- (void)bonjourServiceCollector:(id)fp8 didRemoveService:(id)fp12 moreComing:(BOOL)fp16;
- (BOOL)canCopyContents;
- (id)child:(unsigned int)fp8 ofContentItem:(id)fp12;
- (void)didCollapseContentItem:(id)fp8;
- (void)didExpandContentItem:(id)fp8;
- (BOOL)contentItemCanHaveChildren:(id)fp8;
- (id)contentItemsToInitiallyExpand;
- (id)contentItemsToExpandOnReload;
- (unsigned int)numberOfChildrenOfContentItem:(id)fp8;
- (id)bookmarkFromContentItem:(id)fp8;
- (void)goToContentItem:(id)fp8 tabLocation:(id)fp12;
- (void)goToContentItemInNewWindow:(id)fp8;
- (void)goToContentItemInNewTab:(id)fp8 tabLocation:(id)fp12;
- (id)titleStringForContentItem:(id)fp8;
- (id)imageForContentItem:(id)fp8;
- (id)bookmarkSourceMenuTitle;
- (id)bookmarkSourceImage;
- (void)menuNeedsUpdate:(id)fp8;
- (BOOL)menuHasKeyEquivalent:(id)fp8 forEvent:(id)fp12 target:(id *)fp16 action:(SEL *)fp20;

@end

