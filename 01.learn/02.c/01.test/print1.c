#include <stdio.h>

long test(int a, int b) {
	a = a + 3;
	b = b + 5;
	return a  + b;
}

int main(int argc, char* argv[]) {
	long m = test(10, 10);
	printf("the result m = %ld\n", m);
	return 0;
}
