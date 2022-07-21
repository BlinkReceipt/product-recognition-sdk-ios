#pragma once

#import <CoreVideo/CoreVideo.h>
#import <UIKit/UIKit.h>
#import "DetectionResultObjC.h"
#import "ProcessingData.h"
#import "CVPixelBufferOrientation.h"
#import "TrackedDataObjC.h"

typedef NS_ENUM(NSInteger, DetectorVersionObjC) {
    V_GENERAL_0_6_0,
    V_MOBILE_0_3_0,
    V_MOBILE_0_4_0,
};

typedef NS_ENUM(NSInteger, EmbedderVersionObjC) {
    V_MOBILE_1_2_0,
    V_MOBILE_1_2_1,
    V_MOBILE_1_2_2,
    V_MOBILE_1_3_0,
};

@interface ImageProcessor : NSObject

- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nonnull) init:(DetectorVersionObjC)detectorVersionObjC embedderVersion:(EmbedderVersionObjC)embedderVersionObjC;

- (void) feedBuffer: (double) imageUid buffer: (CVPixelBufferRef _Nonnull) buffer withRotation: (CVPixelBufferOrientation) rotation withScoreThreshold: (float) scoreThreshold;

- (ProcessingData* _Nonnull) getProcessingDataForImageUid: (double) imageUid;

- (NSData* _Nonnull) getImageDataForImageUid: (double) imageUid;

- (UIImage* _Nonnull) getUIImageForImageUid: (double) imageUid;

- (CVPixelBufferRef _Nonnull) getCVPixelBufferForDetectionWithId: (unsigned long) detectionId forImageUid:(double)imageUid;

- (UIImage* _Nonnull) getUIImageForDetectionWithId: (unsigned long) detectionId forImageUid:(double)imageUid;

- (NSArray<NSNumber *>* _Nonnull) getEmbeddingForDetectionWithId: (unsigned long) detectionId forImageUid:(double)imageUid;

- (NSArray<NSNumber *>* _Nonnull) getEmbeddingForImage: (CVPixelBufferRef _Nonnull) buffer;

- (void) removeDataForImageUid: (double) imageUid;

- (TrackedDataObjC* _Nonnull) getLatestItemsTrackingData;
@end
