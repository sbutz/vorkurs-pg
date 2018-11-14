#include <stdio.h>
#include <unistd.h>

int main() {
	unsigned int sleep_time = 3;
	printf("Sleeping for %u seconds...\n", sleep_time);
	sleep(3);
	printf("Hello World!\n");

	return 0;
}
