//
// stub_Client.cpp
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
_IO_FILE *stdin = 0;
_IO_FILE *stderr = 0;
char const warn_delay_large[256] = {};
int sInterupted = 0;
char const warn_no_ack[256] = {};
int stub_retval_Extractor_canRead = 0;
int stub_retval_close = 0;
ReportHeader *stub_retval_InitReport = 0;
int stub_retval_gettimeofday = 0;
int stub_retval_Extractor_getNextDataBlock = 0;
long stub_retval_write = 0;
long stub_retval_send = 0;
int stub_retval_SockAddr_isIPv6 = 0;
int stub_retval_socket = 0;
int stub_retval_bind = 0;
unsigned int stub_retval_SockAddr_get_sizeof_sockaddr = 0;
int stub_retval_connect = 0;
int stub_retval_getsockname = 0;
int stub_retval_getpeername = 0;
int stub_retval_select = 0;
long stub_retval_read = 0;

void pattern(char *outBuf, int inBytes) {
}

void Extractor_Initialize(char *fileName, int size, thread_Settings *mSettings) {
}

void Extractor_InitializeFile(_IO_FILE *fp, int size, thread_Settings *mSettings) {
}

int Extractor_canRead(thread_Settings *mSettings) {
    return stub_retval_Extractor_canRead;
}

void ReportSettings(thread_Settings *agent) {
}

void SockAddr_setPortAny(sockaddr_storage *inSockAddr) {
}

int close(int __fd) {
    return stub_retval_close;
}

void warn_errno(char const *inMessage, char const *inFile, int inLine) {
}

void Extractor_reduceReadSize(int delta, thread_Settings *mSettings) {
}

ReportHeader *InitReport(thread_Settings *agent) {
    return stub_retval_InitReport;
}

int gettimeofday(timeval *__tv, struct timezone *__tz) {
    return stub_retval_gettimeofday;
}

int Extractor_getNextDataBlock(char *block, thread_Settings *mSettings) {
    return stub_retval_Extractor_getNextDataBlock;
}

long write(int __fd, void const *__buf, unsigned long __n) {
    return stub_retval_write;
}

void ReportPacket(ReportHeader *agent, ReportStruct *packet) {
}

void delay_loop(unsigned long usecs) {
}

void CloseReport(ReportHeader *agent, ReportStruct *packet) {
}

void EndReport(ReportHeader *agent) {
}

void Settings_GenerateClientHdr(thread_Settings *client, client_hdr *hdr) {
}

long send(int __fd, void const *__buf, unsigned long __n, int __flags) {
    return stub_retval_send;
}

void SockAddr_remoteAddr(thread_Settings *inSettings) {
}

int SockAddr_isIPv6(sockaddr_storage *inSockAddr) {
    return stub_retval_SockAddr_isIPv6;
}

int socket(int __domain, int __type, int __protocol) {
    return stub_retval_socket;
}

void SetSocketOptions(thread_Settings *inSettings) {
}

void SockAddr_localAddr(thread_Settings *inSettings) {
}

int bind(int __fd, sockaddr const *__addr, unsigned int __len) {
    return stub_retval_bind;
}

unsigned int SockAddr_get_sizeof_sockaddr(sockaddr_storage *inSockAddr) {
    return stub_retval_SockAddr_get_sizeof_sockaddr;
}

int connect(int __fd, sockaddr const *__addr, unsigned int __len) {
    return stub_retval_connect;
}

int getsockname(int __fd, sockaddr *__addr, unsigned int *__len) {
    return stub_retval_getsockname;
}

int getpeername(int __fd, sockaddr *__addr, unsigned int *__len) {
    return stub_retval_getpeername;
}

int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, timeval *__timeout) {
    return stub_retval_select;
}

void thread_stop(thread_Settings *thread) {
}

long read(int __fd, void *__buf, unsigned long __nbytes) {
    return stub_retval_read;
}

void ReportServerUDP(thread_Settings *agent, server_hdr *server) {
}

// End of file
