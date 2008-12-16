/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SpotlightDataSource <NSObject>
- (id)itemsToAddForSpotlightDataType:(id)fp8;
- (id)itemsToDeleteForSpotlightDataType:(id)fp8;
- (id)allItemsForSpotlightDataType:(id)fp8;
- (void)resetAdditionsAndDeletionsForSpotlightDataType:(id)fp8;
- (void)updateWillBeginForSpotlightDataType:(id)fp8;
- (void)updateDidEndForSpotlightDataType:(id)fp8;
@end

