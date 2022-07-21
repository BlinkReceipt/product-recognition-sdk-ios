//
//  AddProductsViewController.h
//  InStoreDiscovery
//
//  Created by Danny Panzer on 3/20/22.
//

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
