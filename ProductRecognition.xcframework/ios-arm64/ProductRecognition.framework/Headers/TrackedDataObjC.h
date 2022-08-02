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
#import "Item2dTrackingDataObjC.h"

NS_ASSUME_NONNULL_BEGIN

@interface TrackedDataObjC : NSObject

- (instancetype)initWithParams: (NSArray<Item2dTrackingDataObjC *>*) itemsTrackingData coordinateSystemCenterX:(float)coordinateSystemCenterX coordinateSystemCenterY:(float)coordinateSystemCenterY;

@property (nonatomic) NSArray<Item2dTrackingDataObjC *>* itemsTrackingData;
@property (nonatomic) float coordinateSystemCenterX;
@property (nonatomic) float coordinateSystemCenterY;

@end

NS_ASSUME_NONNULL_END
