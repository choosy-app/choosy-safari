/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol Activity <NSObject>
- (id)title;
- (id)URL;
- (void)open;
- (void)download;
- (id)statusString;
- (int)stage;
- (int)displayOrder;
@end
