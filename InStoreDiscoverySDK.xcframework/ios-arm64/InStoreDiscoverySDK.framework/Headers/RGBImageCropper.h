#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RGBImageCropper : NSObject

- (void)setImage:(CVPixelBufferRef)cvPixelBuffer;

- (CVPixelBufferRef) getCrop:(uint16_t)x y:(uint16_t)y width:(uint16_t)width height:(uint16_t)height;

@end
