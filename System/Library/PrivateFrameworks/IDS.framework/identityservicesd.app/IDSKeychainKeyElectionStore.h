//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSKeychainWrapper;

@interface IDSKeychainKeyElectionStore : NSObject
{
    IDSKeychainWrapper *_keychainWrapper;
}

+ (_Bool)isItemNotFoundError:(id)arg1;
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (void).cxx_destruct;
- (id)_fullClusterFromData:(id)arg1 error:(id *)arg2;
- (id)_keychainEntryForCluster:(id)arg1;
- (_Bool)removeFullClusterWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)_storeData:(id)arg1 forIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeFullCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchFullClusterWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithKeychainWrapper:(id)arg1;
- (id)identifierForFullCluster:(id)arg1;

@end

