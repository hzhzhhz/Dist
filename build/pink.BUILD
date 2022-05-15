# Modified from http://blog.mobileink.com/2018/05/bazel-genrule-patching-external-repo.html
#               https://github.com/smyte/smyte-db/blob/master/third_party/rocksdb.BUILD

licenses(["notice"])

cc_library(
    name = "pink",
    srcs = glob([
        "pink/src/*.cc",
    ]) ,
    hdrs = glob([
        "pink/src/*.h",
        "pink/include/*.h",
    ]),
    includes = [
        ".",
        "include",
        #"util",
    ],
    copts = [
        #"-fno-omit-frame-pointer",
        #"-momit-leaf-frame-pointer",
        "-msse",
        "-msse4.2",
        "-pthread",
        #"-Werror",
        #"-Wsign-compare",
        #"-Wshadow",
        #"-Wno-unused-parameter",
        #"-Wno-unused-variable",
        #"-Woverloaded-virtual",
        #"-Wnon-virtual-dtor",
        #"-Wno-missing-field-initializers",
        #"-fno-builtin-memcmp",
        "-std=c++11",
        "-mpclmul",
        "-O2",
    ],
    linkopts = [
        "-lm",
        "-lpthread",
        "-std=c++11",
    ],
    deps = [
        "//external:slash",
        "//external:protobuf"
    ],
    visibility = ["//visibility:public"],
)