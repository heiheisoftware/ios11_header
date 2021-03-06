//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTMessageDelivery, IMMultiQueue, NSMutableDictionary;

@interface IDSDSessionController : NSObject
{
    NSMutableDictionary *_sessions;
    FTMessageDelivery *_messageDelivery;
    IMMultiQueue *_sessionIDMultiQueue;
}

+ (id)sharedInstance;
@property(readonly) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
- (void).cxx_destruct;
- (void)updateCriticalReliabilityState;
- (id)sessionWithUniqueID:(id)arg1;
- (id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3;
- (void)_handleClientDeath:(id)arg1;
- (void)cleanupSessionsForClient:(id)arg1;
- (void)cleanupSession:(id)arg1;
- (void)processIncomingGroupSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingSessionReinitiateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingSessionEndMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingSessionCancelMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingSessionDeclineMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingSessionAcceptMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3;
- (void)processIncomingInvitationWithPayload:(id)arg1 topic:(id)arg2 fromToken:(id)arg3 fromID:(id)arg4 toID:(id)arg5 shouldFilter:(_Bool)arg6 messageContext:(id)arg7;
- (id)setupNewIncomingSessionWithOptions:(id)arg1;
- (id)setupNewOutgoingSessionWithOptions:(id)arg1;
- (void)dealloc;
- (id)init;

@end

