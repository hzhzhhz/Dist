workspace(name="dist")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl","git_repository","new_git_repository")

#
#git_repository(
#    name="com_github_gtest",
#    commit="8ded48c37be09d8cc3665af1b414c5d53c0862e7",
#    remote="https://github.com/google/googletest.git",
#)
local_repository(
    name="com_github_gtest",
    path="third_party/googletest",
    #build_file="third_party/gtest.BUILD"
)
bind(
    name = "gtest",
    actual = "@com_github_gtest//:gtest",
)

#git_repository(
#    name="com_github_gflags",
#    commit="986e8eed00ded8168ef4eaa6f925dc6be50b40fa",
#    remote="https://github.com/gflags/gflags.git",
#)
local_repository(
    name="com_github_gflags",
    path="third_party/gflags-gflags",
    #build_file="third_party/gflags.BUILD"
)
bind(
    name = "gflags",
    actual = "@com_github_gflags//:gflags",
)


local_repository(
    name="com_github_glog",
    path="third_party/glog",
    #build_file="third_party/gflags.BUILD"
)
bind(
    name = "glog",
    actual = "@com_github_glog//:glog",
)
#http_archive(
#    name = "com_github_facebook_rocksdb",
#    url = "https://github.com/facebook/rocksdb/archive/v6.26.0.tar.gz",
#   strip_prefix = "rocksdb-6.26.0",
#  sha256 = "b793066463da71d31a46f31946e4fca435a7c3e73435e2bb1d062d95e0a20116",
#    build_file = "third_party/rocksdb.BUILD",
#)

new_local_repository(
    name="com_github_facebook_rocksdb",
    path="third_party/rocksdb",
    build_file="build/rocksdb.BUILD"
)
bind(
    name = "rocksdb",
    actual = "@com_github_facebook_rocksdb//:rocksdb",
)

#new_git_repository(
#    name = "com_github_madler_zlib",
#    remote = "https://github.com/madler/zlib.git",
#    tag = "v1.2.11",
    #sha256 = "629380c90a77b964d896ed37163f5c3a34f6e6d897311f1df2a7016355c45eff",
#    build_file = "third_party/zlib.BUILD",
#)

new_local_repository(
    name="com_github_madler_zlib",
    path="third_party/zlib",
    build_file="build/zlib.BUILD"
)
bind(
    name = "zlib",
    actual = "@com_github_madler_zlib//:zlib",
)

new_local_repository(
    name="com_github_google_snappy",
    path="third_party/snappy",
    build_file="build/snappy.BUILD"
)
#http_archive(
#    name = "com_github_google_snappy",
#    url = "https://github.com/google/snappy/archive/ed3b7b2.tar.gz",
#    strip_prefix = "snappy-ed3b7b242bd24de2ca6750c73f64bee5b7505944",
#    sha256 = "88a644b224f54edcd57d01074c2d6fd6858888e915c21344b8622c133c35a337",
#    build_file = "third_party/snappy.BUILD",
#)
bind(
    name = "snappy",
    actual = "@com_github_google_snappy//:snappy",
)

bind(
    name = "snappy_config",
    actual = "//third_party/snappy_config:config"
)

# lz4
#http_archive(
#    name = "com_github_lz4_lz4",
#    urls = ["https://github.com/lz4/lz4/archive/v1.9.2.tar.gz"],
#    strip_prefix = "lz4-1.9.2",
#    build_file = "third_party/lz4.BUILD",
#    sha256 = "658ba6191fa44c92280d4aa2c271b0f4fbc0e34d249578dd05e50e76d0e5efcc",
#)
new_local_repository(
    name="com_github_lz4_lz4",
    path="third_party/lz4",
    build_file="build/lz4.BUILD"
)
bind(
    name = "lz4",
    actual = "@com_github_lz4_lz4//:lz4",
)

#zstd
#http_archive(
#    name = "com_github_facebook_zstd",
#    urls = ["https://github.com/facebook/zstd/archive/v1.4.4.tar.gz",],
#    strip_prefix = "zstd-1.4.4",
#    build_file = "third_party/zstd.BUILD",
#    sha256 = "a364f5162c7d1a455cc915e8e3cf5f4bd8b75d09bc0f53965b0c9ca1383c52c8",
#)
new_local_repository(
    name="com_github_facebook_zstd",
    path="third_party/zstd",
    build_file="build/zstd.BUILD"
)
bind(
    name = "zstd",
    actual = "@com_github_facebook_zstd//:zstd",
)

#http_archive(
#    name = "com_google_protobuf",
#    strip_prefix = "protobuf-ab8edf1dbe2237b4717869eaab11a2998541ad8d",
#   url = "https://github.com/google/protobuf/archive/ab8edf1dbe2237b4717869eaab11a2998541ad8d.tar.gz",
#)

local_repository(
    name="com_google_protobuf",
    path="third_party/protobuf",
)
bind(
    name = "protobuf",
    actual = "@com_google_protobuf//:protobuf",
)


