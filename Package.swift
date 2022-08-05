// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ProductRecognition",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "ProductRecognition",
            targets: ["ProductRecognition"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "ProductRecognition",
            url: "https://github.com/BlinkReceipt/product-recognition-sdk-ios/releases/download/1.0.0/ProductRecognition.xcframework-1.0.0.zip",
            checksum: b93c934eafa2645df9c68bcb986c5666512e5876cbc0bbb0c3fe92645cfcc526)
    ]
)
