//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSQuickRelayAllocateMessage, NSData, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSString, QRSelfAllocationArray;

@interface QRAllocation : NSObject
{
    NSString *_requestIDStr;
    NSString *_sessionIDStr;
    IDSQuickRelayAllocateMessage *_request;
    NSMutableSet *_responses;
    NSMutableDictionary *_pushTokenToQRSessionID;
    NSData *_recipientPushToken;
    double _startTime;
    double _duration;
    CDUnknownBlockType _connectReadyHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    QRSelfAllocationArray *_selfAllocations;
}

@property(copy) CDUnknownBlockType connectReadyHandler; // @synthesize connectReadyHandler=_connectReadyHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy) NSData *recipientPushToken; // @synthesize recipientPushToken=_recipientPushToken;
@property(retain) NSMutableDictionary *pushTokenToQRSessionID; // @synthesize pushTokenToQRSessionID=_pushTokenToQRSessionID;
@property(retain) NSMutableSet *responses; // @synthesize responses=_responses;
@property(copy) IDSQuickRelayAllocateMessage *request; // @synthesize request=_request;
@property(copy) NSString *sessionIDStr; // @synthesize sessionIDStr=_sessionIDStr;
@property(copy) NSString *requestIDStr; // @synthesize requestIDStr=_requestIDStr;
- (void).cxx_destruct;
- (id)getAllocation;
- (void)addAllocation:(id)arg1;
- (void)_allocationTimeout;
- (void)cancelAllocationTimeoutTimer;
- (void)_purgeAllocation;
- (void)setPurgeAtExpiration:(double)arg1;
- (void)dealloc;
- (id)initWithResponse:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

