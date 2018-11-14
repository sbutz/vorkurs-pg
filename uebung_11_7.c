#include <stdio.h>

int main() {
	int unit;
	float value, res;
	printf("Bitte wahlen Sie:\n"
		"1) Celsius -> Fahrenheit\n"
		"2) Fahrenheit -> Celsius\n"
	);
	scanf("%d", &unit);

	printf("Bitte geben Sie eine Temperatur ein: ");
	scanf("%f", &value);

	switch (unit) {
	case 1:
		res = value * 1.8 + 32;
		printf("%.2f Grad Celsius entsprechen %.2f Grad Fahrenheit.\n", value,
			res);
		break;
	case 2:
		res = (value - 32) * 5 / 9;
		printf("%.2f Grad Fahrenheit entsprechen %.2f Grad Celsius.\n", value,
			res);
		break;
	default:
		printf("Ungueltige Option.\n");
		break;
	}

	return 0;
}
