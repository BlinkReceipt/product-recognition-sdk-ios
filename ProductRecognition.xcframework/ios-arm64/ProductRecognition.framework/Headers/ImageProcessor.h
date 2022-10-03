// Copyright (c) 2022 Microblink Ltd. All rights reserved.
//
// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS,
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED!
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#pragma once

#import <CoreVideo/CoreVideo.h>
#import <UIKit/UIKit.h>
#import "DetectionResultObjC.h"
#import "ProcessingData.h"
#import "CVPixelBufferOrientation.h"
#import "TrackedDataObjC.h"

typedef NS_ENUM(NSInteger, DetectorVersionObjC) {
    V_MOBILE_1_0_0,
};

typedef NS_ENUM(NSInteger, EmbedderVersionObjC) {
    V_MOBILE_1_3_0,
};

@interface ImageProcessor : NSObject

- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nonnull) init:(DetectorVersionObjC)detectorVersionObjC
               embedderVersion:(EmbedderVersionObjC)embedderVersionObjC
                    licenseKey:(NSString *_Nonnull)licenseKeyObjC;

- (void) feedBuffer: (double) imageUid buffer: (CVPixelBufferRef _Nonnull) buffer withRotation: (CVPixelBufferOrientation) rotation withScoreThreshold: (float) scoreThreshold;

- (ProcessingData* _Nonnull) getProcessingDataForImageUid: (double) imageUid;

- (NSData* _Nonnull) getBgrImageDataForImageUid: (double) imageUid;

- (CVPixelBufferRef _Nonnull) getCVPixelBufferForDetectionWithId: (unsigned long) detectionId forImageUid:(double)imageUid;

- (UIImage* _Nonnull) getUIImageForDetectionWithId: (unsigned long) detectionId forImageUid:(double)imageUid;

- (NSArray<NSNumber *>* _Nonnull) getEmbeddingForDetectionWithId: (unsigned long) detectionId forImageUid:(double)imageUid;

- (NSArray<NSNumber *>* _Nonnull) getEmbeddingForImage: (CVPixelBufferRef _Nonnull) buffer;

- (void) removeDataForImageUid: (double) imageUid;

- (TrackedDataObjC* _Nonnull) getLatestItemsTrackingData;

- (void) resetTrackingState;

@end
