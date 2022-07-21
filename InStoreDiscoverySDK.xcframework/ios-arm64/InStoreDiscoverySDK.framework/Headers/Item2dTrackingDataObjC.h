#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Item2dTrackingDataObjC : NSObject

- (instancetype)initWithParams: (unsigned long)index left:(float)left top:(float) top right:(float)right bottom: (float) bottom;

@property (nonatomic) int index;
@property (nonatomic) float left;
@property (nonatomic) float top;
@property (nonatomic) float right;
@property (nonatomic) float bottom;

@end

NS_ASSUME_NONNULL_END
