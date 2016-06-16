//
// stub_Settings.cpp
//

#include "headers.h"
#include "Settings.hpp"
#include "Locale.h"
#include "SocketAddr.h"
#include "util.h"
#include "gnu_getopt.h"
char *gnu_optarg = 0;
int gnu_optind = 0;
_IO_FILE *stderr = 0;
char const warn_implied_udp[256] = {};
char const warn_invalid_server_option[256] = {};
char const warn_invalid_compatibility_option[256] = {};
char const warn_invalid_single_threaded[256] = {};
char const usage_long1[256] = {};
char const usage_long2[256] = {};
char const report_interval_small[256] = {};
char const warn_implied_compatibility[256] = {};
char const warn_buffer_too_small[256] = {};
char const warn_invalid_client_option[256] = {};
char const version[256] = {};
char const warn_window_small[256] = {};
char const warn_invalid_report[256] = {};
char const warn_invalid_report_style[256] = {};
int stub_retval_thread_zeroid = 0;
char *stub_retval_getenv = 0;
int stub_retval_gnu_getopt_long = 0;
unsigned long stub_retval_byte_atoi = 0;
int stub_retval_SockAddr_isMulticast = 0;
long stub_retval_strtol = 0;
char const *stub_retval_inet_ntop = 0;

int thread_zeroid() {
    return stub_retval_thread_zeroid;
}

char *getenv(char const *__name) {
    return stub_retval_getenv;
}

int gnu_getopt_long(int argc, char *const *argv, char const *shortopts, option const *longopts, int *longind) {
    return stub_retval_gnu_getopt_long;
}

unsigned long byte_atoi(char const *inString) {
    return stub_retval_byte_atoi;
}

void SockAddr_setHostname(char const *inHostname, sockaddr_storage *inSockAddr, int isIPv6) {
}

int SockAddr_isMulticast(sockaddr_storage *inSockAddr) {
    return stub_retval_SockAddr_isMulticast;
}

long strtol(char const *__nptr, char **__endptr, int __base) {
    return stub_retval_strtol;
}

char const *inet_ntop(int __af, void const *__cp, char *__buf, unsigned int __len) {
    return stub_retval_inet_ntop;
}

// End of file
