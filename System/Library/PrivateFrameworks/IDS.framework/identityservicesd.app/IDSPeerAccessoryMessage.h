//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSPeerMessage.h"

#import "NSCopying.h"

@class NSData;

@interface IDSPeerAccessoryMessage : IDSPeerMessage <NSCopying>
{
    NSData *_accessToken;
}

@property(copy) NSData *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)messageBody;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

