
#load("@rules_cc//cc:defs.bzl", "cc_proto_library")
#load("@rules_proto//proto:defs.bzl", "proto_library")
cc_library(
    name="src",
    srcs=["rocks.cc"],
    hdrs=["rocks.h"],
    deps=[
          "//external:rocksdb",
          
    ],
)
cc_binary(
    name="server",
    srcs=["server.cc"],
    deps=[":src",
          "//proto:message_cc_proto",
          "//external:grpc++",
    ],
)

