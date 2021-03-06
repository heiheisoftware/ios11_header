//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface IDSHomeKitCloudRelayUserAccessTokensMessage : FTIDSMessage <NSCopying>
{
    NSString *_subService;
    NSString *_serviceUserID;
    NSString *_userID;
    NSString *_userHandle;
    NSArray *_accessoryRequests;
    NSArray *_responseAccessTokens;
}

@property(copy) NSArray *responseAccessTokens; // @synthesize responseAccessTokens=_responseAccessTokens;
@property(copy) NSArray *accessoryRequests; // @synthesize accessoryRequests=_accessoryRequests;
@property(copy) NSString *userHandle; // @synthesize userHandle=_userHandle;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
@property(copy) NSString *subService; // @synthesize subService=_subService;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (id)bagKey;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

