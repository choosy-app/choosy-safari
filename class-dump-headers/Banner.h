/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class BarBackground, NSView;

@interface Banner : NSObject
{
    NSView *bannerContents;
    NSView *firstKeySubview;
    NSView *lastKeySubview;
    NSObject *_delegate;
    NSView *_viewBelowBanner;
    BarBackground *_bannerView;
    BOOL _animationInProgress;
    BOOL _animatingIntoPlace;
    struct _NSRect _animationEnclosingRect;
    double _animationStartTime;
    double _animationDuration;
}

+ (double)animationDuration;
+ (id)bannerColor;
+ (int)bannerSortOrder;
+ (BOOL)bannerHasBottomBorder;
- (id)init;
- (void)dealloc;
- (id)bannerNibName;
- (id)bannerView;
- (int)compareBanners:(id)fp8;
- (id)delegate;
- (void)didInstallBannerView;
- (void)didUninstallBannerView;
- (void)installWithAnimation:(BOOL)fp8;
- (BOOL)isInstalled;
- (void)setDelegate:(id)fp8;
- (void)uninstall:(id)fp8;
- (void)uninstallWithAnimation:(BOOL)fp8;
- (void)viewBelowBannerWasResizedFromFrame:(struct _NSRect)fp8 animationProgress:(float)fp24 installing:(BOOL)fp28;
- (void)willInstallBannerView;
- (void)willUninstallBannerView;

@end
