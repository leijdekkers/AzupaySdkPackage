// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "AzupaySdk",
  platforms: [
    .iOS(.v14)
  ],
  products: [
    .library(
      name: "AzupaySdk",
      targets: ["AzupaySdk"]),
  ],
    
  targets: [
    .binaryTarget(
      name: "AzupaySdk",
      path: "./Sources/AzupaySdk.xcframework"
    )
  ]
)

