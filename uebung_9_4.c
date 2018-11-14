#include <stdio.h>

int main() {
	float a, b, c, res;

	printf("Bitte geben Sie drei Werte fuer a, b und c ein.\n");
	/* Probleme bei Eingaben die den Nenner auf 0 bringen. */
	scanf("%f %f %f", &a, &b, &c);

	res = (1 / a) + (1 / b) + (1 / c);
	printf("Result: %f\n", res);

	res = 1 + 1 / (a + 1 / b );
	printf("Result: %f\n", res);

	res = (a + b) / ((2 * a) - b);
	printf("Result: %f\n", res);

	return 0;
}
