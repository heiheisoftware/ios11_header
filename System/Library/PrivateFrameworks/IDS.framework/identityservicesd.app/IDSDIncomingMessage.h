//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IDSDIncomingMessage : NSObject
{
    NSString *_guid;
    NSDictionary *_message;
    NSString *_fromID;
    NSString *_topic;
    _Bool _isLocal;
}

@property _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(copy) NSString *guid; // @synthesize guid=_guid;
@property(copy) NSString *topic; // @synthesize topic=_topic;
@property(copy) NSString *fromID; // @synthesize fromID=_fromID;
@property(copy) NSDictionary *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 fromID:(id)arg2 topic:(id)arg3 guid:(id)arg4 isLocal:(_Bool)arg5;

@end

