// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRStorage_Bucket;
@class GTLRStorage_Bucket_Cors_Item;
@class GTLRStorage_Bucket_Lifecycle;
@class GTLRStorage_Bucket_Lifecycle_Rule_Item;
@class GTLRStorage_Bucket_Lifecycle_Rule_Item_Action;
@class GTLRStorage_Bucket_Lifecycle_Rule_Item_Condition;
@class GTLRStorage_Bucket_Logging;
@class GTLRStorage_Bucket_Owner;
@class GTLRStorage_Bucket_Versioning;
@class GTLRStorage_Bucket_Website;
@class GTLRStorage_BucketAccessControl;
@class GTLRStorage_BucketAccessControl_ProjectTeam;
@class GTLRStorage_Channel_Params;
@class GTLRStorage_ComposeRequest_SourceObjects_Item;
@class GTLRStorage_ComposeRequest_SourceObjects_Item_ObjectPreconditions;
@class GTLRStorage_Object;
@class GTLRStorage_Object_CustomerEncryption;
@class GTLRStorage_Object_Metadata;
@class GTLRStorage_Object_Owner;
@class GTLRStorage_ObjectAccessControl;
@class GTLRStorage_ObjectAccessControl_ProjectTeam;

NS_ASSUME_NONNULL_BEGIN

/**
 *  A bucket.
 */
@interface GTLRStorage_Bucket : GTLRObject

/** Access controls on the bucket. */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_BucketAccessControl *> *acl;

/** The bucket's Cross-Origin Resource Sharing (CORS) configuration. */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_Bucket_Cors_Item *> *cors;

/**
 *  Default access controls to apply to new objects when no ACL is provided.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_ObjectAccessControl *> *defaultObjectAcl;

/** HTTP 1.1 Entity tag for the bucket. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The ID of the bucket. For buckets, the id and name properities are the same.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The kind of item this is. For buckets, this is always storage#bucket. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The bucket's lifecycle configuration. See lifecycle management for more
 *  information.
 */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Lifecycle *lifecycle;

/**
 *  The location of the bucket. Object data for objects in the bucket resides in
 *  physical storage within this region. Defaults to US. See the developer's
 *  guide for the authoritative list.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  The bucket's logging configuration, which defines the destination bucket and
 *  optional name prefix for the current bucket's logs.
 */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Logging *logging;

/**
 *  The metadata generation of this bucket.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *metageneration;

/** The name of the bucket. */
@property(nonatomic, copy, nullable) NSString *name;

/** The owner of the bucket. This is always the project team's owner group. */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Owner *owner;

/**
 *  The project number of the project the bucket belongs to.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *projectNumber;

/** The URI of this bucket. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The bucket's default storage class, used whenever no storageClass is
 *  specified for a newly-created object. This defines how objects in the bucket
 *  are stored and determines the SLA and the cost of storage. Values include
 *  MULTI_REGIONAL, REGIONAL, STANDARD, NEARLINE, COLDLINE, and
 *  DURABLE_REDUCED_AVAILABILITY. If this value is not specified when the bucket
 *  is created, it will default to STANDARD. For more information, see storage
 *  classes.
 */
@property(nonatomic, copy, nullable) NSString *storageClass;

/** The creation time of the bucket in RFC 3339 format. */
@property(nonatomic, strong, nullable) GTLRDateTime *timeCreated;

/** The modification time of the bucket in RFC 3339 format. */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

/** The bucket's versioning configuration. */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Versioning *versioning;

/**
 *  The bucket's website configuration, controlling how the service behaves when
 *  accessing bucket contents as a web site. See the Static Website Examples for
 *  more information.
 */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Website *website;

@end


/**
 *  GTLRStorage_Bucket_Cors_Item
 */
@interface GTLRStorage_Bucket_Cors_Item : GTLRObject

/**
 *  The value, in seconds, to return in the Access-Control-Max-Age header used
 *  in preflight responses.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxAgeSeconds;

/**
 *  The list of HTTP methods on which to include CORS response headers, (GET,
 *  OPTIONS, POST, etc) Note: "*" is permitted in the list of methods, and means
 *  "any method".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *method;

/**
 *  The list of Origins eligible to receive CORS response headers. Note: "*" is
 *  permitted in the list of origins, and means "any Origin".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *origin;

/**
 *  The list of HTTP headers other than the simple response headers to give
 *  permission for the user-agent to share across domains.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *responseHeader;

@end


/**
 *  The bucket's lifecycle configuration. See lifecycle management for more
 *  information.
 */
