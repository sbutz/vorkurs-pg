#include <stdio.h>

int main() {
	float value;
	int s500, s200, s100, s50, s20, s10, s5, m2, m1, c50, c20, c10, c5, c2, c1;

	printf("Geben Sie einen Geldbetrag ein [Euro]: ");
	scanf("%f", &value);

	s500 = value / 500;
	value -= 500 * s500;
	s200 = value / 200;
	value -= 200 * s200;
	s100 = value / 100;
	value -= 100 * s100;
	s50 = value / 50;
	value -= 50 * s50;
	s20 = value / 20;
	value -= 20 * s20;
	s10 = value / 10;
	value -= 10 * s10;
	s5 = value / 5;
	value -= 5 * s5;
	m2 = value / 2;
	value -= 2 * m2;
	m1 = value / 1;
	value -= 1 * m1;

	value *= 100;
	c50 = value / 50;
	value -= 50 * c50;
	c20 = value / 20;
	value -= 20 * c20;
	c10 = value / 10;
	value -= 10 * c10;
	c5 = value / 5;
	value -= 5 * c5;
	c2 = value / 2;
	value -= 2 * c2;
	c1 = value / 1;
	value -= 1 * c1;

	printf("500E: %d, 200E: %d, 100E: %d, 50E: %d, 20E: %d, 10E: %d, 5E: %d "
		"2E: %d, 1E: %d, 50c: %d, 20c: %d, 10c: %d, 5c: %d, 2c: %d, 1c: %d\n",
		s500, s200, s100, s50, s20, s10, s5, m2, m1, c50, c20, c10, c5, c2, c1);

	return 0;
}
