//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSClientDataEngramKeyStore.h"
#import "IDSKeychainWrapperListener.h"

@class CUTPromiseSeal, IDSCloudKitContainer, IDSKeychainWrapper, NSData, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface IDSEngramKeyStore : NSObject <IDSClientDataEngramKeyStore, IDSKeychainWrapperListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCloudKitContainer *_ckContainer;
    CUTPromiseSeal *_seal;
    NSHashTable *_listeners;
    NSData *_deviceKey;
    IDSKeychainWrapper *_keychainWrapper;
}

+ (id)_keychainIdentifier;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSData *deviceKey; // @synthesize deviceKey=_deviceKey;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(readonly, nonatomic) IDSCloudKitContainer *ckContainer; // @synthesize ckContainer=_ckContainer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)notifyListenersEngramKeyStoreDidUpdateIdentities;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)keychainWrapperDidBecomeAvailable;
- (void)rollAccountIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (void)existingFullDeviceIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (id)rollFullDeviceIdentityWithCluster:(id)arg1 error:(id *)arg2;
- (void)existingAccountIdentityClusterWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountIdentityClusterForRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (id)accountIdentityElector;
- (_Bool)isEngramEnabled;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

