//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSPairingManagerDelegate.h"
#import "IDSUTunPeerDelegate.h"
#import "IMSystemMonitorListener.h"

@class IMTimer, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;

@interface IDSUTunDeliveryController : NSObject <IDSUTunPeerDelegate, IMSystemMonitorListener, IDSPairingManagerDelegate>
{
    struct _opaque_pthread_mutex_t _deviceIDToPeerLock;
    NSMutableDictionary *_deviceIDToPeer;
    NSMutableDictionary *_btuuidToSessionID;
    struct _opaque_pthread_mutex_t _streamIDToTopicLock;
    NSMutableDictionary *_streamIDToTopic;
    unsigned int _messageID;
    double _lastConnectedTime;
    id <IDSUTunDeliveryControllerDelegate> _delegate;
    _Bool _isLinkForDefaultPeerConnected;
    NSHashTable *_connectivityDelegates;
    struct _opaque_pthread_mutex_t _trafficClassLock;
    NSSet *_allowedTrafficClasses;
    _Bool _enableOTR;
    IMTimer *_otrTimer;
    _Bool _otrInitialized;
    _Bool _localAccountSetupCompleted;
    _Bool _defaultPeerConnectedDeferred;
    struct _opaque_pthread_mutex_t _continuityPeerLock;
    NSMutableDictionary *_lockedPeerMap;
    NSMutableDictionary *_peerListMap;
    NSMutableDictionary *_pendingPeerMap;
    NSMutableDictionary *_peerConnectBlocksMap;
    NSMutableDictionary *_peerFailureBlocksMap;
    double _lastCloudConnectedTime;
}

+ (id)sharedInstance;
@property(nonatomic) double lastCloudConnectedTime; // @synthesize lastCloudConnectedTime=_lastCloudConnectedTime;
@property(readonly, nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enableOTRForDefaultPairedDevice;
- (id)_currentOTRTimer;
- (id)pairingManager;
- (id)sessionIDforPeer:(id)arg1;
- (_Bool)isPeerForPhoneContinuityLocalMessage:(id)arg1;
- (void)tryNextContinuityPeer:(id)arg1;
- (void)addContinuityPeer:(id)arg1 btUUID:(id)arg2 connectBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)pendingContinuityPeerID:(id)arg1;
- (id)lockedContinuityPeerID:(id)arg1;
- (void)unlockAllContinuityPeers;
- (void)unlockContinuityPeer:(id)arg1;
- (void)lockContinuityPeer:(id)arg1 btUUID:(id)arg2;
- (void)_cleanupContinuityPeerMaps:(id)arg1;
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;
- (void)findDefaultPeerToForceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)didUpdatePairedDevice:(id)arg1;
- (void)didRemovePairedDevice:(id)arg1;
- (void)didAddPairedDevice:(id)arg1;
- (void)_disableOTRForDefaultPairedDevice;
- (void)_enableOTRForDefaultPairedDevice;
- (void)_setOTREnableTimer;
- (void)defaultPeerDropDisallowedMessages;
- (void)defaultPeerUnpairStart;
- (void)defaultPeerSetLinkPreferences:(id)arg1;
- (void)defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;
- (void)defaultPeerMagnetIndicationOfAwakeStateChanged:(_Bool)arg1;
- (void)defaultPeerCloudConnectivityChanged:(_Bool)arg1;
- (void)defaultPeerNearbyChanged:(_Bool)arg1;
- (void)defaultPeerConnectivityChanged:(_Bool)arg1;
- (void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2 withTypes:(id)arg3;
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withTypes:(id)arg4;
- (void)peerCloudConnectivityChanged:(id)arg1;
- (void)peerConnectivityChanged:(id)arg1;
- (void)peerNearbyStateChanged:(id)arg1 forceNotify:(_Bool)arg2;
- (void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7;
- (void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13;
- (void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13;
- (void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13;
- (id)_deviceIDForPeer:(id)arg1;
- (void)removeConnectivityDelegate:(id)arg1;
- (void)addConnectivityDelegate:(id)arg1;
- (void)addUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2;
- (void)removeUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 reason:(long long)arg3;
- (void)removeUTunPeerWithSessionID:(id)arg1 reason:(long long)arg2;
- (void)systemScreenDidPowerDown;
@property(retain, nonatomic) NSSet *allowedTrafficClasses; // @synthesize allowedTrafficClasses=_allowedTrafficClasses;
@property(readonly) NSDictionary *queuedIncomingMessageDictionary;
@property(readonly) NSDictionary *sendingMessageStatistics;
@property(readonly) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly) NSDictionary *syncPriorityMessageStatistics;
- (void)setTopics:(id)arg1;
- (_Bool)hasSpaceForCloudMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;
- (void)enableCloudConnectionForDefaultPairedDevice:(_Bool)arg1;
- (void)enableConnectionForDefaultPairedDevice:(_Bool)arg1;
- (void)localAccountSetupCompleted;
@property(readonly, nonatomic) _Bool defaultPeerIsCloudConnected;
@property(readonly, nonatomic) _Bool defaultPeerIsNearby;
@property(readonly, nonatomic) _Bool defaultPeerIsConnected;
@property(readonly, nonatomic) _Bool isPresent;
- (id)topicForStreamID:(unsigned short)arg1;
- (void)cancelMessageID:(id)arg1;
- (void)sendData:(id)arg1 service:(id)arg2 protobuf:(id)arg3 resourcePath:(id)arg4 resourceMetadata:(id)arg5 priority:(long long)arg6 dataProtectionClass:(unsigned int)arg7 nonWaking:(_Bool)arg8 nonCloudWaking:(_Bool)arg9 requireBluetooth:(_Bool)arg10 queueOneIdentifier:(id)arg11 expirationDate:(id)arg12 enforceRemoteTimeouts:(_Bool)arg13 expectsPeerResponse:(_Bool)arg14 wantsAppAck:(_Bool)arg15 compressPayload:(_Bool)arg16 compressed:(_Bool)arg17 peerResponseIdentifier:(id)arg18 messageID:(id)arg19 topic:(id)arg20 awdTopic:(id)arg21 command:(id)arg22 fromID:(id)arg23 uriToDeviceID:(id)arg24 localDeviceDestinationDeviceUUID:(id)arg25 bypassDuet:(_Bool)arg26 duetIdentifiersOverride:(id)arg27 messageType:(long long)arg28 fallbackBlock:(CDUnknownBlockType)arg29 completionBlock:(CDUnknownBlockType)arg30;
- (id)_createPeerFromDeviceInfo:(id)arg1;
- (void)_removePeerFromDeviceID:(id)arg1;
- (void)setPendingCloudFlagOnDefaultPeer;
- (void)updatecloudDeliveryStateOnDefaultPeer;
- (void)prepareForQuickSwitch;
- (_Bool)localSetupInProgress;
- (void)localSetupCompleted;
- (void)localSetupStarted;
- (void)deviceWithUniqueID:(id)arg1 updatedUUID:(id)arg2;
- (void)setDeviceUniqueIDToCBUUID:(id)arg1;
- (id)hashForString:(id)arg1;
- (id)_copyPairedDevice;
- (id)_copyPeerWithID:(id)arg1;
- (id)copyPeerWithID:(id)arg1;
- (unsigned int)_nextMessageID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

