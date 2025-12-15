// swift-tools-version:6.1
import PackageDescription

let package = Package(
   name: "SampleSPM",
   platforms: [
     .iOS(.v14),
     .macOS(.v10_13)
   ],
   products: [
      .library(name: "MokoResources", targets: ["MokoResources"])
   
   ],
   targets: [
    .binaryTarget(name: "MokoResources", path: " ./Sources/Moko/MokoResources.xcframework"),
    .executableTarget(name: "ExecutableTarget",dependencies: ["MokoResources"])
   ]
)

