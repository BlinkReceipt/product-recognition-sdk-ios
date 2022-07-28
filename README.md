![Microblink](Resources/logo-microblink.png)

# **Product Recognition** SDK for iOS

The Product Recognition SDK lets you build a fantastic in-store experience in your iOS app. Effortlessly scan the products in grocery store and get all the needed data about them!


## Requirements

SDK package contains Product Recognition framework and sample apps which demonstrate framework integration. The framework can be deployed in **iOS 13.0 or later**.


## Installation

### CocoaPods

### Carthage

### Swift Package Manager

### Manually


## Sample apps

Under [Samples](Samples) directory, you can find a simple demo app that is using our SDK. Some options are used and presented. 

## Getting Started
### Set Up License Key for Authentication
```swift
func application(_ application: UIApplication, didFinishLaunchingWithOptions
                 launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {

  AuthManager.shared.loadAuthTokenForCurrentDevice(licenseKey: <license key string>)
  
  return true
}
```
### Usage
```swift
let singlePhotoVC = SinglePhotoVC()
singlePhotoVC.modalPresentationStyle = .fullScreen
self.present(singlePhotoVC, animated: true)
```
### Customizable UI
#### Capture View
> Default || Custom

![Screenshot_Capture_Default](Resources/screenshot-capture-default.png) ![Screenshot_Capture_Custom](Resources/screenshot-capture-custom.png)
```swift
// When captureRegion is not set, the entire screen is the default capture region
singlePhotoVC.captureRegion = CGRect(x: 100, y: 100, width: 200, height: 600)
// Custom UI elements
singlePhotoVC.noPromoBackgroundColor = UIColor.orange
singlePhotoVC.noPromoFont = UIFont.boldSystemFont(ofSize: 15)
singlePhotoVC.noPromoText = "There's no promo!"
singlePhotoVC.noPromoTextColor = UIColor.yellow
singlePhotoVC.shutterButtonImage = UIImage(systemName: "camera.circle.fill",
                                           withConfiguration: UIImage.SymbolConfiguration(pointSize: 80))
singlePhotoVC.shutterButtonTint = UIColor.green
```
