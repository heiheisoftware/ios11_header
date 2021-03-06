//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface IDSNanoRegistryPluginManager : NSObject
{
    _Bool _pluginImplementsWatchDidStartAdvertising;
    _Bool _pluginImplementsWatchDidStopAdvertising;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableArray *_peripheralManagers;
    id <IDSPluginNanoRegistryProtocol> _plugin;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <IDSPluginNanoRegistryProtocol> plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSMutableArray *peripheralManagers; // @synthesize peripheralManagers=_peripheralManagers;
@property(nonatomic) _Bool pluginImplementsWatchDidStopAdvertising; // @synthesize pluginImplementsWatchDidStopAdvertising=_pluginImplementsWatchDidStopAdvertising;
@property(nonatomic) _Bool pluginImplementsWatchDidStartAdvertising; // @synthesize pluginImplementsWatchDidStartAdvertising=_pluginImplementsWatchDidStartAdvertising;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)_initializePluginWithClass:(Class)arg1;
- (void)_initializePlugin;
- (void)executeSynchronouslyOnCallbackQueue:(CDUnknownBlockType)arg1;
- (void)initializePluginWithClass:(Class)arg1;
- (void)notifyWatchDidStopAdvertisingWithPeripheralManager:(id)arg1;
- (void)notifyWatchDidStartAdvertisingWithPeripheralManager:(id)arg1;
- (id)init;

@end

