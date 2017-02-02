// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud SQL Administration API (sqladmin/v1beta4)
// Description:
//   Creates and configures Cloud SQL instances, which provide fully-managed
//   MySQL databases.
// Documentation:
//   https://cloud.google.com/sql/docs/reference/latest

#import "GTLRSQLAdminObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_AclEntry
//

@implementation GTLRSQLAdmin_AclEntry
@dynamic expirationTime, kind, name, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_BackupConfiguration
//

@implementation GTLRSQLAdmin_BackupConfiguration
@dynamic binaryLogEnabled, enabled, kind, startTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_BackupRun
//

@implementation GTLRSQLAdmin_BackupRun
@dynamic descriptionProperty, endTime, enqueuedTime, error, identifier,
         instance, kind, selfLink, startTime, status, type, windowStartTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_BackupRunsListResponse
//

@implementation GTLRSQLAdmin_BackupRunsListResponse
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_BackupRun class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_BinLogCoordinates
//

@implementation GTLRSQLAdmin_BinLogCoordinates
@dynamic binLogFileName, binLogPosition, kind;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_CloneContext
//

@implementation GTLRSQLAdmin_CloneContext
@dynamic binLogCoordinates, destinationInstanceName, kind;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_Database
//

@implementation GTLRSQLAdmin_Database
@dynamic charset, collation, ETag, instance, kind, name, project, selfLink;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_DatabaseFlags
//

@implementation GTLRSQLAdmin_DatabaseFlags
@dynamic name, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_DatabaseInstance
//

@implementation GTLRSQLAdmin_DatabaseInstance
@dynamic backendType, connectionName, currentDiskSize, databaseVersion, ETag,
         failoverReplica, instanceType, ipAddresses, ipv6Address, kind,
         masterInstanceName, maxDiskSize, name, onPremisesConfiguration,
         project, region, replicaConfiguration, replicaNames, selfLink,
         serverCaCert, serviceAccountEmailAddress, settings, state,
         suspensionReason;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ipAddresses" : [GTLRSQLAdmin_IpMapping class],
    @"replicaNames" : [NSString class],
    @"suspensionReason" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_DatabaseInstance_FailoverReplica
//

@implementation GTLRSQLAdmin_DatabaseInstance_FailoverReplica
@dynamic available, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_DatabasesListResponse
//

@implementation GTLRSQLAdmin_DatabasesListResponse
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_Database class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_ExportContext
//

@implementation GTLRSQLAdmin_ExportContext
@dynamic csvExportOptions, databases, fileType, kind, sqlExportOptions, uri;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"databases" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_ExportContext_CsvExportOptions
//

@implementation GTLRSQLAdmin_ExportContext_CsvExportOptions
@dynamic selectQuery;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_ExportContext_SqlExportOptions
//

@implementation GTLRSQLAdmin_ExportContext_SqlExportOptions
@dynamic schemaOnly, tables;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tables" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_FailoverContext
//

@implementation GTLRSQLAdmin_FailoverContext
@dynamic kind, settingsVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_Flag
//

@implementation GTLRSQLAdmin_Flag
@dynamic allowedStringValues, appliesTo, kind, maxValue, minValue, name,
         requiresRestart, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedStringValues" : [NSString class],
    @"appliesTo" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_FlagsListResponse
//

@implementation GTLRSQLAdmin_FlagsListResponse
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_Flag class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_ImportContext
//

@implementation GTLRSQLAdmin_ImportContext
@dynamic csvImportOptions, database, fileType, kind, uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_ImportContext_CsvImportOptions
//

@implementation GTLRSQLAdmin_ImportContext_CsvImportOptions
@dynamic columns, table;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"columns" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesCloneRequest
//

@implementation GTLRSQLAdmin_InstancesCloneRequest
@dynamic cloneContext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesExportRequest
//

@implementation GTLRSQLAdmin_InstancesExportRequest
@dynamic exportContext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesFailoverRequest
//

@implementation GTLRSQLAdmin_InstancesFailoverRequest
@dynamic failoverContext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesImportRequest
//

@implementation GTLRSQLAdmin_InstancesImportRequest
@dynamic importContext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesListResponse
//

@implementation GTLRSQLAdmin_InstancesListResponse
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_DatabaseInstance class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesRestoreBackupRequest
//

@implementation GTLRSQLAdmin_InstancesRestoreBackupRequest
@dynamic restoreBackupContext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_InstancesTruncateLogRequest
//

