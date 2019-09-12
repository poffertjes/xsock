#include <stdio.h>

#include "xsock.h"

int main()
{
	int a = xclient(SOCK_DGRAM, "127.0.0.1", 80);
	printf("%d", a);
	return 0;
}
