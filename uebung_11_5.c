#include <stdio.h>

int main() {
	int a, b, c, max;

	printf("Bitte geben Sie drei Zahlen ein:\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
		max = a > c ? a : c;
	else
		max = b > c ? b : c;

	printf("Max: %d\n", max);

	return 0;
}
