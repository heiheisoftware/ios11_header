//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol IDSPeerIDQueryHandlerDelegate <NSObject>
- (void)forgetSessionTokensForURI:(NSString *)arg1 fromURI:(NSString *)arg2 service:(NSString *)arg3;
- (_Bool)hasPeerTokensForURI:(NSString *)arg1 fromURI:(NSString *)arg2 service:(NSString *)arg3;
- (_Bool)finishedQueryWithInfo:(NSDictionary *)arg1 forURI:(NSString *)arg2 fromURI:(NSString *)arg3 service:(NSString *)arg4;
@end