@interface GTLRStorage_Bucket_Lifecycle : GTLRObject

/**
 *  A lifecycle management rule, which is made of an action to take and the
 *  condition(s) under which the action will be taken.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_Bucket_Lifecycle_Rule_Item *> *rule;

@end


/**
 *  The bucket's logging configuration, which defines the destination bucket and
 *  optional name prefix for the current bucket's logs.
 */
@interface GTLRStorage_Bucket_Logging : GTLRObject

/**
 *  The destination bucket where the current bucket's logs should be placed.
 */
@property(nonatomic, copy, nullable) NSString *logBucket;

/** A prefix for log object names. */
@property(nonatomic, copy, nullable) NSString *logObjectPrefix;

@end


/**
 *  The owner of the bucket. This is always the project team's owner group.
 */
@interface GTLRStorage_Bucket_Owner : GTLRObject

/** The entity, in the form project-owner-projectId. */
@property(nonatomic, copy, nullable) NSString *entity;

/** The ID for the entity. */
@property(nonatomic, copy, nullable) NSString *entityId;

@end


/**
 *  The bucket's versioning configuration.
 */
@interface GTLRStorage_Bucket_Versioning : GTLRObject

/**
 *  While set to true, versioning is fully enabled for this bucket.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enabled;

@end


/**
 *  The bucket's website configuration, controlling how the service behaves when
 *  accessing bucket contents as a web site. See the Static Website Examples for
 *  more information.
 */
@interface GTLRStorage_Bucket_Website : GTLRObject

/**
 *  If the requested object path is missing, the service will ensure the path
 *  has a trailing '/', append this suffix, and attempt to retrieve the
 *  resulting object. This allows the creation of index.html objects to
 *  represent directory pages.
 */
@property(nonatomic, copy, nullable) NSString *mainPageSuffix;

/**
 *  If the requested object path is missing, and any mainPageSuffix object is
 *  missing, if applicable, the service will return the named object from this
 *  bucket as the content for a 404 Not Found result.
 */
@property(nonatomic, copy, nullable) NSString *notFoundPage;

@end


/**
 *  GTLRStorage_Bucket_Lifecycle_Rule_Item
 */
@interface GTLRStorage_Bucket_Lifecycle_Rule_Item : GTLRObject

/** The action to take. */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Lifecycle_Rule_Item_Action *action;

/** The condition(s) under which the action will be taken. */
@property(nonatomic, strong, nullable) GTLRStorage_Bucket_Lifecycle_Rule_Item_Condition *condition;

@end


/**
 *  The action to take.
 */
@interface GTLRStorage_Bucket_Lifecycle_Rule_Item_Action : GTLRObject

/**
 *  Target storage class. Required iff the type of the action is
 *  SetStorageClass.
 */
@property(nonatomic, copy, nullable) NSString *storageClass;

/**
 *  Type of the action. Currently, only Delete and SetStorageClass are
 *  supported.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  The condition(s) under which the action will be taken.
 */
@interface GTLRStorage_Bucket_Lifecycle_Rule_Item_Condition : GTLRObject

/**
 *  Age of an object (in days). This condition is satisfied when an object
 *  reaches the specified age.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *age;

/**
 *  A date in RFC 3339 format with only the date part (for instance,
 *  "2013-01-15"). This condition is satisfied when an object is created before
 *  midnight of the specified date in UTC.
 *
 *  Date only (yyyy-mm-dd).
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createdBefore;

/**
 *  Relevant only for versioned objects. If the value is true, this condition
 *  matches live objects; if the value is false, it matches archived objects.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isLive;

/**
 *  Objects having any of the storage classes specified by this condition will
 *  be matched. Values include MULTI_REGIONAL, REGIONAL, NEARLINE, COLDLINE,
 *  STANDARD, and DURABLE_REDUCED_AVAILABILITY.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *matchesStorageClass;

/**
 *  Relevant only for versioned objects. If the value is N, this condition is
 *  satisfied when there are at least N versions (including the live version)
 *  newer than this version of the object.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numNewerVersions;

@end


/**
 *  An access-control entry.
 */
