load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "string_utils_test",
    srcs = ["string_utils_test.cc"],
    deps = [
        "//src/strings",
        "@gtest",
        "@gtest//:gtest_main",  # Only if hello_test.cc has no main()
    ],
)
