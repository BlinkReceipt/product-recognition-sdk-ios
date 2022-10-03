// Copyright (c) 2022 Microblink Ltd. All rights reserved.
//
// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS,
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED!
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BGRImageCropper : NSObject

- (void)setImage:(CVPixelBufferRef)cvPixelBuffer;

- (CVPixelBufferRef) getCrop:(uint16_t)x y:(uint16_t)y width:(uint16_t)width height:(uint16_t)height;

@end
