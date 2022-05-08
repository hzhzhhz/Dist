load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library","cpp_grpc_library")

proto_library(
    name="message_proto",
    srcs=["message.proto"],
)
cpp_grpc_library(
    name="message_grpc",
    protos=[":message_proto"],
    visibility = ["//visibility:public"],
)
cpp_proto_library(
    name="message_cpp_proto",
    protos=[":message_proto"],
)
cc_proto_library(
    name="message_cc_proto",
    #@deps=[":message_proto"],
    deps=["//proto:message_proto"],
    visibility = ["//visibility:public"],
    #cc_libs=["@com_google_protobuf//:protobuf"],
    #protoc="@com_google_protobuf//:protoc",
)

proto_library(
    name="meta_proto",
    srcs=["meta.proto"],
)
cpp_grpc_library(
    name="meta_grpc",
    protos=[":meta_proto"],
    visibility = ["//visibility:public"],
)