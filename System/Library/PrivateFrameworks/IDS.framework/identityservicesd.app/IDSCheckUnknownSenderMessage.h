//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

@class NSNumber, NSString;

@interface IDSCheckUnknownSenderMessage : FTIDSMessage
{
    NSString *_hardwareVersion;
    NSString *_OSVersion;
    NSString *_softwareVersion;
    NSString *_sender;
    NSNumber *_attemptCount;
    NSString *_geo;
    long long _status;
    _Bool _abusive;
    double _delay;
}

@property double delay; // @synthesize delay=_delay;
@property _Bool abusive; // @synthesize abusive=_abusive;
@property long long status; // @synthesize status=_status;
@property(copy) NSString *geo; // @synthesize geo=_geo;
@property(copy) NSNumber *attemptCount; // @synthesize attemptCount=_attemptCount;
@property(copy) NSString *sender; // @synthesize sender=_sender;
@property(copy) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *OSVersion; // @synthesize OSVersion=_OSVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (_Bool)wantsHTTPGet;
- (id)additionalQueryStringParameters;
- (id)additionalMessageHeaders;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
