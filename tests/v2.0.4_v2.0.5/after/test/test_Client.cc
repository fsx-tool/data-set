//
// test_Client.cc
//

#include "headers.h"
#include "Client.hpp"
#include "Thread.h"
#include "SocketAddr.h"
#include "PerfSocket.hpp"
#include "Extractor.h"
#include "delay.hpp"
#include "util.h"
#include "Locale.h"
#include <cstring>
#undef bool
#include "gtest/gtest.h"
extern double const kSecs_to_usecs;
extern int const kBytes_to_Bits;
extern int stub_retval_Extractor_canRead;
extern int stub_retval_close;
extern ReportHeader *stub_retval_InitReport;
extern int stub_retval_setitimer;
extern int stub_retval_Extractor_getNextDataBlock;
extern long stub_retval_write;
extern int stub_retval_gettimeofday;
extern int *stub_retval___errno_location;
extern long stub_retval_send;
extern int stub_retval_SockAddr_isIPv6;
extern int stub_retval_socket;
extern int stub_retval_bind;
extern unsigned int stub_retval_SockAddr_get_sizeof_sockaddr;
extern int stub_retval_connect;
extern int stub_retval_getsockname;
extern int stub_retval_getpeername;
extern int stub_retval_select;
extern long stub_retval_read;

TEST(test__ZN6Client6RunTCPEv, test_1) {
    stub_retval_Extractor_canRead = 0;
    stub_retval_connect = -1;
    stub_retval_socket = -1;
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = 0;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 532752;
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
    rcv_obj_mSettings_obj.flags = 4112;
    rcv_obj_mSettings_obj.mAmount = 0;
    rcv_obj_mSettings_obj.mInterval = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = 0;
    rcv_obj.RunTCP();
}

TEST(test__ZN6Client6RunTCPEv, test_2) {
    stub_retval_Extractor_canRead = 16777216;
    stub_retval_connect = -1;
    stub_retval_socket = -1;
    stub_retval_bind = -1;
    stub_retval_write = 7680603201712684928;
    sInterupted = 0;
    stub_retval_close = -1;
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    char rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = (ReporterData *) &rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[0];
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 8464;
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
    rcv_obj_mSettings_obj.flags = 16;
    rcv_obj_mSettings_obj.mAmount = -1; // !test_2
    rcv_obj_mSettings_obj.mInterval = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.RunTCP();
}

TEST(test__ZN6Client6RunTCPEv, test_3) {
    stub_retval_Extractor_canRead = 65536;
    stub_retval_connect = -1;
    stub_retval_socket = -1;
    stub_retval_bind = -1;
    stub_retval_setitimer = 65536;
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    char rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = (ReporterData *) &rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[0];
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 8464;
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
    rcv_obj_mSettings_obj.flags = 4096;
    rcv_obj_mSettings_obj.mAmount = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.RunTCP();
}

TEST(test__ZN6Client3RunEv, test_1) {
    int stub_retval___errno_location_arr[1024];
    memset(stub_retval___errno_location_arr, 0, 1024 * sizeof(int));
    stub_retval___errno_location_arr[0] = 105;
    stub_retval___errno_location = (int *) &stub_retval___errno_location_arr[0];
    stub_retval_Extractor_canRead = 65536;
    stub_retval_write = -9223372036854775808;
    sInterupted = 65536;
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    char rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = (ReporterData *) &rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[0];
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 8464;
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
    rcv_obj_mSettings_obj.flags = 6162; // !test_1
    rcv_obj_mSettings_obj.mUDPRate = 0;
    rcv_obj_mSettings_obj.mAmount = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.mEndTime.mTime.tv_usec = 72057594037927936;
    rcv_obj.lastPacketTime.mTime.tv_sec = -281474976710656;
    rcv_obj.lastPacketTime.mTime.tv_usec = -4294967296;
    rcv_obj.Run();
}

TEST(test__ZN6Client3RunEv, test_2) {
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = 0;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 532752;
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
    rcv_obj_mSettings_obj.flags = 16;
    rcv_obj_mSettings_obj.mAmount = 13751441801094823680;
    rcv_obj_mSettings_obj.mCongestion = 0;
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = 0;
    rcv_obj.Run();
}

