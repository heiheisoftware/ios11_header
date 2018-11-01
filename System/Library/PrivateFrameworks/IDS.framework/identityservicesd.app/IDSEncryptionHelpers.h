//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSEncryptionHelpers : NSObject
{
}

+ (_Bool)areDataProtectionKeysAvailableForService:(id)arg1 withDataProtectionClass:(unsigned int)arg2 fromDevice:(id)arg3;
+ (id)decryptLocalDeliveryPayload:(id)arg1 forService:(id)arg2 withDataProtectionClass:(unsigned int)arg3 fromDevice:(id)arg4 encryptionType:(long long)arg5 priority:(long long)arg6 error:(long long *)arg7;
+ (id)encryptLocalDeliveryPayload:(id)arg1 toDevice:(id)arg2 forService:(id)arg3 withDataProtectionClass:(unsigned int)arg4 encryptionType:(long long)arg5 priority:(long long)arg6 error:(long long *)arg7;
+ (id)decryptDataWithAESKey:(id)arg1 data:(id)arg2;
+ (id)encryptDataWithAESKey:(id)arg1 data:(id)arg2;
+ (void)noteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 encrypt:(_Bool)arg7 remote:(_Bool)arg8 priority:(long long)arg9;
+ (id)decryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 fromToken:(id)arg5 otrToken:(id)arg6 deviceID:(id)arg7 encryptionType:(long long)arg8 priority:(long long)arg9 isRetry:(_Bool)arg10 error:(long long *)arg11;
+ (id)decryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 fromToken:(id)arg5 encryptionType:(long long)arg6 priority:(long long)arg7 isRetry:(_Bool)arg8 error:(long long *)arg9;
+ (id)encryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 forToken:(id)arg5 otrToken:(id)arg6 deviceID:(id)arg7 encryptionType:(long long *)arg8 priority:(long long)arg9 groupIdentifier:(id)arg10 error:(long long *)arg11;
+ (id)encryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 forToken:(id)arg5 encryptionType:(long long *)arg6 priority:(long long)arg7 groupIdentifier:(id)arg8 error:(long long *)arg9;

@end
