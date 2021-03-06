//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSStallDetector, NSDictionary, NSMutableArray, NSMutableData, NSObject<OS_nw_connection>, NSString;

@interface IDSUTunControlChannel : NSObject
{
    NSString *_deviceUniqueID;
    NSString *_cbuuid;
    int _sd;
    CDUnknownBlockType _receiveHandler;
    _Bool _receiveHandlerBeingCalled;
    NSMutableData *_pendingDataReceive;
    NSMutableData *_pendingDataSend;
    NSMutableArray *_outgoingMessages;
    NSMutableArray *_outgoingPriorityMessages;
    _Bool _sendingPriorityMessage;
    _Bool _sendSuspended;
    _Bool _newSocket;
    int _fairplayAuthState;
    unsigned int _grappaHostSessionID;
    unsigned int _grappaDeviceSessionID;
    _Bool _isDefaultPairedDevice;
    _Bool _isDefaultPairedDeviceEncrypting;
    _Bool _isDefaultPairedDevicePairedLocally;
    _Bool _isDefaultPairedDevicePairedRemotely;
    struct _SecMPFullIdentity *_localIdentity;
    struct _SecMPPublicIdentity *_remoteIdentity;
    _Bool _disableEncryption;
    _Bool _didReceiveReestablishmentRequest;
    double _reestablishmentRequestReceiveTime;
    int _dataReceivedWithoutMessageCount;
    NSObject<OS_nw_connection> *_serviceConnection;
    IDSStallDetector *_outgoingStallDetector;
    _Bool _checksumEnabled;
    _Bool _avoidMainQueueOverrideToNO;
    NSDictionary *_remoteDeviceEncryptionInfo;
}

@property(retain, nonatomic) IDSStallDetector *outgoingStallDetector; // @synthesize outgoingStallDetector=_outgoingStallDetector;
@property(nonatomic) _Bool avoidMainQueueOverrideToNO; // @synthesize avoidMainQueueOverrideToNO=_avoidMainQueueOverrideToNO;
@property(nonatomic) _Bool checksumEnabled; // @synthesize checksumEnabled=_checksumEnabled;
@property(nonatomic) double reestablishmentRequestReceiveTime; // @synthesize reestablishmentRequestReceiveTime=_reestablishmentRequestReceiveTime;
@property(nonatomic) _Bool didReceiveReestablishmentRequest; // @synthesize didReceiveReestablishmentRequest=_didReceiveReestablishmentRequest;
@property(copy, nonatomic) NSDictionary *remoteDeviceEncryptionInfo; // @synthesize remoteDeviceEncryptionInfo=_remoteDeviceEncryptionInfo;
@property(copy, nonatomic) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(nonatomic) _Bool disableEncryption; // @synthesize disableEncryption=_disableEncryption;
@property(nonatomic) _Bool isDefaultPairedDevicePairedRemotely; // @synthesize isDefaultPairedDevicePairedRemotely=_isDefaultPairedDevicePairedRemotely;
@property(nonatomic) _Bool isDefaultPairedDevicePairedLocally; // @synthesize isDefaultPairedDevicePairedLocally=_isDefaultPairedDevicePairedLocally;
@property(nonatomic) _Bool isDefaultPairedDeviceEncrypting; // @synthesize isDefaultPairedDeviceEncrypting=_isDefaultPairedDeviceEncrypting;
- (void)setDefaultPairedDeviceOptions:(id)arg1;
- (void)resumeOTRNegotiation;
- (void)suspendOTRNegotiation:(id)arg1;
- (_Bool)processSuspendOTRNegotiationMessage:(id)arg1;
- (void)sendSuspendOTRNegotiationMessage:(id)arg1;
- (_Bool)processOTRNegotiationMessage:(id)arg1;
- (void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned int)arg2 negotiationData:(id)arg3;
- (void)_destroyFairplayDeviceSession;
- (void)_destroyFairplayHostSession;
- (void)_handleFairplayAuthenticationFailure;
- (_Bool)processFairplayDeviceSessionInfo:(id)arg1;
- (_Bool)processFairplayDeviceInfo:(id)arg1;
- (_Bool)processFairplayHostSessionInfo:(id)arg1;
- (void)startFairplayAuthentication;
- (id)_utunControlMessageFairplayDeviceSessionInfo:(char *)arg1 grappaDeviceSessionInfoSize:(unsigned int)arg2;
- (id)_utunControlMessageFairplayHostSessionInfo:(unsigned char)arg1 deviceType:(unsigned char)arg2 protocolVersion:(unsigned int)arg3;
- (id)_utunControlMessageFairplayDeviceInfo;
- (void)dealloc;
- (void)invalidate;
- (void)sendPriorityMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)_checkSendNewMessage;
- (void)clearChannel;
@property(readonly, nonatomic) _Bool connected;
- (void)useSocket:(int)arg1 serviceConnection:(id)arg2 withFirstMessage:(id)arg3;
@property(readonly, nonatomic) _Bool isDefaultPairedDeviceStartingToEncrypt;
- (void)encryptControlChannelForDefaultPairedDevice;
- (void)simulateDecryptionFailure;
- (void)_closeSocket;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 receiveHandler:(CDUnknownBlockType)arg3;
- (id)description;

@end

