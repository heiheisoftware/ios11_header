//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IDSStatusQueryQueue : NSObject
{
    NSMutableArray *_queue;
}

- (void).cxx_destruct;
- (void)enqueueQueryBlock:(CDUnknownBlockType)arg1 cleanup:(CDUnknownBlockType)arg2;
- (void)_callStateChanged;
- (void)dealloc;
- (id)init;

@end

