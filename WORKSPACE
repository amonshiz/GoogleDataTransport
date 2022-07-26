load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "build_bazel_rules_apple",
    sha256 = "36072d4f3614d309d6a703da0dfe48684ec4c65a89611aeb9590b45af7a3e592",
    url = "https://github.com/bazelbuild/rules_apple/releases/download/1.0.1/rules_apple.1.0.1.tar.gz",
)

load(
    "@build_bazel_rules_apple//apple:repositories.bzl",
    "apple_rules_dependencies",
)

apple_rules_dependencies()

http_archive(
    name = "build_bazel_rules_swift",
    sha256 = "12057b7aa904467284eee640de5e33853e51d8e31aae50b3fb25d2823d51c6b8",
    url = "https://github.com/bazelbuild/rules_swift/releases/download/1.0.0/rules_swift.1.0.0.tar.gz",
)

load(
    "@build_bazel_rules_swift//swift:repositories.bzl",
    "swift_rules_dependencies",
)

swift_rules_dependencies()

load(
    "@build_bazel_rules_swift//swift:extras.bzl",
    "swift_rules_extra_dependencies",
)

swift_rules_extra_dependencies()

load(
    "@build_bazel_apple_support//lib:repositories.bzl",
    "apple_support_dependencies",
)

apple_support_dependencies()

http_archive(
    name = "Promises",
    sha256 = "c7d12165d51cf39b82a173141af49aa76cb72a783e64bfd74e38a2a936ff6b12",
    strip_prefix = "promises-2.1.1",
    url = "https://github.com/amonshiz/promises/archive/refs/tags/2.1.1.tar.gz",
)

http_archive(
    name = "GoogleUtilities",
    sha256 = "38cde1b45a833135fd1a454782e03271bb0f233ef9a415b7f66a6dac59fa5a88",
    strip_prefix = "GoogleUtilities-c7ac00b1959c7151cd646db4d31c6bec91f7a58b",
    url = "https://github.com/amonshiz/GoogleUtilities/archive/c7ac00b1959c7151cd646db4d31c6bec91f7a58b.tar.gz",
)

http_archive(
    name = "nanopb",
    sha256 = "1a1fbeadc7f2384e3f53f9838a36042c955bb886f31f6c5ab40bcdeaeeedd548",
    strip_prefix = "nanopb-e2a03270db9f71dbc33b6e6f33e1b571890a6688",
    url = "https://github.com/amonshiz/nanopb/archive/e2a03270db9f71dbc33b6e6f33e1b571890a6688.tar.gz",
)
