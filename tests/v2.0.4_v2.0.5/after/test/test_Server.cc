//
// test_Server.cc
//

#include "headers.h"
#include "Server.hpp"
#include "List.h"
#include "Extractor.h"
#include "Reporter.h"
#include "Locale.h"
#include <cstring>
#undef bool
#include "gtest/gtest.h"
extern int stub_retval_close;
extern ReportHeader *stub_retval_InitReport;
extern long stub_retval_recv;
extern int stub_retval_gettimeofday;
extern Transfer_Info *stub_retval_GetReport;
extern long stub_retval_write;
extern int stub_retval_select;
extern long stub_retval_read;

TEST(test__ZN6Server3RunEv, test_1) {
    stub_retval_close = -1;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = 0;
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = 0;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.mCongestion = 0;
    thread_Settings *rcv_obj_ctor_inSettings = &rcv_obj_ctor_inSettings_obj;
    thread_Settings rcv_obj_mSettings_obj;
    rcv_obj_mSettings_obj.mFileName = 0;
    rcv_obj_mSettings_obj.mHost = 0;
    rcv_obj_mSettings_obj.mLocalhost = 0;
    rcv_obj_mSettings_obj.mOutputFileName = 0;
    rcv_obj_mSettings_obj.Extractor_file = 0;
    rcv_obj_mSettings_obj.reporthdr = 0;
    rcv_obj_mSettings_obj.multihdr = 0;
    rcv_obj_mSettings_obj.runNow = 0;
    rcv_obj_mSettings_obj.runNext = 0;
    rcv_obj_mSettings_obj.mSock = 0;
    rcv_obj_mSettings_obj.flags = 18432;
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    rcv_obj_mBuf_arr[0] = 128;
    Server rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.Run();
}

TEST(test__ZN6Server3RunEv, test_2) {
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = 0;
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = 0;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.mCongestion = 0;
    thread_Settings *rcv_obj_ctor_inSettings = &rcv_obj_ctor_inSettings_obj;
    thread_Settings rcv_obj_mSettings_obj;
    rcv_obj_mSettings_obj.mFileName = 0;
    rcv_obj_mSettings_obj.mHost = 0;
    rcv_obj_mSettings_obj.mLocalhost = 0;
    rcv_obj_mSettings_obj.mOutputFileName = 0;
    rcv_obj_mSettings_obj.Extractor_file = 0;
    rcv_obj_mSettings_obj.reporthdr = 0;
    rcv_obj_mSettings_obj.multihdr = 0;
    rcv_obj_mSettings_obj.runNow = 0;
    rcv_obj_mSettings_obj.runNext = 0;
    rcv_obj_mSettings_obj.mSock = 0;
    rcv_obj_mSettings_obj.flags = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    Server rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = 0;
    rcv_obj.Run();
}

TEST(test__ZN6Server3RunEv, test_3) {
    stub_retval_close = -1;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = 0;
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = 0;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.mCongestion = 0;
    thread_Settings *rcv_obj_ctor_inSettings = &rcv_obj_ctor_inSettings_obj;
    thread_Settings rcv_obj_mSettings_obj;
    rcv_obj_mSettings_obj.mFileName = 0;
    rcv_obj_mSettings_obj.mHost = 0;
    rcv_obj_mSettings_obj.mLocalhost = 0;
    rcv_obj_mSettings_obj.mOutputFileName = 0;
    rcv_obj_mSettings_obj.Extractor_file = 0;
    rcv_obj_mSettings_obj.reporthdr = 0;
    rcv_obj_mSettings_obj.multihdr = 0;
    rcv_obj_mSettings_obj.runNow = 0;
    rcv_obj_mSettings_obj.runNext = 0;
    rcv_obj_mSettings_obj.mSock = 0;
    rcv_obj_mSettings_obj.mBufLen = 0;
    rcv_obj_mSettings_obj.flags = 2048; // !test_1
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    rcv_obj_mBuf_arr[0] = 128;
    Server rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.Run();
}
// End of file
