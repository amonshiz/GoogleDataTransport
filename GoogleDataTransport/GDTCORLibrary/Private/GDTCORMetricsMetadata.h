// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

#import "GoogleDataTransport/GDTCORLibrary/Internal/GDTCOREventDropReason.h"

@class GDTCOREventMetricsCounter;

NS_ASSUME_NONNULL_BEGIN

/// An encodable model object that contains metadata that is persisted in storage until ready to be
/// used to create a ``GDTCORMetrics`` instance.
@interface GDTCORMetricsMetadata : NSObject <NSSecureCoding>

/// The start of the time window over which the metrics were collected.
@property(nonatomic, copy, readonly) NSDate *collectionStartDate;

/// The dropped event counter associated with the metrics.
@property(nonatomic, copy, readonly, nullable) GDTCOREventMetricsCounter *droppedEventCounter;

/// Creates a metrics metadata object with the provided information.
/// @param collectedSinceDate The start of the time window over which the metrics were collected.
/// @param eventMetricsCounter The dropped event counter associated with the metrics.
+ (instancetype)metadataWithCollectionStartDate:(NSDate *)collectedSinceDate
                            eventMetricsCounter:
                                (nullable GDTCOREventMetricsCounter *)eventMetricsCounter;

/// This API is unavailable.
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END