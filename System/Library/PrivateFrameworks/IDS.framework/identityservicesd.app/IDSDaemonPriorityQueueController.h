//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface IDSDaemonPriorityQueueController : NSObject
{
    NSObject<OS_dispatch_queue> *_sync_queue;
    NSObject<OS_dispatch_queue> *_default_queue;
    NSObject<OS_dispatch_queue> *_urgent_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)assertRunningOnMain;
- (void)assertRunningWithPriority:(long long)arg1;
- (void)performBlockSYNCHRONOUSLYWithPriority:(CDUnknownBlockType)arg1 priority:(int)arg2;
- (void)performBlockWithPriority:(CDUnknownBlockType)arg1 priority:(int)arg2;
- (void)performBlockMainQueue:(CDUnknownBlockType)arg1;
- (void)performBlockUrgentPriority:(CDUnknownBlockType)arg1;
- (void)performBlockDefaultPriority:(CDUnknownBlockType)arg1;
- (void)performBlockSyncPriority:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 withImplicitPriority:(int)arg2;
- (id)_queueForImplicitPriority:(long long)arg1;
- (id)queueForPriority:(long long)arg1;
- (id)init;

@end

