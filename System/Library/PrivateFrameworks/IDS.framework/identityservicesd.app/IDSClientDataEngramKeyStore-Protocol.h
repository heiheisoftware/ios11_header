//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IDSMPFullAccountIdentityCluster, IDSMPFullDeviceIdentity;

@protocol IDSClientDataEngramKeyStore
- (IDSMPFullDeviceIdentity *)rollFullDeviceIdentityWithCluster:(IDSMPFullAccountIdentityCluster *)arg1 error:(id *)arg2;
- (void)accountIdentityClusterForRegistrationWithCompletion:(void (^)(IDSMPFullAccountIdentityCluster *, NSError *))arg1;
@end

