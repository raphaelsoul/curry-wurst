load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "rules_cc",
    sha256 = "ae46b722a8b8e9b62170f83bfb040cbf12adb732144e689985a66b26410a7d6f",
    strip_prefix = "rules_cc-0.0.8",
    urls = ["https://github.com/bazelbuild/rules_cc/releases/download/0.0.8/rules_cc-0.0.8.tar.gz"],
)

load("@rules_cc//cc:repositories.bzl", "rules_cc_dependencies")

rules_cc_dependencies()

http_archive(
    name = "gtest",
    build_file = "@//:gtest.BUILD",
    sha256 = "94c634d499558a76fa649edb13721dce6e98fb1e7018dfaeba3cd7a083945e91",
    strip_prefix = "googletest-release-1.10.0",
    url = "https://github.com/google/googletest/archive/release-1.10.0.zip",
)

http_archive(
    name = "com_github_grpc_grpc",
    strip_prefix = "grpc-0f8cb206ef897f9cff2206e06a1a5303dbd4aeef",
    urls = [
        "https://github.com/grpc/grpc/archive/0f8cb206ef897f9cff2206e06a1a5303dbd4aeef.tar.gz",
    ],
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()
