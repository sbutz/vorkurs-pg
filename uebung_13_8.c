#include <stdio.h>
#include <math.h>

int main() {
	int num, res;

	printf("Geben Sie eine 3 stellige Zahl ein: ");
	scanf("%d", &num);

	if (num < 100 || num > 999) {
		printf("Es sind nur 3 stellige Zahlen erlaubt.\n");
		return 1;
	}

	res = pow(num / 100, 3) + pow(((num % 100) / 10), 3) + pow(num % 10, 3);
	printf("res: %d\n", res);

	if (res == num)
		printf("%d ist eine Armstrongzahl.\n", num);
	else
		printf("%d ist KEINE Armstrongzahl.\n", num);

	return 0;
}
