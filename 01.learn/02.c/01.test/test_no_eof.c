#include <stdio.h>

void main() {
	int c;
	while (c = (getchar() != EOF)) {
		printf("getchar() != EOF is [%d]\n", c);
	}


}
