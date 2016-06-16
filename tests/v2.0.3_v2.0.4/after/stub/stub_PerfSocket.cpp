//
// stub_PerfSocket.cpp
//

#include "headers.h"
#include "PerfSocket.hpp"
#include "SocketAddr.h"
#include "util.h"
_IO_FILE *stderr = 0;
int stub_retval_setsock_tcp_windowsize = 0;
int stub_retval_setsockopt = 0;
char *stub_retval_strerror = 0;
int *stub_retval___errno_location = 0;
int stub_retval_SockAddr_isIPv6 = 0;

int setsock_tcp_windowsize(int inSock, int inTCPWin, int inSend) {
    return stub_retval_setsock_tcp_windowsize;
}

int setsockopt(int __fd, int __level, int __optname, void const *__optval, unsigned int __optlen) {
    return stub_retval_setsockopt;
}

char *strerror(int __errnum) {
    return stub_retval_strerror;
}

int *__errno_location() {
    return stub_retval___errno_location;
}

int SockAddr_isIPv6(sockaddr_storage *inSockAddr) {
    return stub_retval_SockAddr_isIPv6;
}

void warn_errno(char const *inMessage, char const *inFile, int inLine) {
}

void setsock_tcp_mss(int inSock, int inTCPWin) {
}

// End of file
