#include <stdio.h>

int main() {
	int Summand_1 = 10, Summand_2 = -11;
	unsigned int Ergebnis = 0;
	Ergebnis = Summand_1 + Summand_2;

	printf("Das Ergebnis ist %d", Ergebnis);
	if (Ergebnis < 0)
		printf("Das Ergebnis ist negativ");
	else
		printf("Ich sollte nicht aufgerufen werden, das Ergebnis %u ist "
		"positiv.\n", Ergebnis);

	return 0;
}
