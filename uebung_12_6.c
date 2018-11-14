#include <stdio.h>

int main() {
	int a = 10, b = 3, i;

	for (i = 0; a >= b; i++)
		a -= b;

	printf("Ergebnis: %d\n", i);
	printf("Rest: %d\n", a);

	return 0;
}
