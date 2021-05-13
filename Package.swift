// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

// https://stackoverflow.com/questions/65220359/add-package-dependency-for-a-binary-target-with-swift-package-manager
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
        .package(name: "PhoneNumberKit", url: "https://github.com/marmelroy/PhoneNumberKit.git", from: "3.3.3"),
        .package(name: "Alamofire", url: "https://github.com/Alamofire/Alamofire.git", from: "5.2.0")
    ],
    
  targets: [
    .binaryTarget(name: "AzupaySdkBT",path: "./Sources/AzupaySdk.xcframework"),
    .target(name: "PhoneNumberKitBT", dependencies: ["PhoneNumberKit"]),
    .target(name: "AlamofireBT", dependencies: ["Alamofire"]),
        
        .target(name: "AzupaySdkTargets",
                       dependencies: [
                           .target(name: "AzupaySdkBT", condition: .when(platforms: .some([.iOS]))),
                           .target(name: "PhoneNumberKitBT", condition: .when(platforms: .some([.iOS]))),
                           .target(name: "AlamofireBT", condition: .when(platforms: .some([.iOS]))),
                       ],
                       path: "./Sources/AzupaySdkTargets"
               )
  ]
)
