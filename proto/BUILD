load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")
cc_proto_library(
    name="message_cc_proto",
    deps=[":message_proto"],
    #cc_libs=["@com_google_protobuf//:protobuf"],
    #protoc="@com_google_protobuf//:protoc",
    visibility = ["//visibility:public"],
)
proto_library(
    name="message_proto",
    srcs=["message.proto"],
)


#cpp_proto_compile(
##    name = "message_cc_proto",
 #   protos = [":message_proto"],
#)