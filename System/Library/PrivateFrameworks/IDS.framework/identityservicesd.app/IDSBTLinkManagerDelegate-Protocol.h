//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSBTLinkManager;

@protocol IDSBTLinkManagerDelegate <NSObject>
- (void)manager:(IDSBTLinkManager *)arg1 linkDidDisconnect:(id)arg2;
- (void)manager:(IDSBTLinkManager *)arg1 linkDidConnect:(id)arg2;
- (void)manager:(IDSBTLinkManager *)arg1 didPowerStateChange:(_Bool)arg2;

@optional
- (void)manager:(IDSBTLinkManager *)arg1 didPairedDeviceChange:(_Bool)arg2;
@end
