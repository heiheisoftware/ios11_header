//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTMessageDelivery.h"

#import "IDSRegistrationCenterMessageDelivery.h"

@class IDSBaseMessage, NSArray, NSString;

@interface FTMessageDelivery (IDSRegistrationCenter) <IDSRegistrationCenterMessageDelivery>

// Remaining properties
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool logToRegistration;
@property(readonly) NSArray *queuedMessages;
@property _Bool retryInAirplaneMode;
@property(readonly) Class superclass;
@property(copy) NSString *userAgent;
@end

