#include <stdio.h>

#define array_size(x) sizeof(x)/sizeof(x[0])

enum fish_type { Clownfish, Swordfish, Wale };

struct fish {
	enum fish_type type;
	int age;
	float weight;
	char *name;
};

int main() {
	int count, i;
	struct fish aquarium[] = {
		{Clownfish, 2, 0.5, "Nemo"},
		{Swordfish, 5, 25, "Heribert"},
	};

	count = array_size(aquarium);
	printf("Im Aquarium sind %d Fische.\n", count);

	return 0;
}
