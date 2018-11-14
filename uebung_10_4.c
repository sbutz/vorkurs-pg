#include <stdio.h>

int main() {
	int a, b;
	a = 10;
	b = a;

	scanf("%d", &a);
	int erg;
	erg = a / ((b % 10) + 1);

	printf("Dasergebnisist %d", erg);

	return 0;
}
