#include <stdio.h>

int is_prime(unsigned int);

int main() {
	int a = 121;

	if (is_prime(a))
		printf("%d is a prime number.\n", a);
	else
		printf("%d is NOT a prime number.\n", a);

	return 0;
}

int is_prime(unsigned int a) {
	int i = 2;
	while (i < a) {
		if (a % i == 0)
			return 0;
		else
			i++;
	}
	return 1;
}
