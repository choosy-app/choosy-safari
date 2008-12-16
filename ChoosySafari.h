//
//  ChoosySafari.h
//  ChoosySafari
//
//  Created by George on 16/12/2008.
//  Copyright 2008 George Brocklehurst. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface ChoosySafari : NSObject 

+ (BOOL)renameSelector:(SEL)originalSelector toSelector:(SEL)newSelector onClass:(Class)class;

@end
