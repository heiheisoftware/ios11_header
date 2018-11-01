//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

@class NSArray, NSString;

@interface IDSReportSpamMessage : FTIDSMessage
{
    NSArray *_spamMessages;
    NSString *_responseMessage;
    NSArray *_responseSpamMessages;
}

@property(copy) NSArray *responseSpamMessages; // @synthesize responseSpamMessages=_responseSpamMessages;
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSArray *spamMessages; // @synthesize spamMessages=_spamMessages;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (double)anisetteHeadersTimeout;
- (_Bool)wantsManagedRetries;
- (_Bool)wantsBodySignature;
- (int)maxTimeoutRetries;
- (_Bool)wantsExtraTimeoutRetry;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
