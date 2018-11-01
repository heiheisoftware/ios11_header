//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IDSAppleIDNotificationCenter : NSObject
{
    NSMutableArray *_availableNotifications;
    NSMutableArray *_usageNotifications;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 hardwareVersion:(id)arg5 serviceType:(id)arg6;
- (void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_noteNewUsageNotification:(id)arg1;
- (void)_noteNewAvailableNotification:(id)arg1;
- (void)_processUsageNotifications;
- (void)_processAvailableNotifications;
- (id)_localizedServicesUsageStringForDevice:(id)arg1 useSingular:(_Bool)arg2;
- (void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 deviceModel:(id)arg5 serviceTypes:(id)arg6;
- (void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5 blockMap:(id)arg6;
- (id)init;

@end

