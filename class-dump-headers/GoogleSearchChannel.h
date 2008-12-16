/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SearchChannel.h"

@class NSString;

@interface GoogleSearchChannel : SearchChannel
{
    NSString *_serverName;
    NSString *_leafName;
    NSString *_catSpecifier;
}

+ (id)searchChannelWithShortLabel:(id)fp8 mediumLabel:(id)fp12 longLabel:(id)fp16 serverName:(id)fp20 leafName:(id)fp24 catSpecifier:(id)fp28;
- (id)initWithShortLabel:(id)fp8 mediumLabel:(id)fp12 longLabel:(id)fp16 serverName:(id)fp20 leafName:(id)fp24 catSpecifier:(id)fp28;
- (void)dealloc;
- (id)URLWithSearchCriteria:(id)fp8;
- (BOOL)validURL:(id)fp8;
- (id)localSearchStringFromWebSearchString:(id)fp8;

@end
