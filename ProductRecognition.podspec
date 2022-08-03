#
# Be sure to run `pod lib lint ProductRecognition.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ProductRecognition'
  s.version          = '1.0.0'
  s.summary          = 'The Product Recognition SDK lets you build a fantastic in-store experience in your iOS app.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
The Product Recognition SDK lets you build a fantastic in-store experience in your iOS app. Effortlessly scan the products in grocery store and get all the needed data about them!
                       DESC

  s.homepage         = 'https://github.com/BlinkReceipt/product-recognition-sdk-ios'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'Copyright', :file => 'LICENSE' }
  s.author           = { "$(git config user.name)" => "$(git config user.email)" }
  s.source           = { :git => 'https://github.com/BlinkReceipt/product-recognition-sdk-ios.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.vendored_frameworks = "ProductRecognition.xcframework"
  s.ios.deployment_target = '13.0'
  s.platform = :ios, '13.0'
  s.swift_versions = ['5.0']
  
end