@implementation GTLRSQLAdmin_InstancesTruncateLogRequest
@dynamic truncateLogContext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_IpConfiguration
//

@implementation GTLRSQLAdmin_IpConfiguration
@dynamic authorizedNetworks, ipv4Enabled, requireSsl;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"authorizedNetworks" : [GTLRSQLAdmin_AclEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_IpMapping
//

@implementation GTLRSQLAdmin_IpMapping
@dynamic ipAddress, timeToRetire, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_LocationPreference
//

@implementation GTLRSQLAdmin_LocationPreference
@dynamic followGaeApplication, kind, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"zoneProperty" : @"zone" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_MaintenanceWindow
//

@implementation GTLRSQLAdmin_MaintenanceWindow
@dynamic day, hour, kind, updateTrack;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_MySqlReplicaConfiguration
//

@implementation GTLRSQLAdmin_MySqlReplicaConfiguration
@dynamic caCertificate, clientCertificate, clientKey, connectRetryInterval,
         dumpFilePath, kind, masterHeartbeatPeriod, password, sslCipher,
         username, verifyServerCertificate;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_OnPremisesConfiguration
//

@implementation GTLRSQLAdmin_OnPremisesConfiguration
@dynamic hostPort, kind;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_Operation
//

@implementation GTLRSQLAdmin_Operation
@dynamic endTime, error, exportContext, importContext, insertTime, kind, name,
         operationType, selfLink, startTime, status, targetId, targetLink,
         targetProject, user;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_OperationError
//

@implementation GTLRSQLAdmin_OperationError
@dynamic code, kind, message;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_OperationErrors
//

@implementation GTLRSQLAdmin_OperationErrors
@dynamic errors, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"errors" : [GTLRSQLAdmin_OperationError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_OperationsListResponse
//

@implementation GTLRSQLAdmin_OperationsListResponse
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_Operation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_ReplicaConfiguration
//

@implementation GTLRSQLAdmin_ReplicaConfiguration
@dynamic failoverTarget, kind, mysqlReplicaConfiguration;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_RestoreBackupContext
//

@implementation GTLRSQLAdmin_RestoreBackupContext
@dynamic backupRunId, instanceId, kind;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_Settings
//

@implementation GTLRSQLAdmin_Settings
@dynamic activationPolicy, authorizedGaeApplications, availabilityType,
         backupConfiguration, crashSafeReplicationEnabled, databaseFlags,
         databaseReplicationEnabled, dataDiskSizeGb, dataDiskType,
         ipConfiguration, kind, locationPreference, maintenanceWindow,
         pricingPlan, replicationType, settingsVersion, storageAutoResize,
         storageAutoResizeLimit, tier;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"authorizedGaeApplications" : [NSString class],
    @"databaseFlags" : [GTLRSQLAdmin_DatabaseFlags class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_SslCert
//

@implementation GTLRSQLAdmin_SslCert
@dynamic cert, certSerialNumber, commonName, createTime, expirationTime,
         instance, kind, selfLink, sha1Fingerprint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_SslCertDetail
//

@implementation GTLRSQLAdmin_SslCertDetail
@dynamic certInfo, certPrivateKey;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_SslCertsCreateEphemeralRequest
//

@implementation GTLRSQLAdmin_SslCertsCreateEphemeralRequest
@dynamic publicKey;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"publicKey" : @"public_key" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_SslCertsInsertRequest
//

@implementation GTLRSQLAdmin_SslCertsInsertRequest
@dynamic commonName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_SslCertsInsertResponse
//

@implementation GTLRSQLAdmin_SslCertsInsertResponse
@dynamic clientCert, kind, operation, serverCaCert;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_SslCertsListResponse
//

@implementation GTLRSQLAdmin_SslCertsListResponse
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_SslCert class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_Tier
//

@implementation GTLRSQLAdmin_Tier
@dynamic DiskQuota, kind, RAM, region, tier;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"region" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_TiersListResponse
//

@implementation GTLRSQLAdmin_TiersListResponse
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_Tier class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_TruncateLogContext
//

@implementation GTLRSQLAdmin_TruncateLogContext
@dynamic kind, logType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_User
//

@implementation GTLRSQLAdmin_User
@dynamic ETag, host, instance, kind, name, password, project;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSQLAdmin_UsersListResponse
//

@implementation GTLRSQLAdmin_UsersListResponse
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRSQLAdmin_User class]
  };
  return map;
}

@end
