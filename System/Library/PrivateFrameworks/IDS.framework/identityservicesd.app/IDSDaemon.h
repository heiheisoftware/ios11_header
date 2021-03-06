//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDuetInterfaceDelegate.h"
#import "IDSPushHandlerDelegate.h"
#import "IDSUTunDeliveryControllerDelegate.h"
#import "IMSystemMonitorListener.h"

@class FTMessageDelivery, IDSNegativeTTLCache, IMMultiQueue, IMPair, IMPowerAssertion, IMRemoteObjectBroadcaster, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface IDSDaemon : NSObject <IDSPushHandlerDelegate, IMSystemMonitorListener, IDSUTunDeliveryControllerDelegate, IDSDuetInterfaceDelegate>
{
    struct _opaque_pthread_mutex_t _listenerLock;
    NSMutableArray *_listeners;
    NSMutableArray *_listenerLocalObjects;
    NSMutableArray *_listenerIDs;
    NSMutableArray *_listenerServices;
    NSMutableArray *_listenerNotificationServices;
    NSMutableArray *_listenerCommands;
    NSMutableArray *_listenerCapabilities;
    NSMutableArray *_listenerEntitlements;
    NSMutableArray *_listenerBundleIDs;
    NSMutableDictionary *_queuedBroadcastAttempts;
    NSMutableDictionary *_urgentQueuedBroadcastAttempts;
    NSMutableDictionary *_defaultQueuedBroadcastAttempts;
    NSMutableDictionary *_syncQueuedBroadcastAttempts;
    NSMutableSet *_listenerCachedServices;
    NSMutableSet *_listenerCachedCommands;
    NSMutableArray *_listenerHistory;
    IMRemoteObjectBroadcaster *_notifier;
    NSDate *_birthDate;
    NSTimer *_storageTimer;
    NSMutableSet *_messagesReceivedDuringStorage;
    NSMutableSet *_forcedGDRTokens;
    NSTimer *_nonUrgentInternetSendTimer;
    long long _nonUrgentInternetLastAttempt;
    IMMultiQueue *_incomingMessageMultiQueue;
    NSMutableDictionary *_pendingOutgoingAttachments;
    NSMutableDictionary *_pendingIncomingAttachments;
    struct _opaque_pthread_mutex_t _localIncomingGUIDsLock;
    IMPair *_localIncomingGUIDs;
    IMPair *_remoteIncomingGUIDs;
    struct _opaque_pthread_mutex_t _incomingLocalPowerAssertionLock;
    unsigned long long _incomingLocalPowerAssertionClients;
    IMPowerAssertion *_incomingLocalPowerAssertion;
    id _stateMonitor;
    _Bool _isHardReset;
    _Bool _cloudPairingBeforeFirstUnlock;
    _Bool _hasProcessedMessagesAfterFirstUnlock;
    unsigned char _deviceIsAsleep;
    FTMessageDelivery *_homeKitMessageDelivery;
    IDSNegativeTTLCache *_negativeRegistrationUpdateCache;
}

