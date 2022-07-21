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
