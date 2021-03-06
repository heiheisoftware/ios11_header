//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDSIncomingMessageBroadcast : NSObject
{
    long long _broadcastID;
    CDUnknownBlockType _broadcastBlock;
    _Bool _broadcastNeedsClientAck;
    _Bool _broadcastPerformed;
    NSString *_messageUUID;
    long long _messagePriority;
    NSString *_messageSenderID;
    unsigned int _messageSequenceNumber;
}

@property(nonatomic) unsigned int messageSequenceNumber; // @synthesize messageSequenceNumber=_messageSequenceNumber;
@property(retain, nonatomic) NSString *messageSenderID; // @synthesize messageSenderID=_messageSenderID;
@property(nonatomic) long long messagePriority; // @synthesize messagePriority=_messagePriority;
@property(retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) _Bool broadcastPerformed; // @synthesize broadcastPerformed=_broadcastPerformed;
@property(nonatomic) _Bool broadcastNeedsClientAck; // @synthesize broadcastNeedsClientAck=_broadcastNeedsClientAck;
@property(copy, nonatomic) CDUnknownBlockType broadcastBlock; // @synthesize broadcastBlock=_broadcastBlock;
@property(nonatomic) long long broadcastID; // @synthesize broadcastID=_broadcastID;
- (void).cxx_destruct;
- (id)initWithBroadcastBlock:(CDUnknownBlockType)arg1 needsClientAck:(_Bool)arg2 messageUUID:(id)arg3 priority:(long long)arg4 senderID:(id)arg5 sequenceNumber:(unsigned int)arg6;
- (id)init;

@end

