//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSDaemonCapabilities : NSObject
{
    int _iMessageAllowedToken;
}

+ (id)sharedInstance;
- (void)_watchCarrierChanges;
- (void)_setupTokens;
- (void)_updateCapabilities;
- (id)init;

@end

