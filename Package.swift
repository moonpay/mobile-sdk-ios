// swift-tools-version:5
import PackageDescription

let package = Package(
    name: "MoonpaySDK",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "MoonpaySDK",
            targets: ["MoonpaySDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MoonpaySDK",
            path: "./MoonpaySDK.xcframework"
        ),
    ]
)
