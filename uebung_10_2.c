#include <stdio.h>

int main() {
	int cents, euros;

	printf("Bitte geben Sie einen Cent Betrag ein.\n");
	scanf("%d", &cents);

	euros = (cents / 100) + ((cents % 100) && 1);

	printf("In Euro: %d\n", euros);

	return 0;
}
