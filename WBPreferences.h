//
//  WBPreferences.h
//  ChoosySafari
//
//  Created by George on 16/12/2008.
//  Copyright 2008 George Brocklehurst. Some rights reserved (see accompanying LICENSE file for details).
//

@interface WBPreferences : NSObject

+ (id)sharedPreferences;
- (void)addPreferenceNamed:(NSString*)name owner:(id)owner;

@end