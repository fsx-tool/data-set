//
// test_PerfSocket.cc
//

#include "headers.h"
#include "PerfSocket.hpp"
#include "util.h"
#include <cstring>
#undef bool
#include "gtest/gtest.h"
extern int stub_retval_setsock_tcp_windowsize;
extern int stub_retval_setsockopt;

TEST(test__Z16SetSocketOptionsP15thread_Settings, test_1) {
    thread_Settings inSettings_obj;
    inSettings_obj.mFileName = 0;
    inSettings_obj.mHost = 0;
    inSettings_obj.mLocalhost = 0;
    inSettings_obj.mOutputFileName = 0;
    inSettings_obj.Extractor_file = 0;
    inSettings_obj.reporthdr = 0;
    inSettings_obj.multihdr = 0;
    inSettings_obj.runNow = 0;
    inSettings_obj.runNext = 0;
    inSettings_obj.mTOS = 1;
    inSettings_obj.flags = 32;
    thread_Settings *inSettings = &inSettings_obj;
    SetSocketOptions(inSettings);
}

TEST(test__Z16SetSocketOptionsP15thread_Settings, test_2) {
    thread_Settings inSettings_obj;
    inSettings_obj.mFileName = 0;
    inSettings_obj.mHost = 0;
    inSettings_obj.mLocalhost = 0;
    inSettings_obj.mOutputFileName = 0;
    inSettings_obj.Extractor_file = 0;
    inSettings_obj.reporthdr = 0;
    inSettings_obj.multihdr = 0;
    inSettings_obj.runNow = 0;
    inSettings_obj.runNext = 0;
    inSettings_obj.mTOS = -1;
    inSettings_obj.flags = 2048;
    thread_Settings *inSettings = &inSettings_obj;
    SetSocketOptions(inSettings);
}

TEST(test__Z16SetSocketOptionsP15thread_Settings, test_3) {
    thread_Settings inSettings_obj;
    inSettings_obj.mFileName = 0;
    inSettings_obj.mHost = 0;
    inSettings_obj.mLocalhost = 0;
    inSettings_obj.mOutputFileName = 0;
    inSettings_obj.Extractor_file = 0;
    inSettings_obj.reporthdr = 0;
    inSettings_obj.multihdr = 0;
    inSettings_obj.runNow = 0;
    inSettings_obj.runNext = 0;
    inSettings_obj.mTOS = 1;
    inSettings_obj.flags = 0;
    thread_Settings *inSettings = &inSettings_obj;
    SetSocketOptions(inSettings);
}

// End of file
