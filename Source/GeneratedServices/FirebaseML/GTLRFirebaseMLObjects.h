// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase ML API (firebaseml/v1beta2)
// Description:
//   Access custom machine learning models hosted via Firebase ML.
// Documentation:
//   https://firebase.google.com

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseML_Model;
@class GTLRFirebaseML_ModelState;
@class GTLRFirebaseML_Operation;
@class GTLRFirebaseML_Operation_Metadata;
@class GTLRFirebaseML_Operation_Response;
@class GTLRFirebaseML_Status;
@class GTLRFirebaseML_Status_Details_Item;
@class GTLRFirebaseML_TfLiteModel;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirebaseML_ModelOperationMetadata.basicOperationStatus

/**
 *  The status is unspecified
 *
 *  Value: "BASIC_OPERATION_STATUS_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseML_ModelOperationMetadata_BasicOperationStatus_BasicOperationStatusUnspecified;
/**
 *  The model file is being uploaded
 *
 *  Value: "BASIC_OPERATION_STATUS_UPLOADING"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseML_ModelOperationMetadata_BasicOperationStatus_BasicOperationStatusUploading;
/**
 *  The model file is being verified
 *
 *  Value: "BASIC_OPERATION_STATUS_VERIFYING"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseML_ModelOperationMetadata_BasicOperationStatus_BasicOperationStatusVerifying;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRFirebaseML_Empty : GTLRObject
@end


/**
 *  The response for list models
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "models" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseML_ListModelsResponse : GTLRCollectionObject

/**
 *  The list of models
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseML_Model *> *models;

/**
 *  Token to retrieve the next page of results, or empty if there are no
 *  more results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  An ML model hosted in Firebase ML
 */
@interface GTLRFirebaseML_Model : GTLRObject

/**
 *  Output only. Lists operation ids associated with this model whose status is
 *  NOT done.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseML_Operation *> *activeOperations;

/** Output only. Timestamp when this model was created in Firebase ML. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Required. The name of the model to create. The name can be up to 32
 *  characters long
 *  and can consist only of ASCII Latin letters A-Z and a-z, underscores(_)
 *  and ASCII digits 0-9. It must start with a letter.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Output only. See RFC7232
 *  https://tools.ietf.org/html/rfc7232#section-2.3
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Output only. The model_hash will change if a new file is available for
 *  download.
 */
@property(nonatomic, copy, nullable) NSString *modelHash;

/**
 *  The resource name of the Model.
 *  Model names have the form `projects/{project_id}/models/{model_id}`
 *  The name is ignored when creating a model.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  State common to all model types.
 *  Includes publishing and validation information.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseML_ModelState *state;

/**
 *  User defined tags which can be used to group/filter models during listing
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *tags;

/** A TFLite Model */
@property(nonatomic, strong, nullable) GTLRFirebaseML_TfLiteModel *tfliteModel;

/** Output only. Timestamp when this model was updated in Firebase ML. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  This is returned in the longrunning operations
 *  for create/update.
 */
@interface GTLRFirebaseML_ModelOperationMetadata : GTLRObject

/**
 *  basicOperationStatus
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseML_ModelOperationMetadata_BasicOperationStatus_BasicOperationStatusUnspecified
 *        The status is unspecified (Value:
 *        "BASIC_OPERATION_STATUS_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseML_ModelOperationMetadata_BasicOperationStatus_BasicOperationStatusUploading
 *        The model file is being uploaded (Value:
 *        "BASIC_OPERATION_STATUS_UPLOADING")
 *    @arg @c kGTLRFirebaseML_ModelOperationMetadata_BasicOperationStatus_BasicOperationStatusVerifying
 *        The model file is being verified (Value:
 *        "BASIC_OPERATION_STATUS_VERIFYING")
 */
@property(nonatomic, copy, nullable) NSString *basicOperationStatus;

/**
 *  The name of the model we are creating/updating
 *  The name must have the form `projects/{project_id}/models/{model_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  State common to all model types.
 *  Includes publishing and validation information.
 */
@interface GTLRFirebaseML_ModelState : GTLRObject

/**
 *  Indicates if this model has been published.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *published;

/**
 *  Output only. Indicates the latest validation error on the model if any.
 *  A model may have validation errors if there were problems during
 *  the model creation/update.
 *  e.g. in the case of a TfLiteModel, if a tflite model file was
 *  missing or in the wrong format.
 *  This field will be empty for valid models.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseML_Status *validationError;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRFirebaseML_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRFirebaseML_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseML_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseML_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseML_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseML_Operation_Response : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRFirebaseML_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseML_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRFirebaseML_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseML_Status_Details_Item : GTLRObject
@end


/**
 *  Information that is specific to TfLite models.
 */
@interface GTLRFirebaseML_TfLiteModel : GTLRObject

/**
 *  The TfLite file containing the model. (Stored in Google Cloud).
 *  The gcs_tflite_uri should have form: gs://some-bucket/some-model.tflite
 *  Note: If you update the file in the original location, it is
 *  necessary to call UpdateModel for ML to pick up and validate the
 *  updated file.
 */
@property(nonatomic, copy, nullable) NSString *gcsTfliteUri;

/** Output only. The size of the TFLite model */
@property(nonatomic, copy, nullable) NSString *sizeBytes;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
