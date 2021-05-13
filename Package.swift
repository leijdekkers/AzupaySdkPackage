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
        .package(name: "RxAlamofire", url: "https://github.com/RxSwiftCommunity/RxAlamofire.git", from: "6.1.0"),
        .package(name: "RxSwift", url: "https://github.com/ReactiveX/RxSwift.git", from: "6.1.0"),
    ],
    
  targets: [
    .binaryTarget(name: "AzupaySdkBT",path: "./Sources/AzupaySdk.xcframework"),
    .binaryTarget(name: "RxCocoaBT",path: "./Sources/RxCocoa.xcframework"),
    .target(name: "PhoneNumberKitBT", dependencies: ["PhoneNumberKit"]),
    .target(name: "AlamofireBT", dependencies: ["RxAlamofire"]),
    .target(name: "RxSwiftBT", dependencies: ["RxSwift"]),
        
        .target(name: "AzupaySdkTargets",
                       dependencies: [
                           .target(name: "AzupaySdkBT", condition: .when(platforms: .some([.iOS]))),
                           .target(name: "RxCocoaBT", condition: .when(platforms: .some([.iOS]))),
                           .target(name: "PhoneNumberKitBT", condition: .when(platforms: .some([.iOS]))),
                           .target(name: "AlamofireBT", condition: .when(platforms: .some([.iOS]))),
                           .target(name: "RxSwiftBT", condition: .when(platforms: .some([.iOS])))
                       ],
                       path: "./Sources/AzupaySdkTargets"
               )
  ]
)
