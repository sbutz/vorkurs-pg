#include <stdio.h>
#include <math.h>

int main() {
	unsigned int a, b;
	int exp;
	double sum;

	printf("Geben Sie bitte zwei Intervalgrenzen an: ");
	scanf("%u %u", &a, &b);
	printf("Geben Sie bitte den Exponenten an: ");
	scanf("%d", &exp);

	if (a > b) {
		a ^= b;
		b ^= a;
		a ^= b;
	}

	printf("a: %d, b: %d\n", a, b);
	sum = 0;
	for (a; a < b; a++)
		sum += pow(a, exp);

	printf("Sum: %f\n", sum);

	return 0;
}
