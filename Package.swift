// swift-tools-version:5.0
import PackageDescription

let package = Package(
    name: "MZAppearance",
    platforms: [
        .iOS(.v8),
    ],
    products: [
        .library(name: "MZAppearance", targets: ["MZAppearance"]),
    ],
    targets: [
        .target(
            name: "MZAppearance",
            path: "MZAppearance"
        ),
    ],
    swiftLanguageVersions: [.v5]
)
