#include <stdio.h>
#define PORT 8085

void terminate(const char* msg) {
	perror(msg);
	exit(EXIT_FAILURE);
}

typedef struct 
{
	int at[128];
	int size;
} list_t;