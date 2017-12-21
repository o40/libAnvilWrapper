#include "libAnvilWrapper.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("missing path argument\n");
		return 0;
	}

	printf("Loading: %s\n", argv[1]);
	LibAnvilWrapper law(argv[1]);
	return 0;
}