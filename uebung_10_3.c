#include <stdio.h>

int main() {
	int euros;

	printf("Bitte geben Sie einen Euro Betrag ein: ");
	scanf("%d", &euros);

	euros = (euros - euros % 36) + 18;
	printf("Betrag: %d\n", euros);

	return 0;
}
