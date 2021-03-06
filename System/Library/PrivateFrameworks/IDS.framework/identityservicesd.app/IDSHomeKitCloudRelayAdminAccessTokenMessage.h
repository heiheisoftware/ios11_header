//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

#import "NSCopying.h"

@class NSData, NSNumber, NSString;

@interface IDSHomeKitCloudRelayAdminAccessTokenMessage : FTIDSMessage <NSCopying>
{
    NSString *_subService;
    NSString *_serviceUserID;
    NSString *_accessoryID;
    NSData *_pairingToken;
    NSString *_responseAccessoryID;
    NSData *_responseAdminAcccessToken;
    NSNumber *_responseExpiry;
}

@property(copy) NSNumber *responseExpiry; // @synthesize responseExpiry=_responseExpiry;
@property(copy) NSData *responseAdminAcccessToken; // @synthesize responseAdminAcccessToken=_responseAdminAcccessToken;
@property(copy) NSString *responseAccessoryID; // @synthesize responseAccessoryID=_responseAccessoryID;
@property(copy) NSData *pairingToken; // @synthesize pairingToken=_pairingToken;
@property(copy) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
@property(copy) NSString *subService; // @synthesize subService=_subService;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (id)bagKey;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

