load("@rules_cc//cc:defs.bzl", "cc_binary")
load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_proto_library(
    name = "search_request_proto",
)

cc_binary(
    name = "server",
    srcs = ["main.cc"],
    deps = [
        "//protoc:user_data_cc_pb",
        "@com_github_grpc_grpc//:grpc++",
    ],
)
