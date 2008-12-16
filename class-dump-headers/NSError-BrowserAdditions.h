/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSError.h"

@interface NSError (BrowserAdditions)
+ (void)initialize;
+ (id)browserErrorWithCode:(int)fp8;
+ (id)browserErrorWithCode:(int)fp8 failingURL:(id)fp12;
+ (id)cancelledErrorWithURL:(id)fp8;
- (id)errorSummary;
- (BOOL)errorIsInDomain:(id)fp8;
- (BOOL)isCancelledError;
- (BOOL)isPolicyChangeError;
- (id)failingURL;
@end
