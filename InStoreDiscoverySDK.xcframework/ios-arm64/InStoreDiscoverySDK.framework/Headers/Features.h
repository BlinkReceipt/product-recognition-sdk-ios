#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Feature.h"

NS_ASSUME_NONNULL_BEGIN

@interface Features : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithParams: (NSArray<Feature *>*) features;

@property (nonatomic, readonly) NSArray<Feature *>* features;

@end

NS_ASSUME_NONNULL_END