+ (_Bool)entitlementDictionary:(id)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 forAccount:(id)arg4 shouldWarn:(_Bool)arg5;
+ (void)logAccessWarningForAccount:(id)arg1 withService:(id)arg2 entitlement:(id)arg3 clientEntitlements:(id)arg4 logMessage:(id)arg5;
+ (id)sharedInstance;
+ (id)pairingManager;
+ (id)accountController;
+ (id)serviceController;
+ (id)messageStoreForDataProtectionClass:(unsigned int)arg1;
+ (id)uTunDeliveryController;
+ (id)daemon;
+ (_Bool)_commandIsSessionCommand:(long long)arg1;
+ (void)_performDuetCheckAndSendForServiceIdentifier:(id)arg1 serviceDuetIdentifiers:(id)arg2 sendParameters:(id)arg3 logString:(id)arg4 fromQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(long long)arg3 messageTypes:(id)arg4 dataProtectionClass:(unsigned int)arg5;
+ (void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(long long)arg3 dataProtectionClass:(unsigned int)arg4;
+ (_Bool)_shouldReplaceLocalDestination:(id)arg1;
+ (void)_sendMessageWithSendParameters:(id)arg1 threadContext:(id)arg2 onObject:(id)arg3 willSendBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)_forwardSendMessageToAccountWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 guid:(id)arg4 dataProtectionClass:(unsigned int)arg5 willSendBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (void)sendMessageWithIDSSendParameters:(id)arg1 messageContext:(id)arg2 threadContext:(id)arg3 onObject:(id)arg4;
+ (_Bool)_canBulkMessageWithPriority:(long long)arg1 adHocServiceType:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1;
- (void)getDeliveryStatsWithMessageContext:(id)arg1;
- (void)closeSocketWithOptions:(id)arg1 messageContext:(id)arg2;
- (void)openSocketWithOptions:(id)arg1 messageContext:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2 messageContext:(id)arg3;
- (void)registerForNotificationsOnServices:(id)arg1 messageContext:(id)arg2;
- (void)setListenerServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3 messageContext:(id)arg4;
- (void)refreshBundleIDs;
- (void)_pidSuspended:(int)arg1;
- (_Bool)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(CDStruct_6ad76789)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id *)arg7;
- (_Bool)clientAtIndex:(unsigned long long)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 shouldWarn:(_Bool)arg4;
- (void)logAccessWarningForClientAtIndex:(unsigned long long)arg1 withService:(id)arg2 entitlement:(id)arg3 logMessage:(id)arg4;
- (_Bool)_shouldLaunchClientForCapabilities:(unsigned int)arg1;
- (void)_dropQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2;
- (_Bool)_processQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 forceRetry:(_Bool)arg3;
- (void)_resetQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2;
- (id)dequeueBroadcastWithID:(long long)arg1 forMessageUUID:(id)arg2 service:(id)arg3 priority:(long long)arg4;
- (void)launchOnDemandServicesForQueuedBroadcastAttempts;
- (void)_launchServiceOnDemand:(id)arg1;
- (void)enqueueIncomingMessageBroadcast:(CDUnknownBlockType)arg1 broadcastData:(id)arg2 forTopic:(id)arg3 entitlement:(id)arg4 command:(id)arg5 capabilities:(unsigned int)arg6 messageContext:(id)arg7;
- (void)enqueueBroadcast:(CDUnknownBlockType)arg1 forTopic:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned int)arg5 messageContext:(id)arg6;
- (void)_printBroadcastAttemptMapForPriority:(long long)arg1 service:(id)arg2;
- (id)broadcasterForTopic:(id)arg1 ignoreServiceListener:(_Bool)arg2 messageContext:(id)arg3;
- (id)broadcasterForTopic:(id)arg1 messageContext:(id)arg2;
- (id)registrationBroadcasterForTopic:(id)arg1 messageContext:(id)arg2;
- (id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 messageContext:(id)arg3;
- (id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 command:(id)arg3 messageContext:(id)arg4;
- (id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned int)arg4 ignoreService:(_Bool)arg5;
- (id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned int)arg4;
- (id)_lockedRemoteObjectsWithService:(id)arg1 entitlements:(id)arg2 command:(id)arg3 capabilities:(unsigned int)arg4 ignoreService:(_Bool)arg5 useNotificationServices:(_Bool)arg6;
- (id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned int)arg4 ignoreService:(_Bool)arg5 useNotificationServices:(_Bool)arg6;
- (id)_lockedRemoteObjectsWithNotificationService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned int)arg4;
- (id)broadcasterForEntitlement:(id)arg1 messageContext:(id)arg2;
- (id)broadcasterForLocalObject:(id)arg1 messageContext:(id)arg2;
- (id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2;
- (id)broadcasterWithMessageContext:(id)arg1;
- (void)_updatePushCommandsLocked;
- (id)_commands;
- (void)updateTopics;
- (void)_stopPushHandling;
- (void)_startPushHandlingLocked;
- (id)_pushTopics;
- (id)_localPushTopics;
- (void)localObjectDiedNotification:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (id)listenerWithName:(id)arg1;
- (void)removeLocalListenerObject:(id)arg1;
- (void)removeListenerObject:(id)arg1;
- (void)_removeLocalListenerObject:(id)arg1;
- (id)listenerForLocalObject:(id)arg1;
- (void)_removeListenerObject:(id)arg1;
- (void)_removeListener:(id)arg1;
- (void)validateListenerForLocalObject:(id)arg1 andPerformBlock:(CDUnknownBlockType)arg2;
- (_Bool)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 forAccessToServiceWithIdentifier:(id)arg3;
- (_Bool)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2;
- (_Bool)validateListenerForLocalObject:(id)arg1;
- (_Bool)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 entitlements:(id)arg5 setupCompletionBlock:(CDUnknownBlockType)arg6;
- (void)dropQueuedBroadcastsForServices:(id)arg1;
- (void)_flushBroadcastQueuesForServices:(id)arg1 existingServices:(id)arg2;
- (void)_resetBroadcastQueuesForServices:(id)arg1;
- (void)_cleanupListenerWithPid:(int)arg1;
- (id)_newSetupInfoWithContext:(id)arg1;
- (void)logState;
- (void)shutdown;
- (void)_terminate;
- (void)duetInterface:(id)arg1 resourceAvailabilityChangedForIdentifiers:(id)arg2;
- (void)systemDidLock;
- (void)dealloc;
- (void)_postAliveNotification;
- (void)releaseBroadcastAttemptQueue:(int)arg1;
- (id)broadcastAttemptQueueFromPriority:(int)arg1;
- (void)_cleanupIncomingFilesDirectory;
- (void)_resetPreferences;
- (void)_performSetup;
- (id)init;
- (void)homeKitRefreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 messageContext:(id)arg4;
- (void)homeKitGetUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 messageContext:(id)arg5;
- (void)homeKitGetConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 messageContext:(id)arg4;
- (void)homeKitGetAdminAccessTokensWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 messageContext:(id)arg4;
- (void)homeKitGetServiceUserIDsWithMessageContext:(id)arg1;
- (id)cloudRelayRegisteredAccountWithError:(id *)arg1;
- (void)_respondToAppleCareRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3;
- (void)appleCareSignOutUserWithRequestID:(id)arg1 messageContext:(id)arg2;
- (void)appleCareSignInUserName:(id)arg1 DSID:(id)arg2 authToken:(id)arg3 requestID:(id)arg4 messageContext:(id)arg5;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)systemDidLeaveDataProtectionLock;
- (void)_respondToRegistrationControlWithRequestID:(id)arg1 status:(long long)arg2 messageContext:(id)arg3 error:(id)arg4;
- (void)respondToRegistrationControlActionWithRequestID:(id)arg1 messageContext:(id)arg2 error:(id)arg3;
- (long long)_getCurrentRegistrationControlStatusForRegistrationType:(long long)arg1 withError:(id *)arg2;
- (void)registrationControlGetRegistrationStateForRegistrationType:(long long)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)registrationControlSetRegistrationStateForRegistrationType:(long long)arg1 toState:(long long)arg2 requestID:(id)arg3 messageContext:(id)arg4;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)regenerateRegisteredIdentityWithMessageContext:(id)arg1;
- (void)incomingAccountSyncMessage:(id)arg1 messageContext:(id)arg2;
- (void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2 forService:(id)arg3 messageContext:(id)arg4;
- (void)setPairedDeviceInfo:(id)arg1 messageContext:(id)arg2;
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3 messageContext:(id)arg4;
- (void)idsiCloudSignInDataMigratorForID:(id)arg1 messageContext:(id)arg2;
- (void)iCloudSignOutHackWithMessageContext:(id)arg1;
- (void)iCloudSignInHackWithUserName:(id)arg1 password:(id)arg2 messageContext:(id)arg3;
- (void)iCloudSignOutWithMessageContext:(id)arg1;
- (void)iCloudModifyForUserName:(id)arg1 messageContext:(id)arg2;
- (void)iCloudUpdateForUserName:(id)arg1 accountInfo:(id)arg2 messageContext:(id)arg3;
- (void)iCloudSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6 messageContext:(id)arg7;
- (void)reunionSyncCompletedForServices:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)reunionSyncStartedForServices:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)initialLocalSyncCompletedForServices:(id)arg1 messageContext:(id)arg2;
- (void)initialLocalSyncStartedForServices:(id)arg1 messageContext:(id)arg2;
- (void)getRegisteredIdentitiesWithMessageContext:(id)arg1;
- (void)repairAccountsWithMessageContext:(id)arg1;
- (void)reRegisterWithUserID:(id)arg1 action:(id)arg2 service:(id)arg3 messageContext:(id)arg4;
- (void)kickGetDependentForAccount:(id)arg1 messageContext:(id)arg2;
- (void)triggerFinalDeregisterWithMessageContext:(id)arg1;
- (void)hardDeregisterWithMessageContext:(id)arg1;
- (void)deactivateAndPurgeIdentifyForAccount:(id)arg1 messageContext:(id)arg2;
- (void)_reregisterAndReidentify:(id)arg1 account:(id)arg2 messageContext:(id)arg3;
- (void)unregisterAccount:(id)arg1 messageContext:(id)arg2;
- (void)registerAccount:(id)arg1 messageContext:(id)arg2;
- (void)deactivateAlias:(id)arg1 onAccount:(id)arg2 messageContext:(id)arg3;
- (void)activateAlias:(id)arg1 onAccount:(id)arg2 messageContext:(id)arg3;
- (void)unvalidateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3;
- (void)validateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3;
- (void)removeAliases:(id)arg1 fromAccount:(id)arg2 messageContext:(id)arg3;
- (void)addAliases:(id)arg1 toAccount:(id)arg2 messageContext:(id)arg3;
- (void)validateProfileForAccount:(id)arg1 messageContext:(id)arg2;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3 messageContext:(id)arg4;
- (void)passwordUpdatedForAccount:(id)arg1 messageContext:(id)arg2;
- (void)authenticateAccount:(id)arg1 messageContext:(id)arg2;
- (void)passwordChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3;
- (void)authTokenChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3;
- (void)setLoginID:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3;
- (void)disableAccount:(id)arg1 messageContext:(id)arg2;
- (void)enableAccount:(id)arg1 messageContext:(id)arg2;
- (void)updateAccount:(id)arg1 withAccountInfo:(id)arg2 messageContext:(id)arg3;
- (void)_removeAndDeregisterAccount:(id)arg1 messageContext:(id)arg2;
- (void)_removeAccount:(id)arg1 messageContext:(id)arg2;
- (void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5 messageContext:(id)arg6;
- (void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7 messageContext:(id)arg8;
- (id)accountWithIdentifier:(id)arg1 localObject:(id)arg2 requiredEntitlement:(id)arg3;
- (void)setAllowedTrafficClasses:(id)arg1 messageContext:(id)arg2;
- (void)getPairedDeviceInfoWithMessageContext:(id)arg1;
- (void)dropAllMessagesWithoutAnyAllowedClassifierWithMessageContext:(id)arg1;
- (void)getLocalDeviceInfoWithMessageContext:(id)arg1;
- (void)deletePairedDevice:(id)arg1 messageContext:(id)arg2;
- (void)localSetupUnpairStartWithMessageContext:(id)arg1;
- (void)localSetupUnpairWithMessageContext:(id)arg1;
- (void)stopLocalSetupWithMessageContext:(id)arg1;
- (void)connectPairedDevice:(id)arg1 messageContext:(id)arg2;
- (void)localSetupCompletedWithMessageContext:(id)arg1;
- (void)addPairedDevice:(id)arg1 messageContext:(id)arg2;
- (void)startLocalSetupWithMessageContext:(id)arg1;
- (void)_respondToRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3 pairedDevices:(id)arg4;
- (void)_respondToRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3;
- (_Bool)_validateListenerForLocalPairingWithMessageContext:(id)arg1 error:(id *)arg2;
- (void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)setAllowedTrafficClassifiersForDevice:(id)arg1 classifiers:(id)arg2 requestID:(id)arg3 messageContext:(id)arg4;
- (id)_sortedArrayFromCBUUIDSet:(id)arg1;
- (id)_pairedDeviceCBUUIDs;
- (id)_pairingDeviceCBUUIDs;
- (void)getPairedDevicesWithRequestID:(id)arg1 messageContext:(id)arg2;
- (void)getPairingDevicesWithRequestID:(id)arg1 messageContext:(id)arg2;
- (void)forgetDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)unpairDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)stopLocalPairingForDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)unpairStartForDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)deletePairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)redeliverMessagesForDevice:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)switchActivePairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)setupCompletedForPairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)connectPairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (void)addPairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3;
- (id)serverBagForBagType:(long long)arg1;
- (id)pushHandlerForAPSDelegatePort;
- (id)daemonXPCInterface;
- (id)serverStorageStateMachine;
- (id)centralRegListener;
- (id)registrationPushManager;
- (id)systemMonitor;
- (id)messageStoreMigrator;
- (id)messageStoreForDataProtectionClass:(unsigned int)arg1;
- (id)idStatusQueryController;
- (id)daemonMIGQueryInterface;
- (id)daemonMIGInterface;
- (id)currentDevice;
- (id)sessionController;
- (id)encryptionController;
- (id)pairingManager;
- (id)deviceHeartbeatCenter;
- (id)accountController;
- (id)registrationController;
- (id)uTunDeliveryController;
- (id)uTunController;
- (id)restrictions;
- (id)daemonCapabilities;
- (id)serviceController;
- (_Bool)_isDeviceInAccountRegistration:(id)arg1 forService:(id)arg2;
- (_Bool)_shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1 service:(id)arg2;
- (_Bool)shouldProxyMessageForService:(id)arg1 toIdentifier:(id)arg2;
- (_Bool)_checkIfDupeAndNoteGuid:(id)arg1 local:(_Bool)arg2 topic:(id)arg3;
- (_Bool)_checkIfDupeAndNoteGuid:(id)arg1 local:(_Bool)arg2 topic:(id)arg3 forceNoteGuid:(_Bool)arg4;
- (long long)_messageTypeForConnection:(long long)arg1;
- (void)sendAppAckWithGUID:(id)arg1 toDestination:(id)arg2 forAccountWithUniqueID:(id)arg3 connectionType:(long long)arg4 messageContext:(id)arg5;
- (void)acknowledgeMessageWithGUID:(id)arg1 forAccountWithUniqueID:(id)arg2 broadcastTime:(id)arg3 messageSize:(id)arg4 priority:(id)arg5 messageContext:(id)arg6;
- (void)acknowledgeMessageWithStorageGUID:(id)arg1 realGUID:(id)arg2 forAccountWithUniqueID:(id)arg3 broadcastTime:(id)arg4 messageSize:(id)arg5 priority:(id)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8 messageContext:(id)arg9;
- (void)acknowledgeOutgoingMessageWithGUID:(id)arg1 alternateCallbackID:(id)arg2 forAccountWithUniqueID:(id)arg3 messageContext:(id)arg4;
- (void)_addIncomingGUIDsWithGuid:(id)arg1 isLocal:(_Bool)arg2 hasLock:(_Bool)arg3;
- (void)_ackMessageWithSequenceNumber:(unsigned int)arg1 forDeviceID:(id)arg2 priority:(long long)arg3 connectionType:(long long)arg4 guid:(id)arg5;
- (void)cancelItemWithIdentifier:(id)arg1 service:(id)arg2 messageContext:(id)arg3;
- (void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(long long)arg7 connectionType:(long long)arg8;
- (void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14;
- (void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14;
- (void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14;
- (_Bool)_shouldStoreBeforeFirstUnlockIncomingLocalMessage:(id)arg1 from:(id)arg2 forTopic:(id)arg3;
- (id)_incomingMessageStorageDictionaryForPayload:(id)arg1 topic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 command:(id)arg5 messageUUID:(id)arg6 sequenceNumber:(id)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(id)arg10;
- (id)_decryptAOverCMessage:(id)arg1 topic:(id)arg2 fromDeviceID:(id)arg3;
- (void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3;
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)handler:(id)arg1 isConnectedChanged:(_Bool)arg2;
- (_Bool)_isBulkingStorageMessagesForService:(id)arg1;
- (void)_noteLastItemFromStorage:(id)arg1;
- (void)_noteItemFromStorage:(id)arg1;
- (void)_updateStorageTimerWithInterval:(double)arg1;
- (void)_storageTimerFired;
- (void)_processIncomingRemoteResourceTransferMessage:(id)arg1 guid:(id)arg2 context:(id)arg3 specificOriginator:(id)arg4 broadcastTopic:(id)arg5 toIdentifier:(id)arg6 topic:(id)arg7 messageContext:(id)arg8;
- (void)_decryptEngramMessage:(id)arg1 groupID:(id)arg2 senderToken:(id)arg3 fromID:(id)arg4 guid:(id)arg5 messageContext:(id)arg6;
- (void)_processIncomingRemoteMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 storedGuid:(id)arg4 messageContext:(id)arg5;
- (_Bool)_processNonMessagingPayloadWithCommand:(id)arg1 dictionaryPayload:(id)arg2 senderToken:(id)arg3 topic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 peerResponseIdentifier:(id)arg7 guid:(id)arg8 service:(id)arg9 shouldFilter:(_Bool)arg10 messageContext:(id)arg11;
- (id)_payloadFromDecryptedData:(id)arg1;
- (void)_processMessageError:(_Bool)arg1 topLevelMessage:(id)arg2 error:(id)arg3 messageID:(id)arg4 service:(id)arg5 serviceType:(id)arg6 token:(id)arg7 fromIdentifier:(id)arg8 toIdentifier:(id)arg9 groupID:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)_processStoredMessagesIncludingClassD:(_Bool)arg1;
- (void)_handleSpaceBecomingAvailableForUrgentLocalMessagesWithDataProtectionClasses:(id)arg1 withMessageTypes:(id)arg2;
- (void)_processStoredOutgoingUrgentMessagesProcessLocalAccounts:(_Bool)arg1;
- (void)_processMessagesUponUnpairing;
- (void)_processDisallowedMessages;
- (void)_processDeletingMessagesWithPriority:(long long)arg1 reason:(id)arg2 responseCode:(long long)arg3 allowedTrafficClasses:(id)arg4;
- (void)_processStoredIncomingMessages;
- (void)_processStoredIncomingRemoteMessagesWithGUIDs:(id)arg1;
- (void)_processStoredIncomingLocalMessages;
- (void)_processStoredIncomingLocalMessage:(id)arg1;
- (void)_processIncomingLocalMessage:(id)arg1 topic:(id)arg2 command:(id)arg3 deviceID:(id)arg4 btUUID:(id)arg5 context:(id)arg6 storedGUID:(id)arg7 priority:(id)arg8 connectionType:(long long)arg9;
- (void)getLocalIncomingPowerAssertion:(id)arg1 queue:(id)arg2;
- (void)_handleIncomingAttachmentMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forGroupID:(id)arg3 forTopic:(id)arg4 fromID:(id)arg5 isLiveRetry:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (double)_decryptionRetryInterval;
- (void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forGroupID:(id)arg3 forTopic:(id)arg4 fromID:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (_Bool)_shouldRetryForDecryptionErrorType:(long long)arg1;
- (_Bool)_shouldReplyWithRemoteDecryptionErrorMessageForDecryptionErrorType:(long long)arg1;
- (_Bool)_shouldForgetCachedPeerTokensForDecryptionErrorType:(long long)arg1;
- (_Bool)_shouldForgetCachedPeerTokensForIncomingRemoteDecryptionErrorType:(long long)arg1;
- (_Bool)_shouldDropMessageForIncomingDecryptionErrorType:(long long)arg1;
- (void)_enqueueBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 forKey:(id)arg3;
- (void)_processOutgoingNonUrgentInternetMessages;
- (_Bool)_canSendNonUrgentInternetMessageForTopic:(id)arg1;
- (_Bool)_rollDieForNonUrgentInternetSend;
- (double)_nonUrgentInternetSendProbabilityForCurrentWindow;
- (long long)_currentSecondsIntoDay;
- (_Bool)_hasNonUrgentInternetSendingBudget;
- (void)_updateNonUrgentInternetSendTimer;
- (void)_nonUrgentInternetSendTimerFired;
- (_Bool)_canBulkMessageWithParameters:(id)arg1;
- (void)_performDuetCheckAndSendForAccount:(id)arg1 sendParameters:(id)arg2 logString:(id)arg3 fromQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 messageTypes:(id)arg4;
- (void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 messageTypes:(id)arg4;
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3 messageTypes:(id)arg4;
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 ofTypes:(id)arg4;
- (void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2 ofTypes:(id)arg3;
- (void)failedDecryptingMessage:(id)arg1 reason:(long long)arg2 forGroupID:(id)arg3 onService:(id)arg4 messageContext:(id)arg5;
- (void)testCloudQRConnection:(id)arg1 messageContext:(id)arg2;
- (void)startOTRTest:(id)arg1 priority:(long long)arg2 messageContext:(id)arg3;
- (void)setLinkPreferences:(id)arg1 service:(id)arg2 messageContext:(id)arg3;
- (void)setPreferInfraWiFi:(_Bool)arg1 service:(id)arg2 messageContext:(id)arg3;
- (void)_sendErrorMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(_Bool)arg5 dataToEncrypt:(id)arg6 wantsResponse:(_Bool)arg7 timeout:(double)arg8 command:(id)arg9 priority:(long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)sendMessageWithSendParameters:(id)arg1 messageContext:(id)arg2;
- (void)_fetchAccountEntitlements:(id *)arg1 listenerID:(id *)arg2 inContext:(id)arg3;
- (_Bool)_canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2;
- (void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3 messageContext:(id)arg4;
- (void)_registerForCheckpointAndVacuumDB;
- (void)_cleanupExpiredIncomingMessages;
- (void)_cleanupIncomingMessageDatabase;
- (void)_cleanupOutgoingExpiredMessages;
- (void)_cleanupOutgoingQWSMessages;
- (unsigned long long)_maxMessagesForRunawayClientConsideration;
- (unsigned long long)_maxOutgoingDatabasesSizeInMB;
- (void)_cleanupRunawayClientOutgoingMessages;
- (void)_cleanupOutgoingMessages;
- (void)_cleanupOutgoingMessageDatabase;
- (void)_cleanUpOutgoingMessageDatabaseAndClearStatementCache;
- (void)_failSavedMessageCleanly:(id)arg1 withResponseCode:(long long)arg2;
- (void)_failSavedMessagesCleanly:(id)arg1 withResponseCode:(long long)arg2;
- (void)continuityDisconnectFromPeer:(id)arg1 messageContext:(id)arg2;
- (void)continuityConnectToPeer:(id)arg1 messageContext:(id)arg2;
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2 messageContext:(id)arg3;
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2 messageContext:(id)arg3;
- (void)continuityStopScanningForType:(long long)arg1 messageContext:(id)arg2;
- (void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5 messageContext:(id)arg6;
- (void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6 messageContext:(id)arg7;
- (void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 messageContext:(id)arg4;
- (void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 messageContext:(id)arg5;
- (void)continuityStopAdvertisingOfType:(long long)arg1 messageContext:(id)arg2;
- (void)continuityStartAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 messageContext:(id)arg4;
- (void)continuityClientInstanceCreatedWithMessageContext:(id)arg1;
- (_Bool)_checkContinuityEntitlementForMessageContext:(id)arg1;
- (id)wpLinkManager;
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 requestID:(id)arg3 messageContext:(id)arg4;
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4 messageContext:(id)arg5;
- (void)reportiMessageSpam:(id)arg1 toURI:(id)arg2 messageContext:(id)arg3;
- (id)participantsForGroupID:(id)arg1 forNotifierWithUniqueID:(id)arg2 messageContext:(id)arg3;
- (void)cleanupGroupStatusNotifier:(id)arg1 messageContext:(id)arg2;
- (void)setupNewStatusNotifierWithConfiguration:(id)arg1 messageContext:(id)arg2;
- (id)_notifierWithUniqueID:(id)arg1 messageContext:(id)arg2;
- (void)leaveGroupSession:(id)arg1 participantInfo:(id)arg2 messageContext:(id)arg3;
- (void)joinGroupSession:(id)arg1 participantInfo:(id)arg2 messageContext:(id)arg3;
- (void)updateMembers:(id)arg1 forGroupID:(id)arg2 isTriggeredLocally:(_Bool)arg3 forSessionWithUniqueID:(id)arg4 messageContext:(id)arg5;
- (void)sendAllocationRequest:(id)arg1 options:(id)arg2 messageContext:(id)arg3;
- (void)acknowledgeSessionID:(id)arg1 clientID:(id)arg2 messageContext:(id)arg3;
- (void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3;
- (void)setPreferences:(id)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3;
- (void)setMuted:(_Bool)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3;
- (void)setAudioEnabled:(_Bool)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3;
- (void)sendSessionMessage:(id)arg1 toSession:(id)arg2 messageContext:(id)arg3;
- (void)endSession:(id)arg1 withData:(id)arg2 messageContext:(id)arg3;
- (void)endSession:(id)arg1 messageContext:(id)arg2;
- (void)declineInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3;
- (void)declineInvitation:(id)arg1 messageContext:(id)arg2;
- (void)cancelInvitation:(id)arg1 withRemoteEndedReasonOverride:(unsigned int)arg2 messageContext:(id)arg3;
- (void)cancelInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3;
- (void)cancelInvitation:(id)arg1 messageContext:(id)arg2;
- (void)acceptInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3;
- (void)acceptInvitation:(id)arg1 messageContext:(id)arg2;
- (void)sendInvitation:(id)arg1 withData:(id)arg2 declineOnError:(_Bool)arg3 messageContext:(id)arg4;
- (void)sendInvitation:(id)arg1 withOptions:(id)arg2 messageContext:(id)arg3;
- (void)cleanupSession:(id)arg1 messageContext:(id)arg2;
- (void)setupNewSessionWithConfiguration:(id)arg1 messageContext:(id)arg2;
- (id)_sessionWithUniqueID:(id)arg1 messageContext:(id)arg2 requiredEntitlement:(id)arg3;
- (_Bool)_checkEntitlement:(id)arg1 forAccountWithID:(id)arg2 messageContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

