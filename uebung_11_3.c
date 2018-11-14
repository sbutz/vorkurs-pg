#include <stdio.h>

int main() {
	int i;
	printf("Geben Sie 1 oder 2 ein: ");
	scanf("%d", &i);

	switch(i) {
	case 1:
		printf("Eins\n");
		break;
	case 2:
		printf("Zwei\n");
		break;
	default:
		printf("%d ist eine ungueltige Eingabe!\n", i);
	}

	return 0;
}
