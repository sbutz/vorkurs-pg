#include <stdio.h>

int main() {
	int i;

	printf("%d %d %d %d\n", 'a', 'z', 'A', 'Z');
	i = 65;
	while (i <= 122) {
		printf("%c", i);

		if (i == 90)
			i = 97;
		else
			i++;
	}
	printf("\n");

	return 0;
}
