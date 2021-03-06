///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGShowcaseCreatedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShowcaseCreatedDetails` struct.
///
/// Created showcase.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGShowcaseCreatedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ShowcaseCreatedDetails` struct.
///
@interface DBTEAMLOGShowcaseCreatedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGShowcaseCreatedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGShowcaseCreatedDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGShowcaseCreatedDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGShowcaseCreatedDetails *)instance;

///
/// Deserializes `DBTEAMLOGShowcaseCreatedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGShowcaseCreatedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGShowcaseCreatedDetails` object.
///
+ (DBTEAMLOGShowcaseCreatedDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
