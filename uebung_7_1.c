#include <stdio.h>

int add(int, int);

int main() {
	int res = add(5, 3);
	printf("Ergebnis: %d\n", res);
	return 0;
}

int add(int a, int b) {
	return a + b;
}
