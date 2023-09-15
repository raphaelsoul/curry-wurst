load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_proto_library(
    name = "user_data_cc_pb",
    deps = [":user_data_pb"],
)

proto_library(
    name = "user_data_pb",
    srcs = ["user_data.proto"],
)

package(default_visibility = ["//visibility:public"])
