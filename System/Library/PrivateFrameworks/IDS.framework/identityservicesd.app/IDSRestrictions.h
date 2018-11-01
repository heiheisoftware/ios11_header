//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class NSMutableDictionary, NSString;

@interface IDSRestrictions : NSObject <MCProfileConnectionObserver>
{
    NSMutableDictionary *_parentalControls;
    _Bool _active;
    _Bool _shouldPostNotifications;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool shouldPostNotifications; // @synthesize shouldPostNotifications=_shouldPostNotifications;
- (void).cxx_destruct;
- (void)_managedPrefsNotification:(id)arg1;
- (_Bool)shouldDisableAccount:(id)arg1;
- (_Bool)shouldDisableService:(id)arg1;
- (void)updateAccountActivation;
- (void)_updateParentalSettings;
- (id)_serviceWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

