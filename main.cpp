#include "libAnvilWrapper.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("missing path argument\n");
		return 0;
	}

	printf("Loading: %s\n", argv[1]);
	LibAnvilWrapper law("c:\\Users\\daniel_new\\Desktop\\minecraftworlds\\New World");
	return 0;
}