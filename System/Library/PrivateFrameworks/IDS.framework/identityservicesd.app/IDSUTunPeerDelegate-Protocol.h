//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSProtobuf, IDSUTunPeer, NSArray, NSData, NSNumber, NSString;

@protocol IDSUTunPeerDelegate <NSObject>
- (void)peerHasSpaceForUrgentMessages:(IDSUTunPeer *)arg1 dataProtectionClass:(unsigned int)arg2 withTypes:(NSArray *)arg3;
- (void)peerHasSpaceForNonUrgentMessages:(IDSUTunPeer *)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withTypes:(NSArray *)arg4;
- (void)peerHasSpaceForNonUrgentMessages:(IDSUTunPeer *)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)peer:(IDSUTunPeer *)arg1 receivedAppLevelAckWithTopic:(NSString *)arg2 fromID:(NSString *)arg3 messageID:(NSNumber *)arg4 peerResponseIdentifier:(NSString *)arg5 priority:(long long)arg6 connectionType:(long long)arg7;
- (void)peer:(IDSUTunPeer *)arg1 messageReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 fromID:(NSString *)arg5 messageID:(NSNumber *)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(NSString *)arg9 messageUUID:(NSString *)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13;
- (void)peer:(IDSUTunPeer *)arg1 dataReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 fromID:(NSString *)arg5 messageID:(NSNumber *)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(NSString *)arg9 messageUUID:(NSString *)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13;
- (void)peer:(IDSUTunPeer *)arg1 protobufReceived:(IDSProtobuf *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 fromID:(NSString *)arg5 messageID:(NSNumber *)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(NSString *)arg9 messageUUID:(NSString *)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13;
- (void)peerConnectivityChanged:(IDSUTunPeer *)arg1;
- (void)peerNearbyStateChanged:(IDSUTunPeer *)arg1 forceNotify:(_Bool)arg2;
@end