@interface GTLRStorage_BucketAccessControl : GTLRObject

/** The name of the bucket. */
@property(nonatomic, copy, nullable) NSString *bucket;

/** The domain associated with the entity, if any. */
@property(nonatomic, copy, nullable) NSString *domain;

/** The email address associated with the entity, if any. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  The entity holding the permission, in one of the following forms:
 *  - user-userId
 *  - user-email
 *  - group-groupId
 *  - group-email
 *  - domain-domain
 *  - project-team-projectId
 *  - allUsers
 *  - allAuthenticatedUsers Examples:
 *  - The user liz\@example.com would be user-liz\@example.com.
 *  - The group example\@googlegroups.com would be
 *  group-example\@googlegroups.com.
 *  - To refer to all members of the Google Apps for Business domain
 *  example.com, the entity would be domain-example.com.
 */
@property(nonatomic, copy, nullable) NSString *entity;

/** The ID for the entity, if any. */
@property(nonatomic, copy, nullable) NSString *entityId;

/** HTTP 1.1 Entity tag for the access-control entry. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The ID of the access-control entry.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The kind of item this is. For bucket access control entries, this is always
 *  storage#bucketAccessControl.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The project team associated with the entity, if any. */
@property(nonatomic, strong, nullable) GTLRStorage_BucketAccessControl_ProjectTeam *projectTeam;

/** The access permission for the entity. */
@property(nonatomic, copy, nullable) NSString *role;

/** The link to this access-control entry. */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  The project team associated with the entity, if any.
 */
@interface GTLRStorage_BucketAccessControl_ProjectTeam : GTLRObject

/** The project number. */
@property(nonatomic, copy, nullable) NSString *projectNumber;

/** The team. */
@property(nonatomic, copy, nullable) NSString *team;

@end


/**
 *  An access-control list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRStorage_BucketAccessControls : GTLRCollectionObject

/**
 *  The list of items.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_BucketAccessControl *> *items;

/**
 *  The kind of item this is. For lists of bucket access control entries, this
 *  is always storage#bucketAccessControls.
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  A list of buckets.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRStorage_Buckets : GTLRCollectionObject

/**
 *  The list of items.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_Bucket *> *items;

/**
 *  The kind of item this is. For lists of buckets, this is always
 *  storage#buckets.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The continuation token, used to page through large result sets. Provide this
 *  value in a subsequent request to return the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  An notification channel used to watch for resource changes.
 */
@interface GTLRStorage_Channel : GTLRObject

/** The address where notifications are delivered for this channel. */
@property(nonatomic, copy, nullable) NSString *address;

/**
 *  Date and time of notification channel expiration, expressed as a Unix
 *  timestamp, in milliseconds. Optional.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiration;

/**
 *  A UUID or similar unique string that identifies this channel.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a notification channel used to watch for changes to a
 *  resource. Value: the fixed string "api#channel".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** Additional parameters controlling delivery channel behavior. Optional. */
@property(nonatomic, strong, nullable) GTLRStorage_Channel_Params *params;

/**
 *  A Boolean value to indicate whether payload is wanted. Optional.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *payload;

/**
 *  An opaque ID that identifies the resource being watched on this channel.
 *  Stable across different API versions.
 */
@property(nonatomic, copy, nullable) NSString *resourceId;

/** A version-specific identifier for the watched resource. */
@property(nonatomic, copy, nullable) NSString *resourceUri;

/**
 *  An arbitrary string delivered to the target address with each notification
 *  delivered over this channel. Optional.
 */
@property(nonatomic, copy, nullable) NSString *token;

/** The type of delivery mechanism used for this channel. */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Additional parameters controlling delivery channel behavior. Optional.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRStorage_Channel_Params : GTLRObject
@end


/**
 *  A Compose request.
 */
@interface GTLRStorage_ComposeRequest : GTLRObject

/** Properties of the resulting object. */
@property(nonatomic, strong, nullable) GTLRStorage_Object *destination;

/** The kind of item this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The list of source objects that will be concatenated into a single object.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_ComposeRequest_SourceObjects_Item *> *sourceObjects;

@end


/**
 *  GTLRStorage_ComposeRequest_SourceObjects_Item
 */
@interface GTLRStorage_ComposeRequest_SourceObjects_Item : GTLRObject

