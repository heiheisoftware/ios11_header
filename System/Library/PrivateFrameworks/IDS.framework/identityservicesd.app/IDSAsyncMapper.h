//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSAsyncMapper : NSObject
{
}

+ (void)mapDictionary:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
+ (void)mapDictionary:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 onQueue:(id)arg4;
+ (void)mapArray:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
+ (void)mapArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 onQueue:(id)arg4;

@end

