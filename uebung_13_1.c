#include <stdio.h>
#include <math.h>

int main() {
	int a, b, res;
	char op;

	printf("Wie lautet die erste Zahl? ");
	scanf(" %d", &a);
	printf("Welche Operation wird gewuenscht? [+-*/%^] ");
	scanf(" %c", &op);
	printf("Wie lautet die zweite Zahl? ");
	scanf(" %d", &b);

	switch(op) {
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	case '%':
		res = a % b;
		break;
	case '^':
		res = pow(a, b);
		break;
	default:
		printf("Unbekannte Operation.\n");
		return 1;
	}

	printf("%d %c %d = %d\n", a, op, b, res);

	return 0;
}
