#include <stdio.h>

int main() {
	float a;
	int b;
	char c, d;

	scanf("%f %d %c %c", &a, &b, &c, &d);

	printf("%c %c %d %f\n", d, c, b, a);

	return 0;
}
