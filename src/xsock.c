#include "xsock.h"

int xclient(int protocol, const char * dest_addr, int dest_port)
{
	int errstatus;
	struct addrinfo hints, *results;

	memset(&hints, 0, sizeof(hints));

	char port_str[5];
	sprintf(port_str, "%d", dest_port);
	
	hints.ai_family = AF_UNSPEC; // IPv4/IPv6 agnostic
	
	errstatus = getaddrinfo(dest_addr, port_str, &hints, &results);

	return errstatus;
}

int xserver(int protocol, const char * host_addr, int host_port)
{
	return 0;
}

int xclose(int sock_fd)
{
	return 0;
}

int xconnect()
{
	return 0;
}
int xsend()
{
	return 0;
}

int xrecv()
{
	return 0;
}

