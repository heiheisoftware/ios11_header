//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSCloudKitContainer, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface IDSDServiceController : NSObject
{
    NSMutableDictionary *_services;
    NSMutableDictionary *_servicesToNameMap;
    NSMutableDictionary *_servicesToTopicMap;
    NSMutableDictionary *_deviceIDToSubServicesMap;
    NSSet *_allAdHocServices;
    NSObject<OS_dispatch_queue> *_queue;
    IDSCloudKitContainer *_ckContainer;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) IDSCloudKitContainer *ckContainer; // @synthesize ckContainer=_ckContainer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *allAdHocServices; // @synthesize allAdHocServices=_allAdHocServices;
- (void).cxx_destruct;
- (id)cloudKitContainerForServiceName:(id)arg1;
- (id)cloudKitContainerForService:(id)arg1;
- (id)serviceWithPushTopic:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (id)serviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) __weak NSArray *allServicesStrings;
@property(readonly, nonatomic) __weak NSArray *allServices;
@property(readonly, nonatomic) NSSet *allPrimaryServices;
- (id)allServicesWithAdHocServiceType:(unsigned int)arg1;
- (id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2;
- (void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3;
- (_Bool)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2;
- (id)_combinedServicesForAllDevices;
- (void)_loadSubServices;
- (void)_saveSubServices;
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;
- (void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_unloadServiceWithName:(id)arg1;
- (void)_loadService:(id)arg1;
- (void)_loadServiceWithDictionary:(id)arg1;
- (void)_loadServices;
- (id)init;

@end

