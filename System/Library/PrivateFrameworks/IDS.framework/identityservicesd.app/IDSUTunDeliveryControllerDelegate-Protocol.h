//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSProtobuf, IDSUTunDeliveryController, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol IDSUTunDeliveryControllerDelegate <NSObject>

@optional
- (NSDictionary *)deliveryControllerQueuedIncomingMessageDictionary:(IDSUTunDeliveryController *)arg1;
- (void)deliveryControllerHasSpaceforUrgentMessages:(IDSUTunDeliveryController *)arg1 dataProtectionClass:(unsigned int)arg2 ofTypes:(NSArray *)arg3;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(IDSUTunDeliveryController *)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 ofTypes:(NSArray *)arg4;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(IDSUTunDeliveryController *)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 receivedAppLevelAckWithTopic:(NSString *)arg2 deviceID:(NSString *)arg3 btUUID:(NSString *)arg4 messageID:(NSNumber *)arg5 peerResponseIdentifier:(NSString *)arg6 priority:(long long)arg7 connectionType:(long long)arg8;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 messageReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 btUUID:(NSString *)arg6 messageID:(NSNumber *)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(NSString *)arg10 messageUUID:(NSString *)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 dataReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 btUUID:(NSString *)arg6 messageID:(NSNumber *)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(NSString *)arg10 messageUUID:(NSString *)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 protobufReceived:(IDSProtobuf *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 btUUID:(NSString *)arg6 messageID:(NSNumber *)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(NSString *)arg10 messageUUID:(NSString *)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14;
@end
