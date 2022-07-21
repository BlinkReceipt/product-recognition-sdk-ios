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
