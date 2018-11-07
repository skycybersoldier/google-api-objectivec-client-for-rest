// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Binary Authorization API (binaryauthorization/v1beta1)
// Description:
//   The management interface for Binary Authorization, a system providing
//   policy control for images deployed to Kubernetes Engine clusters.
// Documentation:
//   https://cloud.google.com/binary-authorization/

#import "GTLRBinaryAuthorizationObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRBinaryAuthorization_AdmissionRule.enforcementMode
NSString * const kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_EnforcedBlockAndAuditLog = @"ENFORCED_BLOCK_AND_AUDIT_LOG";
NSString * const kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_EnforcementModeUnspecified = @"ENFORCEMENT_MODE_UNSPECIFIED";

// GTLRBinaryAuthorization_AdmissionRule.evaluationMode
NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_AlwaysAllow = @"ALWAYS_ALLOW";
NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_AlwaysDeny = @"ALWAYS_DENY";
NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_EvaluationModeUnspecified = @"EVALUATION_MODE_UNSPECIFIED";
NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_RequireAttestation = @"REQUIRE_ATTESTATION";

// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_AdmissionRule
//

@implementation GTLRBinaryAuthorization_AdmissionRule
@dynamic enforcementMode, evaluationMode, requireAttestationsBy;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"requireAttestationsBy" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_AdmissionWhitelistPattern
//

@implementation GTLRBinaryAuthorization_AdmissionWhitelistPattern
@dynamic namePattern;
@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_Attestor
//

@implementation GTLRBinaryAuthorization_Attestor
@dynamic descriptionProperty, name, updateTime, userOwnedDrydockNote;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_AttestorPublicKey
//

@implementation GTLRBinaryAuthorization_AttestorPublicKey
@dynamic asciiArmoredPgpPublicKey, comment, identifier;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_Binding
//

@implementation GTLRBinaryAuthorization_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_Empty
//

@implementation GTLRBinaryAuthorization_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_Expr
//

@implementation GTLRBinaryAuthorization_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_IamPolicy
//

@implementation GTLRBinaryAuthorization_IamPolicy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRBinaryAuthorization_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_ListAttestorsResponse
//

@implementation GTLRBinaryAuthorization_ListAttestorsResponse
@dynamic attestors, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"attestors" : [GTLRBinaryAuthorization_Attestor class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"attestors";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_Policy
//

@implementation GTLRBinaryAuthorization_Policy
@dynamic admissionWhitelistPatterns, clusterAdmissionRules,
         defaultAdmissionRule, descriptionProperty, name, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"admissionWhitelistPatterns" : [GTLRBinaryAuthorization_AdmissionWhitelistPattern class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_Policy_ClusterAdmissionRules
//

@implementation GTLRBinaryAuthorization_Policy_ClusterAdmissionRules

+ (Class)classForAdditionalProperties {
  return [GTLRBinaryAuthorization_AdmissionRule class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_SetIamPolicyRequest
//

@implementation GTLRBinaryAuthorization_SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_TestIamPermissionsRequest
//

@implementation GTLRBinaryAuthorization_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_TestIamPermissionsResponse
//

@implementation GTLRBinaryAuthorization_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRBinaryAuthorization_UserOwnedDrydockNote
//

@implementation GTLRBinaryAuthorization_UserOwnedDrydockNote
@dynamic delegationServiceAccountEmail, noteReference, publicKeys;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"publicKeys" : [GTLRBinaryAuthorization_AttestorPublicKey class]
  };
  return map;
}

@end