/**
 *  The generation of this object to use as the source.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *generation;

/**
 *  The source object's name. The source object's bucket is implicitly the
 *  destination bucket.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Conditions that must be met for this operation to execute. */
@property(nonatomic, strong, nullable) GTLRStorage_ComposeRequest_SourceObjects_Item_ObjectPreconditions *objectPreconditions;

@end


/**
 *  Conditions that must be met for this operation to execute.
 */
@interface GTLRStorage_ComposeRequest_SourceObjects_Item_ObjectPreconditions : GTLRObject

/**
 *  Only perform the composition if the generation of the source object that
 *  would be used matches this value. If this value and a generation are both
 *  specified, they must be the same value or the call will fail.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ifGenerationMatch;

@end


/**
 *  An object.
 */
@interface GTLRStorage_Object : GTLRObject

/** Access controls on the object. */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_ObjectAccessControl *> *acl;

/** The name of the bucket containing this object. */
@property(nonatomic, copy, nullable) NSString *bucket;

/**
 *  Cache-Control directive for the object data. If omitted, and the object is
 *  accessible to all anonymous users, the default will be public, max-age=3600.
 */
@property(nonatomic, copy, nullable) NSString *cacheControl;

/**
 *  Number of underlying components that make up this object. Components are
 *  accumulated by compose operations.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *componentCount;

/** Content-Disposition of the object data. */
@property(nonatomic, copy, nullable) NSString *contentDisposition;

/** Content-Encoding of the object data. */
@property(nonatomic, copy, nullable) NSString *contentEncoding;

/** Content-Language of the object data. */
@property(nonatomic, copy, nullable) NSString *contentLanguage;

/**
 *  Content-Type of the object data. If contentType is not specified, object
 *  downloads will be served as application/octet-stream.
 */
@property(nonatomic, copy, nullable) NSString *contentType;

/**
 *  CRC32c checksum, as described in RFC 4960, Appendix B; encoded using base64
 *  in big-endian byte order. For more information about using the CRC32c
 *  checksum, see Hashes and ETags: Best Practices.
 */
@property(nonatomic, copy, nullable) NSString *crc32c;

/**
 *  Metadata of customer-supplied encryption key, if the object is encrypted by
 *  such a key.
 */
@property(nonatomic, strong, nullable) GTLRStorage_Object_CustomerEncryption *customerEncryption;

/** HTTP 1.1 Entity tag for the object. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The content generation of this object. Used for object versioning.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *generation;

/**
 *  The ID of the object, including the bucket name, object name, and generation
 *  number.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The kind of item this is. For objects, this is always storage#object. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  MD5 hash of the data; encoded using base64. For more information about using
 *  the MD5 hash, see Hashes and ETags: Best Practices.
 */
@property(nonatomic, copy, nullable) NSString *md5Hash;

/** Media download link. */
@property(nonatomic, copy, nullable) NSString *mediaLink;

/** User-provided metadata, in key/value pairs. */
@property(nonatomic, strong, nullable) GTLRStorage_Object_Metadata *metadata;

/**
 *  The version of the metadata for this object at this generation. Used for
 *  preconditions and for detecting changes in metadata. A metageneration number
 *  is only meaningful in the context of a particular generation of a particular
 *  object.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *metageneration;

/** The name of the object. Required if not specified by URL parameter. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The owner of the object. This will always be the uploader of the object.
 */
@property(nonatomic, strong, nullable) GTLRStorage_Object_Owner *owner;

/** The link to this object. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  Content-Length of the data in bytes.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *size;

/** Storage class of the object. */
@property(nonatomic, copy, nullable) NSString *storageClass;

/** The creation time of the object in RFC 3339 format. */
@property(nonatomic, strong, nullable) GTLRDateTime *timeCreated;

/**
 *  The deletion time of the object in RFC 3339 format. Will be returned if and
 *  only if this version of the object has been deleted.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *timeDeleted;

/**
 *  The time at which the object's storage class was last changed. When the
 *  object is initially created, it will be set to timeCreated.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *timeStorageClassUpdated;

/** The modification time of the object metadata in RFC 3339 format. */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

@end


/**
 *  Metadata of customer-supplied encryption key, if the object is encrypted by
 *  such a key.
 */
@interface GTLRStorage_Object_CustomerEncryption : GTLRObject

