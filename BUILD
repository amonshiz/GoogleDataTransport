package(default_visibility = ["//visibility:public"])

objc_library(
    name = "GoogleDataTransport",
    srcs = glob([
        "GoogleDataTransport/GDTCCTLibrary/**/*.h",
        "GoogleDataTransport/GDTCCTLibrary/**/*.m",
        "GoogleDataTransport/GDTCCTLibrary/**/*.c",
        "GoogleDataTransport/GDTCORLibrary/**/*.h",
        "GoogleDataTransport/GDTCORLibrary/**/*.m",
    ]),
    hdrs = glob([
        "GoogleDataTransport/GDTCORLibrary/Public/GoogleDataTransport/**/*.h",
    ]),
    copts = [
        "-DPB_FIELD_32BIT=1",
        "-DPB_NO_PACKED_STRUCTS=1",
        "-DPB_ENABLE_MALLOC=1",
        "-DGDTCOR_VERSION='9.2.0'",
    ],
    includes = [
        "GoogleDataTransport/GDTCORLibrary/Public/GoogleDataTransport",
    ],
    module_name = "GoogleDataTransport",
    sdk_dylibs = [
        "libz",
    ],
    sdk_frameworks = [
        "SystemConfiguration",
        "CoreTelephony",
    ],
    deps = [
        "@GoogleUtilities",
        "@Promises",
        "@nanopb",
    ],
)
