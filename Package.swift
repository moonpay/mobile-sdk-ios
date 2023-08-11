// swift-tools-version:5.8
import PackageDescription

let package = Package(
    name: "MoonPaySdk",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "MoonPaySdk",
            targets: ["MoonPaySdk"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MoonPaySdk",
            path: "./MoonPaySdk.xcframework"
        ),
    ]
)
