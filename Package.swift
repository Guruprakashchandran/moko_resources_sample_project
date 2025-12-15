// swift-tools-version:6.1
import PackageDescription

let package = Package(
   name: "SampleSPM",
   platforms: [
     .iOS(.v14),
   ],
   products: [
//      .library(name: "Shared", targets: ["Shared"])
   ],
   targets: [
    .executableTarget(name: "ExecutableTarget")
   ]
)

