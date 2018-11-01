//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

#import "NSCopying.h"

@class NSArray, NSNumber, NSString;

@interface IDSPreflightMessage : FTIDSMessage <NSCopying>
{
    NSString *_protocolVersion;
    NSNumber *_phoneNumberValidationRetryCount;
    NSString *_hardwareVersion;
    NSString *_osVersion;
    NSString *_softwareVersion;
    NSString *_deviceName;
    NSString *_IMSI;
    NSString *_PLMN;
    NSString *_testData;
    NSNumber *_responseStatus;
    NSArray *_responseMechanisms;
}

@property(copy, nonatomic) NSArray *responseMechanisms; // @synthesize responseMechanisms=_responseMechanisms;
@property(copy, nonatomic) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy, nonatomic) NSString *testData; // @synthesize testData=_testData;
@property(copy, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
@property(copy, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy, nonatomic) NSNumber *phoneNumberValidationRetryCount; // @synthesize phoneNumberValidationRetryCount=_phoneNumberValidationRetryCount;
@property(copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (id)bagKey;
- (id)requiredKeys;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
