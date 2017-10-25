SRC_URI = "https://commondatastorage.googleapis.com/chromium-browser-official/chromium-${PV}.tar.xz"

# Chromium itself is licensed under the 3-clause BSD license. However, it
# depends upon several other projects whose copyright files are listed in
# LIC_FILES_CHKSUM. The licenses in those files vary, but none of them should
# cause the main Chromium license to change. The list of copyright files was
# generated with the aid of Chromium's own tools/licenses.py module. As such,
# it contains more items than we actually use in our build (e.g. there are
# components specific to Android, OS X, iOS etc, or bundled dependencies that
# we replace with system-wide versions). For more information about each
# project, you can consult README.chromium in each directory listed below.
# LICENSE does not cover all the licenses in LIC_FILES_CHKSUM; instead, it
# currently contains Chromium's license (BSD-3-Clause) as well as Blink's
# (LGPL2.0, LGPL2.1 and BSD-2-Clause).
LICENSE = "BSD-3-Clause & LGPL-2.0 & LGPL-2.1"
LIC_FILES_CHKSUM = "\
    file://${S}/LICENSE;md5=0fca02217a5d49a14dfe2d11837bb34d \
    file://${S}/LICENSE.chromium_os;md5=87dd8458232da630f5617873d42d8350 \
    file://${S}/base/third_party/dmg_fp/LICENSE;md5=0893720de1a2e17053089dc16f743e11 \
    file://${S}/base/third_party/dynamic_annotations/LICENSE;md5=b6bd7011ecc1a4f7ac3525589f45e565 \
    file://${S}/base/third_party/libevent/LICENSE;md5=a2b0302a710150293fb85d2bfabd3de6 \
    file://${S}/base/third_party/nspr/LICENSE;md5=0806173dfb7e6d060074595e968fd02e \
    file://${S}/base/third_party/superfasthash/LICENSE;md5=c66981f8ad23c9f279a5b9e07385128c \
    file://${S}/base/third_party/symbolize/LICENSE;md5=17ae3b22fe8fa438966625593e2eea85 \
    file://${S}/base/third_party/valgrind/LICENSE;md5=b95c9cb2560f157c60ea60ac1aa69469 \
    file://${S}/base/third_party/xdg_mime/LICENSE;md5=8e8261c342b33e06648483ac7f4862c9 \
    file://${S}/base/third_party/xdg_user_dirs/LICENSE;md5=d998f250c491c329a8254dd1ca62c647 \
    file://${S}/breakpad/LICENSE;md5=828152b41153892a725f0e7f56faff73 \
    file://${S}/buildtools/third_party/libc++/trunk/LICENSE.TXT;md5=7b3a0e1b99822669d630011defe9bfd9 \
    file://${S}/buildtools/third_party/libc++abi/trunk/LICENSE.TXT;md5=8ae94dd6195890583eee15a988b6ea79 \
    file://${S}/chrome/installer/mac/third_party/bsdiff/LICENSE;md5=0dbe7a50f028269750631fcbded3846a \
    file://${S}/chrome/installer/mac/third_party/xz/LICENSE;md5=8bbde65ae0523dc878ed1ac1252d2d14 \
    file://${S}/chrome/third_party/chromevox/LICENSE;md5=45739090b454125d851ac7bb1bbd23a2 \
    file://${S}/chrome/third_party/mozilla_security_manager/LICENSE;md5=0c259b853bbf067b361100ce560adce7 \
    file://${S}/chromeos/third_party/android_bionic_libc/NOTICE;md5=323acddf0a0970d8ad7a7af3ba745f67 \
    file://${S}/courgette/third_party/bsdiff/LICENCE;md5=7c2ad392281bc3d9b04a31102ee7abdd \
    file://${S}/courgette/third_party/divsufsort/LICENSE;md5=e261f081e52882dad3ff0225497ce451 \
    file://${S}/ios/third_party/blink/LICENSE;md5=9fdb47308c4e0a2b6d07c5af39e5da1a \
    file://${S}/ios/third_party/material_components_ios/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/ios/third_party/material_font_disk_loader_ios/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/ios/third_party/material_roboto_font_loader_ios/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/ios/third_party/material_sprited_animation_view_ios/LICENSE;md5=175792518e4ac015ab6696d16c4f607e \
    file://${S}/ios/third_party/material_text_accessibility_ios/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/native_client/LICENSE;md5=cbbd27594afd089daa160d3a16dd515a \
    file://${S}/native_client_sdk/src/libraries/third_party/newlib-extras/README;md5=e944d73ca3817b7ca8656eafb9497fed \
    file://${S}/net/third_party/nss/LICENSE;md5=3b1e88e1b9c0b5a4b2881d46cce06a18 \
    file://${S}/sdch/open-vcdiff/COPYING;md5=ff820d4ddc1ba05b6fd37b41a21506f9 \
    file://${S}/third_party/SPIRV-Tools/LICENSE;md5=ce523927d7bcd789d6c3af579d03ad73 \
    file://${S}/third_party/WebKit/LICENSE_FOR_ABOUT_CREDITS;md5=11e90d553b211de885f245900c4ccf89 \
    file://${S}/third_party/accessibility-audit/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/afl/src/docs/COPYING;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/android_async_task/LICENSE;md5=9f3f1bd0f219307a920c8eaae218a14d \
    file://${S}/third_party/android_crazy_linker/LICENSE;md5=997351b5bb1c56ca5be66be8060bb383 \
    file://${S}/third_party/android_data_chart/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/android_media/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/android_opengl/LICENSE;md5=d10e92761a860d4113a7a525c78daf13 \
    file://${S}/third_party/android_swipe_refresh/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/angle/LICENSE;md5=10305d79487367a5e938772c27246ac1 \
    file://${S}/third_party/apple_apsl/LICENSE;md5=c8c14a9f985552dba8d3edbd76660088 \
    file://${S}/third_party/apple_sample_code/LICENSE;md5=d4c6eafcba87d49fffb4620359f7fe01 \
    file://${S}/third_party/ashmem/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/boringssl/src/LICENSE;md5=7707289753aa39daf59ecd93d0164faf \
    file://${S}/third_party/brotli/LICENSE;md5=941ee9cd1609382f946352712a319b4b \
    file://${S}/third_party/bspatch/LICENSE;md5=3e837ede9697ce4c789c3ca32aabe003 \
    file://${S}/third_party/cacheinvalidation/src/google/cacheinvalidation/COPYING;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/ced/LICENSE;md5=3947f60c9d4b1ba51d193af511855a55 \
    file://${S}/third_party/cld/LICENSE;md5=d8b32ba83f8b11e4badd979f4319e706 \
    file://${S}/third_party/cld_2/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/cld_3/LICENSE;md5=d8b32ba83f8b11e4badd979f4319e706 \
    file://${S}/third_party/closure_compiler/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/crashpad/crashpad/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/custom_tabs_client/LICENSE;md5=34400b68072d710fecd0a2940a0d1658 \
    file://${S}/third_party/d3/src/LICENSE;md5=5e44e63b7491ec4b18f73d1b38334a04 \
    file://${S}/third_party/decklink/LICENSE;md5=85b197f7b7b1ef270b01a1b6377be50e \
    file://${S}/third_party/deqp/LICENSE;md5=67d07a07ec29a50a3ded12b2ba952257 \
    file://${S}/third_party/dom_distiller_js/LICENSE;md5=1399a5b89c7ed8167d261770432511e8 \
    file://${S}/third_party/errorprone/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/expat/files/COPYING;md5=9c3ee559c6f9dcee1043ead112139f4f \
    file://${S}/third_party/fips181/COPYING;md5=da26b18c1a03a3cae0abccae554029c6 \
    file://${S}/third_party/flac/COPYING.Xiph;md5=a2c4b71c0198682376d483eb5bcc9197 \
    file://${S}/third_party/flatbuffers/LICENSE;md5=a873c5645c184d51e0f9b34e1d7cf559 \
    file://${S}/third_party/flot/LICENSE.txt;md5=fe1ea2158d814e4fc7227c8c6ccd7ab3 \
    file://${S}/third_party/fontconfig/src/COPYING;md5=7a0449e9bc5370402a94c00204beca3d \
    file://${S}/third_party/freetype/src/docs/FTL.TXT;md5=13b25413274c9b3b09b63e4028216ff4 \
    file://${S}/third_party/gestures/LICENSE;md5=8a978a7211275297a3d816117be58ebf \
    file://${S}/third_party/gif_player/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327 \
    file://${S}/third_party/glslang/LICENSE;md5=ce523927d7bcd789d6c3af579d03ad73 \
    file://${S}/third_party/google_input_tools/LICENSE;md5=ff0b0f0202337c9d4ae2d869797049d3 \
    file://${S}/third_party/google_toolbox_for_mac/LICENSE;md5=740fe57c4bba4c18b3a3bafd39cb70f8 \
    file://${S}/third_party/gvr-android-sdk/LICENSE;md5=50b9d1f02b2ee0d8a568ccf4d35216e2 \
    file://${S}/third_party/haha/LICENSE;md5=7a4d962049fded4f1b47d1e4027ace42 \
    file://${S}/third_party/harfbuzz-ng/COPYING;md5=e021dd6dda6ff1e6b1044002fc662b9b \
    file://${S}/third_party/hunspell/COPYING.MPL;md5=bfe1f75d606912a4111c90743d6c7325 \
    file://${S}/third_party/iaccessible2/LICENSE;md5=43bbd0bfb581347ec10def720000a645 \
    file://${S}/third_party/iccjpeg/LICENSE;md5=26834d132689a03abf860f4572705494 \
    file://${S}/third_party/icu/LICENSE;md5=fe9e1f2c500466d8f18df2cd068e4b74 \
    file://${S}/third_party/inspector_protocol/LICENSE;md5=db90dcb101891a7285d25f2fbceca752 \
    file://${S}/third_party/isimpledom/LICENSE;md5=822502c0e010ccdbb6a3e681dd47888e \
    file://${S}/third_party/jsoncpp/LICENSE;md5=c56ee55c03a55f8105b969d8270632ce \
    file://${S}/third_party/jstemplate/COPYING;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/khronos/LICENSE;md5=1d2ef853a9ae7ace4e16fda0d48f597b \
    file://${S}/third_party/lcov/COPYING;md5=751419260aa954499f7abaabaa882bbe \
    file://${S}/third_party/leakcanary/LICENSE;md5=175792518e4ac015ab6696d16c4f607e \
    file://${S}/third_party/leveldatabase/src/LICENSE;md5=92d1b128950b11ba8495b64938fc164d \
    file://${S}/third_party/libFuzzer/LICENSE.TXT;md5=4c0bc17c954e99fd547528d938832bfa \
    file://${S}/third_party/libXNVCtrl/LICENSE;md5=9e6c209899aa4986d090320bbca2fc76 \
    file://${S}/third_party/libaddressinput/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/libevdev/LICENSE;md5=9ee2ef12ddcc3b79de961c76918569b6 \
    file://${S}/third_party/libjingle_xmpp/LICENSE;md5=ad296492125bc71530d06234d9bfebe0 \
    file://${S}/third_party/libjpeg/LICENSE;md5=b44b6615c3ed3bad7c25c9d66de81b05 \
    file://${S}/third_party/libjpeg_turbo/LICENSE.md;md5=843854939fbe775b4faaf7517f95b091 \
    file://${S}/third_party/liblouis/LICENSE;md5=8ab69863de0d3a0e00c4f97a4d78dd4a \
    file://${S}/third_party/libphonenumber/LICENSE;md5=e23fadd6ceef8c618fc1c65191d846fa \
    file://${S}/third_party/libpng/LICENSE;md5=b3edd1241cafd9e736d04c08d5017ff4 \
    file://${S}/third_party/libprotobuf-mutator/src/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/libsecret/LICENSE;md5=23c2a5e0106b99d75238986559bb5fc6 \
    file://${S}/third_party/libsync/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/libudev/LICENSE;md5=4fbd65380cdd255951079008b364516c \
    file://${S}/third_party/libusb/src/COPYING;md5=fbc093901857fcd118f065f900982c24 \
    file://${S}/third_party/libvpx/source/libvpx/LICENSE;md5=d5b04755015be901744a78cc30d390d4 \
    file://${S}/third_party/libwebm/source/LICENSE.TXT;md5=6e8dee932c26f2dab503abf70c96d8bb \
    file://${S}/third_party/libwebp/LICENSE;md5=72dceabd78c6f435bb304047aff1745a \
    file://${S}/third_party/libxml/src/Copyright;md5=2044417e2e5006b65a8b9067b683fcf1 \
    file://${S}/third_party/libxslt/src/Copyright;md5=0cd9a07afbeb24026c9b03aecfeba458 \
    file://${S}/third_party/libyuv/LICENSE;md5=464282cfb405b005b9637f11103a7325 \
    file://${S}/third_party/logilab/logilab/common/LICENSE.txt;md5=751419260aa954499f7abaabaa882bbe \
    file://${S}/third_party/lzma_sdk/LICENSE;md5=a8d1f5a28cfd35e6dfea09b82672fae7 \
    file://${S}/third_party/mach_override/LICENSE;md5=0e9870caf60d27bfaff637979bfafc44 \
    file://${S}/third_party/mesa/LICENSE;md5=89b61de67f7dc5e1c536aa23192b1468 \
    file://${S}/third_party/minigbm/LICENSE;md5=fcd558ab2fd7f53408826e80eb0c11eb \
    file://${S}/third_party/modp_b64/LICENSE;md5=eb7e2e0af1d4971360553aedadee8d86 \
    file://${S}/third_party/molokocacao/LICENSE;md5=2be992b97984f595666a17061e112658 \
    file://${S}/third_party/mozilla/LICENSE;md5=822502c0e010ccdbb6a3e681dd47888e \
    file://${S}/third_party/mt19937ar/LICENSE;md5=0ba2340297d7bf84647affdcbe3f90b9 \
    file://${S}/third_party/openh264/src/LICENSE;md5=bb6d3771da6a07d33fd50d4d9aa73bcf \
    file://${S}/third_party/openmax_dl/LICENSE;md5=3c999c621badfd6937bcfef14f4528ce \
    file://${S}/third_party/opus/src/COPYING;md5=e304cdf74c2a1b0a33a5084c128a23a3 \
    file://${S}/third_party/ots/LICENSE;md5=c2c05f9bdd5fc0b458037c2d1fb8d95e \
    file://${S}/third_party/pdfium/LICENSE;md5=defd64fe3646eb60a5d01fcbcc8b6b7c \
    file://${S}/third_party/ply/LICENSE;md5=f298aa3b0cfe0b0ea96acabf944529c0 \
    file://${S}/third_party/polymer/LICENSE.polymer;md5=324f45ce459ffd97e41d175a4e95a4be \
    file://${S}/third_party/protobuf/LICENSE;md5=35953c752efc9299b184f91bef540095 \
    file://${S}/third_party/pylint/pylint/LICENSE.txt;md5=4325afd396febcb659c36b49533135d4 \
    file://${S}/third_party/qcms/src/COPYING;md5=65636fa951328d3be95f6047ec3936ce \
    file://${S}/third_party/re2/LICENSE;md5=3b5c31eb512bdf3cb11ffd5713963760 \
    file://${S}/third_party/sfntly/COPYING.txt;md5=2326ae5ca22e299a528433bebb02131f \
    file://${S}/third_party/shaderc/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327 \
    file://${S}/third_party/simplejson/LICENSE.txt;md5=8a9f8dcfcd28c34daa443e5b1d29813b \
    file://${S}/third_party/skia/LICENSE;md5=d25bb58a1be2e1af9b58d31565a206dc \
    file://${S}/third_party/smhasher/LICENSE;md5=0d948322ab524e2b74f55eb8ef57c74a \
    file://${S}/third_party/snappy/src/COPYING;md5=f62f3080324a97b3159a7a7e61812d0c \
    file://${S}/third_party/speech-dispatcher/COPYING;md5=5828ebb4b7590269a994ed46b0a70df0 \
    file://${S}/third_party/sqlite/LICENSE;md5=7256769d4613c0af5a72be32ba20ccf7 \
    file://${S}/third_party/sudden_motion_sensor/LICENSE;md5=6f89397ba4dda73a940f27f76e9ad9d4 \
    file://${S}/third_party/swiftshader/LICENSE.txt;md5=d273d63619c9aeaf15cdaf76422c4f87 \
    file://${S}/third_party/tcmalloc/LICENSE;md5=8ecc91ee1a2c17333b40126bfa32b7ca \
    file://${S}/third_party/tlslite/LICENSE;md5=aab0efc53fd36d5832963dc71fd2316e \
    file://${S}/third_party/usb_ids/LICENSE;md5=8f694e3758e3e57a5223bfa2bf29d452 \
    file://${S}/third_party/usrsctp/LICENSE;md5=d8ad24c2ddd0e7bc1b0a6e4c7c80443e \
    file://${S}/third_party/v4l-utils/COPYING.libv4l;md5=d749e86a105281d7a44c2328acebc4b0 \
    file://${S}/third_party/vulkan/LICENSE;md5=16f18dd21657bdb148361746fdcc49a0 \
    file://${S}/third_party/wayland-protocols/src/COPYING;md5=c7b12b6702da38ca028ace54aae3d484 \
    file://${S}/third_party/wayland/src/COPYING;md5=b31d8f53b6aaf2b4985d7dd7810a70d1 \
    file://${S}/third_party/wds/src/COPYING;md5=cb8aedd3bced19bd8026d96a8b6876d7 \
    file://${S}/third_party/web-animations-js/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/webrtc/LICENSE;md5=ad296492125bc71530d06234d9bfebe0 \
    file://${S}/third_party/woff2/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://${S}/third_party/wtl/Ms-PL.txt;md5=c1ff18e69b2e953f65f28bcbc29be275 \
    file://${S}/third_party/xdg-utils/LICENSE;md5=a5367a90934098d6b05af3b746405014 \
    file://${S}/third_party/yara/src/COPYING;md5=541962f9dacf27c928f57e3a7ba9e1f2 \
    file://${S}/third_party/zlib/LICENSE;md5=f09575dbfb09420642318b413159496f \
    file://${S}/url/third_party/mozilla/LICENSE.txt;md5=437ced1e9b232651b0912a9594da43b2 \
    file://${S}/v8/LICENSE;md5=71f2c485344c921f659ea9f7d895ea22 \
    file://${S}/v8/LICENSE.fdlibm;md5=b17367d6c97e638599071d99a3049dfe \
    file://${S}/v8/LICENSE.strongtalk;md5=956a43818dd13f2e93088fc2c93589d2 \
    "