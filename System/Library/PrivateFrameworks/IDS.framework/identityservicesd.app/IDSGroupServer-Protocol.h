//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber;

@protocol IDSGroupServer <NSObject>
- (void)queryGroupServerForENID:(NSData *)arg1 withCompletion:(void (^)(IDSGroupGetMessage *, NSError *, long long, NSDictionary *, NSArray *))arg2;
- (void)publishGroupForKey:(NSData *)arg1 data:(NSData *)arg2 signature:(NSData *)arg3 forwardingSig:(NSData *)arg4 ENID:(NSData *)arg5 version:(NSNumber *)arg6 completion:(void (^)(IDSGroupPutMessage *, NSError *, long long, NSDictionary *, NSArray *))arg7;
@end

