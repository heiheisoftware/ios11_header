//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface IDSPairedDeviceRepository : NSObject
{
    NSMutableDictionary *_pairedDevices;
    NSObject<OS_dispatch_semaphore> *_pairedDevicesLock;
    id <IDSPairedDevicePersister> _persister;
}

- (void).cxx_destruct;
- (void)_accessPairedDevicesInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_criticalPersistState;
- (_Bool)_criticalPerformTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_performTransactionInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 capabilityFlags:(unsigned long long)arg2;
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 capabilityFlags:(unsigned long long)arg2;
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;
- (_Bool)_criticalPurgeSecuredEncryptionKeysForAllPairedDevices;
- (_Bool)purgeSecuredEncryptionKeysForAllPairedDevices;
- (id)_criticalActivePairedDevice;
- (id)activePairedDevice;
- (void)_criticalUpdatePairedDevice:(id)arg1 isActive:(_Bool)arg2;
- (long long)_criticalPerformPairedDeviceActivationWithCBUUID:(id)arg1;
- (void)_criticalPerformPairedDeviceDeactivation;
- (long long)_criticalActivatePairedDeviceWithCBUUID:(id)arg1;
- (void)deactivatePairedDevices;
- (long long)activatePairedDeviceWithCBUUID:(id)arg1;
- (_Bool)isEmpty;
- (id)pairedDevicesWithIsPairingValue:(_Bool)arg1;
- (id)_criticalAllPairedDevices;
- (id)allPairedDevices;
- (_Bool)_criticalRemovePairedDeviceWithCBUUID:(id)arg1;
- (_Bool)removePairedDeviceWithCBUUID:(id)arg1;
- (void)_criticalPutPairedDevice:(id)arg1;
- (_Bool)_addPairedDevice:(id)arg1;
- (_Bool)addPairedDeviceWithCBUUID:(id)arg1;
- (id)_criticalPairedDeviceWithCBUUID:(id)arg1;
- (id)pairedDeviceWithCBUUID:(id)arg1;
- (_Bool)containsPairedDeviceWithCBUUID:(id)arg1;
- (void)_criticalLoadPairedDeviceArray:(id)arg1;
- (_Bool)loadPairedDevicesFromStorage;
- (id)description;
- (id)initWithPersister:(id)arg1;

@end

