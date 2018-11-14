#include <stdio.h>

int main() {
	int i, x;
	double sum;

	printf("Geben Sie einen Startwert ein: ");
	scanf("%d", &x);

	sum = 0;
	for (i = 1; sum < x; i++)
		sum += (double) 1 / i;

	printf("n: %d\n", i);

	return 0;
}
