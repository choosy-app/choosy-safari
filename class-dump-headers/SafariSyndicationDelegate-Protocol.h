/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SafariSyndicationDelegate <NSObject>
- (void)bookmarkFeed:(id)fp8;
- (void)redisplayPages:(id)fp8;
- (void)feed:(id)fp8 unreadCountChanged:(int)fp12;
- (void)bookmarkUUID:(id)fp8 unreadCountChanged:(int)fp12;
- (BOOL)isBookmarkedURL:(id)fp8;
@end

