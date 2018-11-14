#include <stdio.h>

int main() {
	int a = 5, b = 2;

	printf("Result: %d\n", a / b);

	printf("Result: %f\n", (float) a / b);

	printf("Result: %d, Rest: %d\n", a / b, a % b);

	return 0;
}
