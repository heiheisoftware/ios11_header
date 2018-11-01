//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface IDSIDQueryMessage : FTIDSMessage <NSCopying>
{
    _Bool _resultExpected;
    NSArray *_uris;
    NSString *_weight;
    NSDictionary *_responseIdentities;
    NSString *_requiredForMessaging;
}

@property _Bool resultExpected; // @synthesize resultExpected=_resultExpected;
@property(copy) NSString *requiredForMessaging; // @synthesize requiredForMessaging=_requiredForMessaging;
@property(copy) NSDictionary *responseIdentities; // @synthesize responseIdentities=_responseIdentities;
@property(copy) NSString *weight; // @synthesize weight=_weight;
@property(copy, setter=setURIs:) NSArray *uris; // @synthesize uris=_uris;
- (void).cxx_destruct;
- (double)anisetteHeadersTimeout;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (_Bool)hasRequiredKeys:(id *)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (id)dataUsageBundleIdentifier;
- (_Bool)wantsBodySignature;
- (_Bool)allowDualDelivery;
- (_Bool)wantsHTTPGet;
- (_Bool)wantsManagedRetries;
- (id)additionalMessageHeaders;
- (id)additionalQueryStringParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
