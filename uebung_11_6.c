#include <stdio.h>

int main() {
	unsigned char c;
	printf("Bitte geben Sie einen Buchstabn ein: ");
	scanf("%c", &c);

	if (c < 'a' || c > 'z') {
		printf("Ungueltige Eingabe.\n");
		return 1;
	}
	printf("Grossbuchstabe: %c\n", c - 32);

	return 0;
}
