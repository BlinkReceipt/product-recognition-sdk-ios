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
#import <CoreVideo/CoreVideo.h>
#import <UIKit/UIKit.h>

@interface ImageUtilsObjCpp : NSObject

+ (UIImage* _Nonnull) createUIImageFromCVPixelBuffer: (CVPixelBufferRef _Nonnull) cvPixelBufferRef;

+ (CVPixelBufferRef _Nonnull) createCVPixelBufferFromData: (NSData* _Nonnull) imageData width: (int) imgWidth height :(int) imgHeight;

+ (NSData* _Nonnull) createDataFromBGRBytes: (uint8_t* _Nonnull) srcBgrBytes count:(int)count;

@end
