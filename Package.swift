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
      targets: ["AzupaySdkTargets"]),
  ],
    
    dependencies: [
        .package(name: "PhoneNumberKit", url: "https://github.com/marmelroy/PhoneNumberKit.git", from: "3.3.3")
    ],
    
  targets: [
    .binaryTarget(name: "AzupaySdkBT",path: "./Sources/AzupaySdk.xcframework"),
  //  .target(name: "PhoneNumberKitBT", dependencies: ["PhoneNumberKit"])
    
        .target(name: "AzupaySdkTargets",
                       dependencies: [
                           .target(name: "AzupaySdkBT", condition: .when(platforms: .some([.iOS]))),
//                           .target(name: "PhoneNumberKitBT", condition: .when(platforms: .some([.iOS])))
                       ],
                       path: "./Sources/AzupaySdkTargets"
               )
  ]
)
