//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSDeviceConnectionInfo, IDSGenericConnection;

@interface IDSConnectionContext : NSObject
{
    CDUnknownBlockType _readHandler;
    IDSGenericConnection *_connection;
    IDSDeviceConnectionInfo *_deviceConnectionInfo;
}

@property(retain, nonatomic) IDSDeviceConnectionInfo *deviceConnectionInfo; // @synthesize deviceConnectionInfo=_deviceConnectionInfo;
@property(retain, nonatomic) IDSGenericConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
- (void)dealloc;
- (id)initWithReadHandler:(CDUnknownBlockType)arg1;

@end
