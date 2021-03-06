//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IDSLinkPreferencesManager : NSObject
{
    struct _opaque_pthread_mutex_t _preferencesLock;
    NSMutableDictionary *_servicesWithPreferences;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)accumulativePreferencesForAllServices;
- (id)preferencesForService:(id)arg1;
- (_Bool)_validatePreferences:(id)arg1 forService:(id)arg2;
- (void)resetPreferencesForAllServices;
- (void)updateService:(id)arg1 withPreferences:(id)arg2;
- (void)dealloc;
- (id)init;

@end

