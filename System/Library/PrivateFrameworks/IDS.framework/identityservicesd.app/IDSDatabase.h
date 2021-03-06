//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDSDatabase : NSObject
{
    unsigned int _dataProtectionClass;
    NSString *_filename;
}

@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (void).cxx_destruct;
- (void)ensureDatabaseIsInitialized;
- (id)initWithDataProtectionClass:(unsigned int)arg1 filename:(id)arg2;
- (id)initWithDataProtectionClass:(unsigned int)arg1;
- (id)init;

@end

