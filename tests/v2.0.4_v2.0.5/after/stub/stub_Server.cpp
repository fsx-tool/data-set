//
// stub_Server.cpp
//

#include "headers.h"
#include "Server.hpp"
#include "List.h"
#include "Extractor.h"
#include "Reporter.h"
#include "Locale.h"
Iperf_ListEntry *clients = 0;
_IO_FILE *stderr = 0;
char const warn_ack_failed[256] = {};
int stub_retval_close = 0;
ReportHeader *stub_retval_InitReport = 0;
long stub_retval_recv = 0;
int stub_retval_gettimeofday = 0;
Transfer_Info *stub_retval_GetReport = 0;
long stub_retval_write = 0;
int stub_retval_select = 0;
long stub_retval_read = 0;

void warn_errno(char const *inMessage, char const *inFile, int inLine) {
}

void thread_stop(thread_Settings *thread) {
}

int close(int __fd) {
    return stub_retval_close;
}

ReportHeader *InitReport(thread_Settings *agent) {
    return stub_retval_InitReport;
}

long recv(int __fd, void *__buf, unsigned long __n, int __flags) {
    return stub_retval_recv;
}

int gettimeofday(timeval *__tv, struct timezone *__tz) {
    return stub_retval_gettimeofday;
}

void ReportPacket(ReportHeader *agent, ReportStruct *packet) {
}

void CloseReport(ReportHeader *agent, ReportStruct *packet) {
}

void warn(char const *inMessage, char const *inFile, int inLine) {
}

void Iperf_delete(sockaddr_storage *del, Iperf_ListEntry **root) {
}

void EndReport(ReportHeader *agent) {
}

void bzero(void *__s, unsigned long __n) {
}

Transfer_Info *GetReport(ReportHeader *agent) {
    return stub_retval_GetReport;
}

long write(int __fd, void const *__buf, unsigned long __n) {
    return stub_retval_write;
}

int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, timeval *__timeout) {
    return stub_retval_select;
}

long read(int __fd, void *__buf, unsigned long __nbytes) {
    return stub_retval_read;
}

// End of file
