//
// test_Settings.cc
//

#define fprintf_dummy fprintf_dummy_dummy
#include "headers.h"
#include "Settings.hpp"
#include "Locale.h"
#include "SocketAddr.h"
#include "util.h"
#include "gnu_getopt.h"
#include <cstring>
#undef bool
#include "gtest/gtest.h"
extern option const long_options[36];
extern option const env_options[32];
extern char const short_options[55];
extern long const kDefault_UDPRate;
extern int const kDefault_UDPBufLen;
extern int stub_retval_thread_zeroid;
extern char *stub_retval_getenv;
extern int stub_retval_gnu_getopt_long;
extern unsigned long stub_retval_byte_atoi;
extern int stub_retval_SockAddr_isMulticast;
extern long stub_retval_strtol;
extern char const *stub_retval_inet_ntop;

TEST(test_Settings_Interpret, test_1) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(108, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_2) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2048;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(98, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_3) {
    stub_retval_SockAddr_isMulticast = 1;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(99, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_4) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    optarg_arr[0] = 115;
    optarg_arr[1] = 1;
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(120, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_5) {
    stub_retval_SockAddr_isMulticast = 1;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 1;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(86, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_6) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mBufLen = 35;
    mExtSettings_obj.flags = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(117, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_7) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(100, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_8) {
    stub_retval_SockAddr_isMulticast = 1;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(66, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_9) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mMode = 1;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(67, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_10) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(114, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_11) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(73, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_12) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(119, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_13) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(105, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_14) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(70, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_15) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2050;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(108, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_16) {
    stub_retval_SockAddr_isMulticast = 1;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(86, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_17) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(80, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_18) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    optarg_arr[0] = 99;
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(121, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_19) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 0;
    mExtSettings_obj.mThreadMode = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(98, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_20) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(76, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_21) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 1;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(115, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_22) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(111, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_23) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(110, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_24) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(87, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_25) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(77, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_26) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(116, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_29) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(49, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_30) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(85, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_31) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(84, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_32) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(83, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_33) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(82, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_34) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(78, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_35) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(76, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_36) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(73, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_37) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(70, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_38) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(68, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_39) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(121, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_40) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    optarg_arr[0] = 115;
    optarg_arr[1] = 77;
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(120, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_41) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    optarg_arr[0] = 115;
    optarg_arr[1] = 86;
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(120, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_42) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    optarg_arr[0] = 115;
    optarg_arr[1] = 68;
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(120, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_43) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    optarg_arr[0] = 115;
    optarg_arr[1] = 67;
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(120, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_44) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2048;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(117, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_45) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(115, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_46) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(114, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_47) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(112, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_48) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(109, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_49) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(102, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_50) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 3;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(100, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_51) {
    Settings_Interpret(0, 0, 0);
}

TEST(test_Settings_Interpret, test_52) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 1;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(80, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_53) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(86, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_54) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mMode = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(67, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_55) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(66, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_56) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(114, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_57) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(108, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_58) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 0;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(100, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_59) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(99, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_60) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 1;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(99, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_61) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2049;
    mExtSettings_obj.mThreadMode = 2;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(98, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_62) {
    stub_retval_SockAddr_isMulticast = 0;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mThreadMode = 1;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(86, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_63) {
    stub_retval_byte_atoi = 2049;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(119, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_64) {
    stub_retval_byte_atoi = 13;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 2050;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(108, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_65) {
    stub_retval_byte_atoi = 25;
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    char mExtSettings_obj_mLocalhost_arr[1024];
    memset(mExtSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = (char *) &mExtSettings_obj_mLocalhost_arr[0];
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.flags = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(108, optarg, mExtSettings);
}

TEST(test_Settings_Interpret, test_1_1) {
    char optarg_arr[1024];
    memset(optarg_arr, 0, 1024 * sizeof(char));
    char const *optarg = (char const *) &optarg_arr[0];
    thread_Settings mExtSettings_obj;
    mExtSettings_obj.mFileName = 0;
    mExtSettings_obj.mHost = 0;
    mExtSettings_obj.mLocalhost = 0;
    mExtSettings_obj.mOutputFileName = 0;
    mExtSettings_obj.Extractor_file = 0;
    mExtSettings_obj.reporthdr = 0;
    mExtSettings_obj.multihdr = 0;
    mExtSettings_obj.runNow = 0;
    mExtSettings_obj.runNext = 0;
    mExtSettings_obj.mCongestion = 0;
    thread_Settings *mExtSettings = &mExtSettings_obj;
    Settings_Interpret(90, optarg, mExtSettings); // !test_1
}

// End of file