TEST(test__ZN6Client3RunEv, test_3) {
    int stub_retval___errno_location_arr[1024];
    memset(stub_retval___errno_location_arr, 0, 1024 * sizeof(int));
    stub_retval___errno_location = (int *) &stub_retval___errno_location_arr[0];
    stub_retval_Extractor_canRead = 65536;
    stub_retval_write = -9223372036854775808;
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    char rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = (ReporterData *) &rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[0];
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 8464;
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
    rcv_obj_mSettings_obj.flags = 22544;
    rcv_obj_mSettings_obj.mUDPRate = 0;
    rcv_obj_mSettings_obj.mAmount = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.mEndTime.mTime.tv_usec = 72057594037927936;
    rcv_obj.lastPacketTime.mTime.tv_sec = -281474976710656;
    rcv_obj.lastPacketTime.mTime.tv_usec = -4294967296;
    rcv_obj.Run();
}

TEST(test__ZN6Client3RunEv, test_4) {
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = 0;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 532752;
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
    rcv_obj_mSettings_obj.flags = 4112;
    rcv_obj_mSettings_obj.mAmount = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = 0;
    rcv_obj.mEndTime.mTime.tv_sec = -9223372036854775808;
    rcv_obj.mEndTime.mTime.tv_usec = 72057594037927936;
    rcv_obj.Run();
}

TEST(test__ZN6Client3RunEv, test_5) {
    int stub_retval___errno_location_arr[1024];
    memset(stub_retval___errno_location_arr, 0, 1024 * sizeof(int));
    stub_retval___errno_location = (int *) &stub_retval___errno_location_arr[0];
    stub_retval_Extractor_canRead = 1075905090;
    stub_retval_write = -9223372036854775808;
    char rcv_obj_ctor_inSettings_obj_mLocalhost_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_mLocalhost_arr, 0, 1024 * sizeof(char));
    char rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[1024];
    memset(rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr, 0, 1024 * sizeof(char));
    MultiHeader rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj_multihdr_obj.report = (ReporterData *) &rcv_obj_ctor_inSettings_obj_multihdr_obj_report_arr[0];
    rcv_obj_ctor_inSettings_obj_multihdr_obj.data = 0;
    thread_Settings rcv_obj_ctor_inSettings_obj;
    rcv_obj_ctor_inSettings_obj.mFileName = 0;
    rcv_obj_ctor_inSettings_obj.mHost = 0;
    rcv_obj_ctor_inSettings_obj.mLocalhost = (char *) &rcv_obj_ctor_inSettings_obj_mLocalhost_arr[0];
    rcv_obj_ctor_inSettings_obj.mOutputFileName = 0;
    rcv_obj_ctor_inSettings_obj.Extractor_file = 0;
    rcv_obj_ctor_inSettings_obj.reporthdr = 0;
    rcv_obj_ctor_inSettings_obj.multihdr = &rcv_obj_ctor_inSettings_obj_multihdr_obj;
    rcv_obj_ctor_inSettings_obj.runNow = 0;
    rcv_obj_ctor_inSettings_obj.runNext = 0;
    rcv_obj_ctor_inSettings_obj.mBufLen = 128;
    rcv_obj_ctor_inSettings_obj.flags = 8464;
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
    rcv_obj_mSettings_obj.flags = 22546;
    rcv_obj_mSettings_obj.mUDPRate = 0;
    rcv_obj_mSettings_obj.mAmount = 0;
    rcv_obj_mSettings_obj.mCongestion = 0;
    char rcv_obj_mBuf_arr[1024];
    memset(rcv_obj_mBuf_arr, 0, 1024 * sizeof(char));
    Client rcv_obj(rcv_obj_ctor_inSettings);
    rcv_obj.mSettings = &rcv_obj_mSettings_obj;
    rcv_obj.mBuf = (char *) &rcv_obj_mBuf_arr[0];
    rcv_obj.mEndTime.mTime.tv_usec = 144115188075855872;
    rcv_obj.lastPacketTime.mTime.tv_sec = -281474976710656;
    rcv_obj.lastPacketTime.mTime.tv_usec = -2516582400;
    rcv_obj.Run();
}

// End of file
