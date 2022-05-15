
load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")


cc_library(
    name="src",
    #srcs=["rocks.cc"],
    hdrs=["meta.h"],
    deps=[
         "//external:floyd",    
    ],
    copts = ["-std=c++11"],
    linkopts = [
         "-std=c++11",
    ],
)

cc_binary(
    name="server",
    srcs=["server.cc"],
    deps=[
        ":src",
          "//proto:meta_grpc",
          "//external:grpc++",
    ],
    copts = ["-std=c++11"],
    linkopts = [
         "-std=c++11",
    ],
)

