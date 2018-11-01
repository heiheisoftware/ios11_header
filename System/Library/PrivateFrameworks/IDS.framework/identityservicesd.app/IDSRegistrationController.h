//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSAppleIDRegistrationCenterListener.h"
#import "IDSRegistrationCenterListener.h"
#import "IDSSMSRegistrationCenterListener.h"

@class IDSKeychainWrapper, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDSRegistrationController : NSObject <IDSSMSRegistrationCenterListener, IDSAppleIDRegistrationCenterListener, IDSRegistrationCenterListener>
{
    NSString *_deviceName;
    NSMutableArray *_handlers;
    NSMutableArray *_activeRegistrations;
    NSMutableArray *_trackedRegistrations;
    NSMutableArray *_authenticatedRegistrations;
    NSMutableSet *_deferredRegisters;
    int _screenSharingToken;
    int _iMessageToken;
    int _faceTimeToken;
    int _callingToken;
    IDSKeychainWrapper *_keychainWrapper;
}

+ (_Bool)systemSupportsRegistrationInfo:(id)arg1;
+ (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(long long)arg2;
+ (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2;
+ (_Bool)validSIMStateForRegistration;
+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *authenticatedRegistrations; // @synthesize authenticatedRegistrations=_authenticatedRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void).cxx_destruct;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)_systemConfigurationPrefsChanged;
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsOfType:(long long)arg1;
- (id)activeRegistrationsMatchingUserID:(id)arg1;
- (void)stopTrackingActiveRegistration:(id)arg1;
- (void)startTrackingActiveRegistration:(id)arg1;
- (void)removeAuthenticatedRegistration:(id)arg1;
- (void)addAuthenticatedRegistration:(id)arg1;
- (void)stopTrackingRegistration:(id)arg1;
- (void)startTrackingRegistration:(id)arg1;
- (void)_updateNotifyState;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_SIMRemoved:(id)arg1;
- (void)_SIMInserted:(id)arg1;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_technologyChanged:(id)arg1;
- (void)_checkTechChange;
- (void)center:(id)arg1 noteRegistrationRequired:(id)arg2;
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
- (_Bool)_sendIDSAuthenticationForRegistration:(id)arg1;
- (void)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;
- (_Bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1;
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;
- (void)centerNeedsNewIdentification:(id)arg1;
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;
- (void)center:(id)arg1 allSucceededRegistrations:(id)arg2;
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededRegistration:(id)arg2;
- (_Bool)_shouldSubmitRegistrationCompletedMetricForRegistration:(id)arg1;
- (void)_submitRegistrationCompletedMetricWithRegistration:(id)arg1 success:(_Bool)arg2;
- (void)_notifyDeregistrationStarting:(id)arg1;
- (void)_notifyAllRegistrationSuccess:(id)arg1;
- (void)_notifyRegistrationSuccess:(id)arg1;
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;
- (void)_notifyRegistrationStarting:(id)arg1;
- (void)_notifyRegistrationUpdated:(id)arg1;
- (void)_notifyNeedsNewRegistration;
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4 registration:(id)arg5;
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 registration:(id)arg3;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (_Bool)unregisterInfo:(id)arg1;
- (_Bool)registerInfo:(id)arg1;
- (_Bool)systemSupportsRegistrationInfo:(id)arg1;
- (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(long long)arg2;
- (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2;
- (_Bool)validSIMStateForRegistration;
- (_Bool)registrationSupportedForRegistration:(id)arg1;
- (_Bool)validRegistrationStateToMakeCallsForRegistration:(id)arg1;
- (_Bool)validRegistrationStateToAcceptCallsForRegistration:(id)arg1;
- (void)dealloc;
- (id)init;

@end
