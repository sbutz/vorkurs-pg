#include <stdio.h>

int main() {
	int i;
	printf("Geben Sie 1 oder 2 ein: ");
	scanf("%d", &i);
	if (i == 1)
		printf("Eins\n");
	else if (i == 2)
		printf("Zwei\n");
	else
		printf("%d ist eine ungueltige Eingabe!\n", i);
	return 0;
}
