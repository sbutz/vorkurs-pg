#include <stdio.h>

int main() {
	int a, b = 10;

	scanf("%d", &b);
	scanf("%d", &a);
	a=12;

	if (a < 42) {
		if(b < 12) {
			printf("This is true!");
		} else {
			printf("This is false!");
		}
	} else if (1 != 0) {
	} else {
	}

	switch (b % 3) {
	case 0:
		printf("Remainder: None!");
		break;
	case 1:
		printf("Remainder:1");
		break;
	case 2:
		printf("Remainder: 2");
		break;
	default:
		return 1;
	}

	return 0;
}
