#include <stdio.h>

long test(int a, int b) {
	a = a + 3;
	b = b + 5;
	return a + b;
}

int main(int argc, char* argv[]) {
	long c = 100 + test(10, 10);
	printf("c = %d\n", c);
	return 0;
}
