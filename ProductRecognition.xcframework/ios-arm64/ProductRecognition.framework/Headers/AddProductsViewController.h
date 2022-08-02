// Copyright (c) 2022 Microblink Ltd. All rights reserved.
//
// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS,
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED!
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#import <UIKit/UIKit.h>

#import "ImageProcessor.h"

NS_ASSUME_NONNULL_BEGIN

@interface AddProductsViewController : UIViewController

@property (nonatomic) DetectorVersionObjC detectorVersion;
@property (nonatomic) float detectorThreshold;
@property (strong, nonatomic) UIImage *cropImg;
@property (strong, nonatomic) NSString *countryCode;

@end

NS_ASSUME_NONNULL_END
