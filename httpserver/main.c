#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "http_server.h"

int main(int argc,char* argv[])
{
	start_server(8081);
	return 0;
}