/** The encryption algorithm. */
@property(nonatomic, copy, nullable) NSString *encryptionAlgorithm;

/** SHA256 hash value of the encryption key. */
@property(nonatomic, copy, nullable) NSString *keySha256;

@end


/**
 *  User-provided metadata, in key/value pairs.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRStorage_Object_Metadata : GTLRObject
@end


/**
 *  The owner of the object. This will always be the uploader of the object.
 */
@interface GTLRStorage_Object_Owner : GTLRObject

/** The entity, in the form user-userId. */
@property(nonatomic, copy, nullable) NSString *entity;

/** The ID for the entity. */
@property(nonatomic, copy, nullable) NSString *entityId;

@end


/**
 *  An access-control entry.
 */
@interface GTLRStorage_ObjectAccessControl : GTLRObject

/** The name of the bucket. */
@property(nonatomic, copy, nullable) NSString *bucket;

/** The domain associated with the entity, if any. */
@property(nonatomic, copy, nullable) NSString *domain;

/** The email address associated with the entity, if any. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  The entity holding the permission, in one of the following forms:
 *  - user-userId
 *  - user-email
 *  - group-groupId
 *  - group-email
 *  - domain-domain
 *  - project-team-projectId
 *  - allUsers
 *  - allAuthenticatedUsers Examples:
 *  - The user liz\@example.com would be user-liz\@example.com.
 *  - The group example\@googlegroups.com would be
 *  group-example\@googlegroups.com.
 *  - To refer to all members of the Google Apps for Business domain
 *  example.com, the entity would be domain-example.com.
 */
@property(nonatomic, copy, nullable) NSString *entity;

/** The ID for the entity, if any. */
@property(nonatomic, copy, nullable) NSString *entityId;

/** HTTP 1.1 Entity tag for the access-control entry. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The content generation of the object, if applied to an object.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *generation;

/**
 *  The ID of the access-control entry.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The kind of item this is. For object access control entries, this is always
 *  storage#objectAccessControl.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The name of the object, if applied to an object. */
@property(nonatomic, copy, nullable) NSString *object;

/** The project team associated with the entity, if any. */
@property(nonatomic, strong, nullable) GTLRStorage_ObjectAccessControl_ProjectTeam *projectTeam;

/** The access permission for the entity. */
@property(nonatomic, copy, nullable) NSString *role;

/** The link to this access-control entry. */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  The project team associated with the entity, if any.
 */
@interface GTLRStorage_ObjectAccessControl_ProjectTeam : GTLRObject

/** The project number. */
@property(nonatomic, copy, nullable) NSString *projectNumber;

/** The team. */
@property(nonatomic, copy, nullable) NSString *team;

@end


/**
 *  An access-control list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRStorage_ObjectAccessControls : GTLRCollectionObject

/**
 *  The list of items.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_ObjectAccessControl *> *items;

/**
 *  The kind of item this is. For lists of object access control entries, this
 *  is always storage#objectAccessControls.
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  A list of objects.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRStorage_Objects : GTLRCollectionObject

/**
 *  The list of items.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStorage_Object *> *items;

/**
 *  The kind of item this is. For lists of objects, this is always
 *  storage#objects.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The continuation token, used to page through large result sets. Provide this
 *  value in a subsequent request to return the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of prefixes of objects matching-but-not-listed up to and including
 *  the requested delimiter.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *prefixes;

@end


/**
 *  A rewrite response.
 */
@interface GTLRStorage_RewriteResponse : GTLRObject

/**
 *  true if the copy is finished; otherwise, false if the copy is in progress.
 *  This property is always present in the response.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The kind of item this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The total size of the object being copied in bytes. This property is always
 *  present in the response.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *objectSize;

/**
 *  A resource containing the metadata for the copied-to object. This property
 *  is present in the response only when copying completes.
 */
@property(nonatomic, strong, nullable) GTLRStorage_Object *resource;

/**
 *  A token to use in subsequent requests to continue copying data. This token
 *  is present in the response only when there is more data to copy.
 */
@property(nonatomic, copy, nullable) NSString *rewriteToken;

/**
 *  The total bytes written so far, which can be used to provide a waiting user
 *  with a progress indicator. This property is always present in the response.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalBytesRewritten;

@end

NS_ASSUME_NONNULL_END
