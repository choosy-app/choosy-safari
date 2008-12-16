/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSNetServiceBrowser;

@interface BonjourServiceCollector : NSObject
{
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableArray *_services;
    NSMutableDictionary *_serviceNameToServices;
    id _delegate;
}

- (void)dealloc;
- (id)delegate;
- (id)initWithServiceType:(id)fp8 inDomain:(id)fp12;
- (id)services;
- (id)servicesNamed:(id)fp8;
- (unsigned int)countOfServicesNamed:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)netServiceBrowser:(id)fp8 didFindService:(id)fp12 moreComing:(BOOL)fp16;
- (void)netServiceBrowser:(id)fp8 didRemoveService:(id)fp12 moreComing:(BOOL)fp16;

@end

