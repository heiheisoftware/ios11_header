//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSUUID;

@interface IDSUTunControlMessage_Hello : NSObject
{
    NSString *_controlChannelVersion;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_model;
    NSNumber *_pairingProtocolVersion;
    NSNumber *_minCompatibilityVersion;
    NSNumber *_maxCompatibilityVersion;
    NSNumber *_capabilityFlags;
    NSNumber *_serviceMinCompatibilityVersion;
    NSUUID *_instanceID;
    NSUUID *_deviceUniqueID;
}

@property(copy) NSUUID *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(copy) NSUUID *instanceID; // @synthesize instanceID=_instanceID;
@property(copy) NSNumber *serviceMinCompatibilityVersion; // @synthesize serviceMinCompatibilityVersion=_serviceMinCompatibilityVersion;
@property(copy) NSNumber *capabilityFlags; // @synthesize capabilityFlags=_capabilityFlags;
@property(copy) NSNumber *maxCompatibilityVersion; // @synthesize maxCompatibilityVersion=_maxCompatibilityVersion;
@property(copy) NSNumber *minCompatibilityVersion; // @synthesize minCompatibilityVersion=_minCompatibilityVersion;
@property(copy) NSNumber *pairingProtocolVersion; // @synthesize pairingProtocolVersion=_pairingProtocolVersion;
@property(copy) NSString *model; // @synthesize model=_model;
@property(copy) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(copy) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy) NSString *productName; // @synthesize productName=_productName;
@property(copy) NSString *controlChannelVersion; // @synthesize controlChannelVersion=_controlChannelVersion;
- (void).cxx_destruct;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 loggingPrefixString:(id)arg3;
- (id)data;
- (id)init;
- (id)description;

@end
