#include <stdio.h>


typedef unsigned long uintptr_t;
int main() {
	int t[256] = {{0}};
	printf("(uintptr_t)t = %d\n", (uintptr_t)t);
	printf("\n");
	return 0;
}
