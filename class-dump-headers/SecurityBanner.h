/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "Banner.h"

@class NSTextField;

@interface SecurityBanner : Banner
{
    NSTextField *warningField;
}

+ (id)bannerColor;
+ (int)bannerSortOrder;
- (id)bannerNibName;
- (void)reportNonFraudulentSite:(id)fp8;
- (void)moreInfo:(id)fp8;
- (void)setWarning:(id)fp8;

@end

