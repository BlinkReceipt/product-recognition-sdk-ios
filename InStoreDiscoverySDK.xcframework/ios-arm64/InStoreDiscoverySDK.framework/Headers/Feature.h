#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Feature : NSObject

@property (nonatomic, readonly) float x;
@property (nonatomic, readonly) float y;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithParams: (float)x y:(float)y;

@end

NS_ASSUME_NONNULL_END
