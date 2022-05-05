
load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")


cc_library(
    name="src",
    srcs=["rocks.cc"],
    hdrs=["rocks.h"],
    deps=[
          "//external:rocksdb",
          "//proto:message_grpc",    
    ],
)
cc_binary(
    name="server",
    srcs=["server.cc"],
    deps=[":src",
          
          "//external:grpc++",
    ],
)

