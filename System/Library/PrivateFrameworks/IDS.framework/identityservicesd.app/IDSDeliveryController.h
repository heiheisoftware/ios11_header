//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSPushHandlerDelegate.h"

@class FTMessageDelivery, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSDeliveryController : NSObject <IDSPushHandlerDelegate>
{
    FTMessageDelivery *_messageDelivery;
    NSMutableDictionary *_messageQueue;
    NSMutableArray *_pendingOfflineMessages;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sendMessageDictionary:(id)arg1 messageID:(id)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(_Bool)arg5 expirationDate:(id)arg6 enforceRemoteTimeouts:(_Bool)arg7 canUseLargePayload:(_Bool)arg8 sendOnePerToken:(_Bool)arg9 allowPartialSendsToSucceed:(_Bool)arg10 priority:(long long)arg11 fireAndForget:(_Bool)arg12 fromID:(id)arg13 fromIdentity:(id)arg14 toPeople:(id)arg15 accessToken:(id)arg16 topic:(id)arg17 registrationProperties:(id)arg18 fakeMessage:(_Bool)arg19 alwaysSkipSelf:(_Bool)arg20 disallowRefresh:(_Bool)arg21 checkpointTrace:(id)arg22 destinationObject:(id)arg23 ackBlock:(CDUnknownBlockType)arg24 willSendBlock:(CDUnknownBlockType)arg25 sendCompletionBlock:(CDUnknownBlockType)arg26;
- (void)_sendErrorDictionary:(id)arg1 onService:(id)arg2 fromID:(id)arg3 fromIdentity:(id)arg4 toID:(id)arg5 toToken:(id)arg6 topic:(id)arg7 sendCompletionBlock:(CDUnknownBlockType)arg8;
- (void)_sendMessageDictionary:(id)arg1 lastRetryInterval:(double)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(_Bool)arg5 canUseLargePayload:(_Bool)arg6 sendOnePerToken:(_Bool)arg7 allowPartialSendsToSucceed:(_Bool)arg8 highPriority:(_Bool)arg9 fireAndForget:(_Bool)arg10 expirationDate:(id)arg11 enforceRemoteTimeouts:(_Bool)arg12 messageID:(id)arg13 fromID:(id)arg14 fromIdentity:(id)arg15 toID:(id)arg16 toPeople:(id)arg17 accessToken:(id)arg18 topic:(id)arg19 registrationProperties:(id)arg20 fakeMessage:(_Bool)arg21 alwaysSkipSelf:(_Bool)arg22 disallowRefresh:(_Bool)arg23 checkpointTrace:(id)arg24 destinationObject:(id)arg25 ackBlock:(CDUnknownBlockType)arg26 willSendBlock:(CDUnknownBlockType)arg27 sendCompletionBlock:(CDUnknownBlockType)arg28;
- (void)sendIDSMessage:(id)arg1 service:(id)arg2 topic:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_sendMessage:(id)arg1 dataToEncrypt:(id)arg2 onService:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 canUseLargePayload:(_Bool)arg8 sendOnePerToken:(_Bool)arg9 allowPartialSendsToSucceed:(_Bool)arg10 registrationProperties:(id)arg11 fakeMessage:(_Bool)arg12 alwaysSkipSelf:(_Bool)arg13 disallowRefresh:(_Bool)arg14 checkpointTrace:(id)arg15 destinationObject:(id)arg16 willSendBlock:(CDUnknownBlockType)arg17 completionBlock:(CDUnknownBlockType)arg18 firstAttemptDate:(id)arg19;
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;
- (void)_updateDestination:(id)arg1 forService:(id)arg2 queriedURIs:(id)arg3 fromID:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_sendAttachmentWithGuid:(id)arg1 service:(id)arg2 topic:(id)arg3 originalCommand:(id)arg4 additionalDictionary:(id)arg5 encryptedData:(id)arg6 toToken:(id)arg7 toID:(id)arg8 fromID:(id)arg9 fromIdentity:(id)arg10 canUseLargePayload:(_Bool)arg11 checkpointTrace:(id)arg12 destinationObject:(id)arg13 ackBlock:(CDUnknownBlockType)arg14 completionBlock:(CDUnknownBlockType)arg15;
- (void)_sendFTFanoutMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toPeople:(id)arg4 fromIdentity:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_sendFTMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toID:(id)arg4 toToken:(id)arg5 toSessionToken:(id)arg6 toPeople:(id)arg7 fromIdentity:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)_queueMessage:(id)arg1 service:(id)arg2 dataToEncrypt:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 originallyToPeople:(id)arg8 canUseLargePayload:(_Bool)arg9 sendOnePerToken:(_Bool)arg10 registrationProperties:(id)arg11 fakeMessage:(_Bool)arg12 alwaysSkipSelf:(_Bool)arg13 disallowRefresh:(_Bool)arg14 checkpointTrace:(id)arg15 destinationObject:(id)arg16 willSendBlock:(CDUnknownBlockType)arg17 completionBlock:(CDUnknownBlockType)arg18;
- (void)_discardMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3;
- (void)_emptyMessagesForURIs:(id)arg1 service:(id)arg2;
- (unsigned long long)_destinationCountForURIsAndTokens:(id)arg1;
- (id)encryptionController;
- (id)peerIDManager;
- (id)_sessionTokensForMessage:(id)arg1 URIs:(id)arg2 service:(id)arg3;
- (long long)_maxPayloadSizeForMessage:(id)arg1;
- (_Bool)_forceAttachmentForMessage:(id)arg1;
- (_Bool)_sendAsAttachmentForMessage:(id)arg1 payloadData:(id)arg2;
- (void)_handleMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3;
- (void)_handleMessagesForURIs:(id)arg1 originalURIs:(id)arg2 service:(id)arg3 fromID:(id)arg4;
- (void)_handleAccessoryMessageForID:(id)arg1 msg:(id)arg2 service:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_checkFastDormancy;
- (id)_keyForURIs:(id)arg1 service:(id)arg2;
- (void)_processMessageResponse:(id)arg1 error:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7;
- (long long)_effectiveMaxPayloadSizeIfCanUseLargePayload:(_Bool)arg1;
- (void)handler:(id)arg1 isConnectedChanged:(_Bool)arg2;
- (_Bool)isSupportedEngramVersionNumber:(long long)arg1;
- (long long)groupCryptoMinVersionNumber;
- (_Bool)shouldMinimizeBagCacheTime;
- (id)awdLogger;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

