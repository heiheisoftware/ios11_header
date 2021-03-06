//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVConferenceDelegate.h"

@class AVConference, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface _IDSSessionConnection : NSObject <AVConferenceDelegate>
{
    AVConference *_connection;
    NSMutableArray *_connectionInfos;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id <_IDSSessionConnectionDelegate> _delegate;
    long long _callID;
    long long _connType;
    long long _localCell;
    long long _remoteCell;
    _Bool _connectionActive;
    _Bool _connectionEnableAudio;
}

@property(nonatomic) __weak id <_IDSSessionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)remoteCell;
- (long long)localCell;
- (long long)connectionType;
- (long long)callID;
- (unsigned int)natType;
- (_Bool)muted;
- (void)setMuted:(_Bool)arg1;
- (_Bool)getAudioEnabled;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)sendData:(id)arg1;
- (_Bool)stopConnection:(id *)arg1;
- (_Bool)startConnectionAsInitiator:(_Bool)arg1 peerProtocolVersion:(unsigned int)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)createConnectionData:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)receivedRemoteConnectionData:(id)arg1;
- (long long)bestCallID;
- (id)connectionInfoForCallID:(long long)arg1;
- (id)connectionInfoWithState:(long long)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)serverDiedForConference:(id)arg1;
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;
- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;

@end

