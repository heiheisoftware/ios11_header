//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface IDSOTRController : NSObject
{
    NSRecursiveLock *_storageLock;
    NSMutableDictionary *_sessionStorage;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_sessionInfoToToken;
    NSMutableDictionary *_priorityToCompletionBlocks;
    NSMutableDictionary *_priorityToTimeoutBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_onQueueStartOTRNegotiationWithDeviceIfNeeded:(id)arg1 token:(id)arg2 reset:(_Bool)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)startOTRNegotiationWithDeviceIfNeeded:(id)arg1 token:(id)arg2 reset:(_Bool)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)_kickoffOTRNegotiationWithDevice:(id)arg1 token:(id)arg2 negotiationData:(id)arg3;
- (struct _SecMPPublicIdentity *)copyPairedDevicePublicIdentityWithDataProtectionClass:(unsigned int)arg1;
- (_Bool)hasMessagableOTRSessionForToken:(id)arg1;
- (void)processNegotiationData:(id)arg1 deviceUniqueID:(id)arg2 token:(id)arg3 negotiationCount:(unsigned int)arg4;
- (void)_reportOTRTestResult:(id)arg1 setupTime:(double)arg2 result:(unsigned char)arg3;
- (CDUnknownBlockType)copyOTRTestBlock:(id)arg1;
- (void)setOTRTestBlockFromCompletionBlock:(CDUnknownBlockType)arg1 token:(id)arg2;
- (void)removeAllCachedSessionsFromMainQueue;
- (_Bool)serializeSession:(struct _SecOTRSession *)arg1 token:(id)arg2;
- (void)_cacheSession:(struct _SecOTRSession *)arg1 token:(id)arg2;
- (struct _SecOTRSession *)_cachedSessionForToken:(id)arg1;
- (struct _SecOTRSession *)copySessionForToken:(id)arg1;
- (unsigned int)sessionNegotiationCount:(id)arg1;
- (_Bool)isSessionReady:(id)arg1;
- (_Bool)isSessionNegotiating:(id)arg1;
- (void)resetAllSessions;
- (void)resumeSessionNegotiation;
- (void)suspendSessionNegotiation:(id)arg1 askedByPairedDevice:(_Bool)arg2;
- (void)setSessionNegotiationComplete:(id)arg1;
- (void)setSessionNegotiationStart:(id)arg1;
- (double)sessionStartTimeWithToken:(id)arg1;
- (void)setSessionReady:(id)arg1;
- (void)setupNewSessionInfoWithToken:(id)arg1;
- (void)performOTRSessionBlock:(unsigned char)arg1 token:(id)arg2;
- (void)addOTRSessionBlock:(unsigned char)arg1 sessionBlock:(CDUnknownBlockType)arg2 key:(id)arg3;
- (id)init;

@end

