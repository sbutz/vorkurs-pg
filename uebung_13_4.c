#include <stdio.h>

int main() {
	unsigned int a, b;
	unsigned long sum;

	printf("Geben Sie bitte zwei Intervalgrenzen an: ");
	scanf("%u %u", &a, &b);

	if (a > b) {
		a ^= b;
		b ^= a;
		a ^= b;
	}

	printf("a: %d, b: %d\n", a, b);
	sum = 0;
	for (a; a < b; a++)
		sum += a * a;

	printf("Sum: %lu\n", sum);

	return 0;
}
