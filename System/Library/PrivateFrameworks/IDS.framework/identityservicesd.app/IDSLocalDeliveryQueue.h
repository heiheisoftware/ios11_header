//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSLocalDeliveryQueue : NSObject
{
    NSMutableArray *_messages;
    NSString *_identifier;
    NSMutableDictionary *_statistics;
    struct _opaque_pthread_mutex_t _statisticsLock;
}

- (void).cxx_destruct;
- (void)clearStats;
- (id)statisticsForDataProtectionClass:(unsigned int)arg1;
@property(readonly) NSDictionary *statistics;
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;
- (void)_removeMessageFromStatistics:(id)arg1;
- (void)_addMessageToStatistics:(id)arg1;
- (id)nextSocketPairMessageNotOnServices:(id)arg1;
- (void)dequeueMessage:(id)arg1;
- (void)enqueueMessage:(id)arg1;
- (void)pushMessage:(id)arg1;
- (void)removeMessages:(id)arg1;
- (unsigned long long)countForDataMessageType:(long long)arg1;
- (unsigned long long)countForDataProtectionClass:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *messages;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
