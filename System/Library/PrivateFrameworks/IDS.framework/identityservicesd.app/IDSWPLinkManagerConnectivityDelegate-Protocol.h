//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSWPLinkManager, NSError, NSString;

@protocol IDSWPLinkManagerConnectivityDelegate <NSObject>
- (void)manager:(IDSWPLinkManager *)arg1 cbuuidDidFailToConnect:(NSString *)arg2 withReason:(NSError *)arg3;
- (_Bool)manager:(IDSWPLinkManager *)arg1 cbuuidDidDiscover:(NSString *)arg2;
- (void)manager:(IDSWPLinkManager *)arg1 cbuuidDidDisconnect:(NSString *)arg2;
- (void)manager:(IDSWPLinkManager *)arg1 cbuuidDidConnect:(NSString *)arg2 isAlwaysConnected:(_Bool)arg3;
@end
