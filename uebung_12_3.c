#include <stdio.h>

int main() {
	int a = 5, b = 3, sum;

	for (b; b > 0; b--)
		sum += a;

	printf("sum: %d\n", sum);

	return 0;
}
