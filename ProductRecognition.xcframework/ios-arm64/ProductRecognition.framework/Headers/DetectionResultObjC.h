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

NS_ASSUME_NONNULL_BEGIN

@interface DetectionResultObjC : NSObject

- (instancetype)initWithParams: (unsigned long)uid typeOfDetection:(NSInteger)typeOfDetection score:(float)score left:(float)left top:(float) top right:(float)right bottom: (float) bottom;

@property (nonatomic, readonly) unsigned long uid;
@property (nonatomic, readonly) NSInteger typeOfDetection;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) float left;
@property (nonatomic, readonly) float top;
@property (nonatomic, readonly) float right;
@property (nonatomic, readonly) float bottom;

@end

NS_ASSUME_NONNULL_END
