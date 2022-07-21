#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CVPixelBufferOrientation) {
    CVPixelBufferOrientationNoRotation,
    CVPixelBufferOrientationClockwise90,
    CVPixelBufferOrientationUpsideDown,
    CVPixelBufferOrientationCounterClockwise90
};
