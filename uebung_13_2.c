#include <stdio.h>

int func1(int a,int b) {
	return a + b;
}

int func2(int a, int b);

int func3(int x) {
	return 3;
}

int main() {
	int x = func1(5, 2);
	func2(func1(1, 2), func3(2));

	int y = 2;
	printf("%d %d", func1, func3);

	return 0;
}

int func2(int m, int f) {
	return m - f;
}
