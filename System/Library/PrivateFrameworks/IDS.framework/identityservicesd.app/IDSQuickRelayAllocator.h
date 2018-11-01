//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSPushHandlerDelegate.h"

@class IDSPushHandler, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSQuickRelayAllocator : NSObject <IDSPushHandlerDelegate>
{
    IDSPushHandler *_pushHandler;
    NSMutableDictionary *_requestIDToSession;
    NSMutableDictionary *_sessionToAllocations;
    NSMutableArray *_sessionInfoRequiredKeys;
    NSMutableSet *_pendingRecipientsAcceptedSessions;
    NSMutableDictionary *_pendingInitiatorsAcceptedSessionsWithToken;
    NSMutableDictionary *_requestIDToAllocateTime;
    NSMutableDictionary *_quickRelayMultiwaySessionInfo;
    NSMutableDictionary *_idsSessionIDToqrSessionID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)getCountOfSessionToAllocations;
- (unsigned long long)getCountOfPendingRecipientsAcceptedSessions;
- (void)stopKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;
- (void)startKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;
- (id)_getResponse:(id)arg1 relaySessionID:(id)arg2;
- (id)_uuidFromNSStringToNSData:(id)arg1;
- (id)_getGroupID:(id)arg1;
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)enablePushHandler:(_Bool)arg1;
- (id)_parseQuickRelayDefaults;
- (id)quickRelayMultiwaySessionInfo;
- (void)setQuickRelayMultiwaySessionInfo:(id)arg1;
- (id)_findAllocationForSessionID:(id)arg1 requestIDStr:(id)arg2;
- (id)_findAllocationListForSessionID:(id)arg1;
- (void)_removeAllAllocationsForSessionID:(id)arg1;
- (void)_discardAllocation:(id)arg1;
- (void)_addAllocationForSession:(id)arg1 allocation:(id)arg2;
- (void)invalidateAllocation:(id)arg1;
- (void)_invalidateSession:(id)arg1;
- (void)invalidateSession:(id)arg1;
- (void)reportAWDAllocatorEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5;
- (long long)getServerProviderForIDSSessionID:(id)arg1;
- (void)setInitiatorsAcceptedToken:(id)arg1 pushToken:(id)arg2;
- (void)requestAllocationForRecipient:(id)arg1;
- (id)getPushTokenForRelaySessionID:(id)arg1 relaySessionID:(id)arg2;
- (id)getRelaySessionIDForIDSSessionID:(id)arg1 pushToken:(id)arg2;
- (void)_startQRConnectionForSession:(id)arg1 isInitiatorsAcceptedSession:(_Bool)arg2;
- (id)_getStatusMessageFromStatusCode:(unsigned long long)arg1;
- (void)_sendAWDMetricsForAllocation:(id)arg1 status:(long long)arg2 hasRecipientAccepted:(_Bool)arg3;
- (void)_processAllocationStatusResult:(id)arg1;
- (_Bool)_hasSessionInfoRequiredKeys:(id)arg1;
- (void)_setSessionInfoRequiredKeys;
- (id)_createSessionInfoFromResponsePayload:(id)arg1;
- (void)_processSelfAllocations:(id)arg1 allocation:(id)arg2;
- (_Bool)_isDuplicateResponse:(id)arg1 newResponse:(id)arg2;
- (void)_handleIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2;
- (id)getAdditionalAllocationForAddress:(id)arg1 selfAddress:(unsigned int)arg2 relaySessionID:(id)arg3 allocateType:(long long)arg4 qrReason:(unsigned short)arg5 previousTime:(unsigned long long)arg6 previousError:(unsigned short)arg7 previousRelayIP:(unsigned int)arg8 previousAccessToken:(id)arg9 requestSelfAllocation:(_Bool)arg10;
- (_Bool)_startQRConnectionWithDefaults:(id)arg1;
- (id)setupNewAllocation:(id)arg1 sessionID:(id)arg2 fromIdentity:(id)arg3 fromURI:(id)arg4 fromService:(id)arg5 options:(id)arg6 connectReadyHandler:(CDUnknownBlockType)arg7;
- (id)_getSelfAllocationFromCache:(id)arg1;
- (_Bool)invalidateLatestResponse:(id)arg1 qrReason:(unsigned short)arg2 previousError:(unsigned short)arg3;
- (_Bool)_addConnectStatus:(id)arg1 relaySessionID:(id)arg2 previousTime:(unsigned long long)arg3 qrReason:(unsigned short)arg4 previousError:(unsigned short)arg5 previousRelayIP:(unsigned int)arg6 previousAccessToken:(id)arg7;
- (_Bool)_addResponseToCache:(id)arg1 sessionInfo:(id)arg2;
- (id)_getResponseForQRSessionID:(id)arg1 sessionID:(id)arg2 index:(long long *)arg3;
- (_Bool)_shouldUseCurrentResponse:(id)arg1 cachedMessage:(id)arg2;
- (id)_getResponseFromCache:(id)arg1;
- (id)setupNewAllocationToDevice:(id)arg1 options:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3;
- (id)_setupAllocation:(id)arg1 fromURI:(id)arg2 sessionID:(id)arg3 options:(id)arg4 prevConnectStatus:(CDStruct_b3ab6eb3 *)arg5 requestUUID:(id)arg6 connectReadyHandler:(CDUnknownBlockType)arg7;
- (_Bool)_sendKeepAliveRequest:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

