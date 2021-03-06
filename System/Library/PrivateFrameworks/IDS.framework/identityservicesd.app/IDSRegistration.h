//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface IDSRegistration : NSObject <NSCopying>
{
    _Bool _needsMigration;
    _Bool _needsProvisioning;
    _Bool _runningSimpleAuthentication;
    _Bool _isDisabled;
    _Bool _shouldRegisterUsingDSHandle;
    _Bool _shouldAutoRegisterAllHandles;
    int _retries;
    int _absintheRetries;
    NSArray *_vettedEmails;
    NSString *_dsHandle;
    NSString *_profileID;
    NSNumber *_IDSVersion;
    NSNumber *_applicationVersion;
    NSString *_environment;
    NSDate *_registrationDate;
    NSDate *_nextRegistrationDate;
    NSData *_pushToken;
    NSNumber *_isC2K;
    long long _registrationStatus;
    long long _registrationType;
    NSString *_mainID;
    NSArray *_dependentRegistrations;
    NSString *_regionID;
    NSString *_deviceName;
    NSString *_regionBasePhoneNumber;
    NSDictionary *_regionServerContext;
    NSData *_registrationCert;
    NSString *_serviceType;
    NSString *_guid;
    NSMutableArray *_candidateEmails;
    NSDictionary *_migrationContext;
    NSNumber *_identityVersion;
    NSString *_keyPairSignature;
    NSString *_idsUserID;
    NSString *_serviceIdentifier;
    NSArray *_uris;
    NSArray *_adHocServiceNames;
    NSDate *_dependentRegistrationsTTL;
    NSNumber *_dependentRegistrationResponseCode;
    NSNumber *_dependentRegistrationAuthRetries;
    id <FTPasswordManager> _passwordManager;
}

@property(retain, nonatomic) id <FTPasswordManager> passwordManager; // @synthesize passwordManager=_passwordManager;
@property(copy, nonatomic) NSNumber *dependentRegistrationAuthRetries; // @synthesize dependentRegistrationAuthRetries=_dependentRegistrationAuthRetries;
@property(copy, nonatomic) NSNumber *dependentRegistrationResponseCode; // @synthesize dependentRegistrationResponseCode=_dependentRegistrationResponseCode;
@property(copy, nonatomic) NSDate *dependentRegistrationsTTL; // @synthesize dependentRegistrationsTTL=_dependentRegistrationsTTL;
@property(retain, nonatomic) NSArray *adHocServiceNames; // @synthesize adHocServiceNames=_adHocServiceNames;
@property(nonatomic) _Bool shouldAutoRegisterAllHandles; // @synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles;
@property(nonatomic) _Bool shouldRegisterUsingDSHandle; // @synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle;
@property(copy, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *idsUserID; // @synthesize idsUserID=_idsUserID;
@property(copy, nonatomic) NSString *keyPairSignature; // @synthesize keyPairSignature=_keyPairSignature;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool runningSimpleAuthentication; // @synthesize runningSimpleAuthentication=_runningSimpleAuthentication;
@property(copy, nonatomic) NSNumber *identityVersion; // @synthesize identityVersion=_identityVersion;
@property(retain, nonatomic) NSDictionary *migrationContext; // @synthesize migrationContext=_migrationContext;
@property(retain, nonatomic) NSMutableArray *_candidateEmails; // @synthesize _candidateEmails;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSData *registrationCert; // @synthesize registrationCert=_registrationCert;
@property(copy, nonatomic) NSDictionary *regionServerContext; // @synthesize regionServerContext=_regionServerContext;
@property(copy, nonatomic) NSString *regionBasePhoneNumber; // @synthesize regionBasePhoneNumber=_regionBasePhoneNumber;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *regionID; // @synthesize regionID=_regionID;
@property(copy, nonatomic) NSArray *dependentRegistrations; // @synthesize dependentRegistrations=_dependentRegistrations;
@property(copy, nonatomic) NSString *mainID; // @synthesize mainID=_mainID;
@property(nonatomic) int absintheRetries; // @synthesize absintheRetries=_absintheRetries;
@property(nonatomic) int retries; // @synthesize retries=_retries;
@property(nonatomic) long long registrationType; // @synthesize registrationType=_registrationType;
@property(nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(nonatomic) _Bool needsProvisioning; // @synthesize needsProvisioning=_needsProvisioning;
@property(nonatomic) _Bool needsMigration; // @synthesize needsMigration=_needsMigration;
@property(copy, nonatomic) NSNumber *isCDMA; // @synthesize isCDMA=_isC2K;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSDate *nextRegistrationDate; // @synthesize nextRegistrationDate=_nextRegistrationDate;
@property(copy, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSNumber *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSNumber *IDSVersion; // @synthesize IDSVersion=_IDSVersion;
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(retain, nonatomic, setter=setDSHandle:) NSString *dsHandle; // @synthesize dsHandle=_dsHandle;
@property(retain, nonatomic) NSArray *vettedEmails; // @synthesize vettedEmails=_vettedEmails;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *authenticationCert;
@property(readonly, nonatomic) _Bool canSendRegistration;
@property(readonly, nonatomic) _Bool canRegister;
@property(readonly, nonatomic) _Bool hasSentinel;
@property(readonly, nonatomic) NSArray *emailsToRegister;
- (id)description;
- (void)voidPassword;
@property(copy, nonatomic) NSString *authenticationToken;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation; // @dynamic dictionaryRepresentation;
@property(readonly, nonatomic) NSString *signaturePrefix;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *userID;
- (_Bool)removeBinding:(id)arg1;
- (id)_userID;
@property(readonly, nonatomic) NSArray *confirmedEmails;
- (void)removeCandidateEmail:(id)arg1;
- (void)addCandidateEmail:(id)arg1;
@property(readonly, nonatomic) NSArray *candidateEmails;
- (_Bool)saveToKeychain;
- (_Bool)removeFromKeychain;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithPasswordManager:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_keychain_comparisonValue;
- (_Bool)_keychain_isEqual:(id)arg1;

@end

