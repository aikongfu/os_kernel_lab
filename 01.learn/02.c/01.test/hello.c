#include <stdio.h>

int main() {


	int a = 3;
	int b = 4;

	int c = (a |= b);
	int d = (a & (~b));


	printf("Hello World!\n");
	printf("3 |= 4 = %d\n", c);
	printf("3 & (~4) = %d\n", d);
	return 0;
}
