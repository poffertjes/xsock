#include <stdio.h>
#include <string.h>

#ifdef __linux__

#define XSOCK_PLATFORM_LINUX
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#endif

#ifdef _WIN32

#define XSOCK_PLATFORM_WIN
#include <winsock2.h>

#endif

int xclient(int protocol, const char * dest_addr, int dest_port);
int xserver(int protocol, const char * host_addr, int host_port);
int xclose(int sock_fd);

int xconnect();
int xsend();
int xrecv();
