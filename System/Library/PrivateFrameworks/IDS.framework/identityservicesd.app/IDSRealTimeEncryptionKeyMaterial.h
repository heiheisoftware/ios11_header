//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate;

@interface IDSRealTimeEncryptionKeyMaterial : NSObject
{
    unsigned int _MKI;
    NSData *_MKS;
    NSData *_MKM;
    NSDate *_createdAt;
}

@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSData *MKM; // @synthesize MKM=_MKM;
@property(readonly, nonatomic) NSData *MKS; // @synthesize MKS=_MKS;
@property(readonly, nonatomic) unsigned int MKI; // @synthesize MKI=_MKI;
- (void).cxx_destruct;
- (id)initWithMKM:(id)arg1 MKS:(id)arg2 MKI:(unsigned int)arg3;
- (id)initWithIndex:(unsigned int)arg1;

@end

