// Copyright (c) 2022 Microblink Ltd. All rights reserved.
//
// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS,
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED!
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DetectionResultObjC.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProcessingData : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithParams: (NSArray<DetectionResultObjC *>*) detectionResults;

@property (nonatomic, readonly) NSArray<DetectionResultObjC *>* detectionResults;

@end

NS_ASSUME_NONNULL_END
