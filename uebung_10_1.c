#include <stdio.h>

int main() {
	float height, mass, bmi;

	printf("Bitte geben Sie ihre Groesse in Meter ein: ");
	scanf("%f", &height);
	printf("Bitte geben Sie ihr Gewicht in Kilogramm ein: ");
	scanf("%f", &mass);

	bmi = mass / (height * height);
	printf("Ihr Body-Mass-Index: %f\n", bmi);

	return 0;
}
