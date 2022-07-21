#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "CVPixelBufferOrientation.h"
#import "Features.h"

NS_ASSUME_NONNULL_BEGIN

@interface FeaturesExtractorObjC : NSObject

- (Features *) getFeaturesForBuffer: (CVPixelBufferRef) buffer withRotation: (CVPixelBufferOrientation) rotation;

- (UIImage *) getContoursImageForBuffer: (CVPixelBufferRef) buffer withRotation: (CVPixelBufferOrientation) rotation;

@end

NS_ASSUME_NONNULL_END
