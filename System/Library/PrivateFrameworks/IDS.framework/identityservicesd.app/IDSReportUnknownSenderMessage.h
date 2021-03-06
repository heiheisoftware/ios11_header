//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

@class NSString;

@interface IDSReportUnknownSenderMessage : FTIDSMessage
{
    int _messageServerTimestamp;
    NSString *_unknownSenderURI;
    NSString *_messageID;
    NSString *_responseMessage;
}

@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property int messageServerTimestamp; // @synthesize messageServerTimestamp=_messageServerTimestamp;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSString *unknownSenderURI; // @synthesize unknownSenderURI=_unknownSenderURI;
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

