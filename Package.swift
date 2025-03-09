// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGoTags",
    products: [
        .library(name: "TreeSitterGoTags", targets: ["TreeSitterGoTags"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGoTags",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGoTagsTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGoTags",
            ],
            path: "bindings/swift/TreeSitterGoTagsTests"
        )
    ],
    cLanguageStandard: .c11
)
