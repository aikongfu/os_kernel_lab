#include <stdio.h>

int main() {
	long nc = 0;
	int c;
	while ((c = getchar()) != EOF && c != 70) {
		++nc;
	}

	printf("nc = %ld\n", nc);

	return 0;
}
