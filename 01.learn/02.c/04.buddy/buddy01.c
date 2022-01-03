#include <stdio.h>

// #define __SIZE_TYPE__ long unsigned int
// typedef __SIZE_TYPE__ size_t;

// #define size_t long unsigned int
#define size_t unsigned int

size_t getLessNearOfPower2(size_t x) {
	size_t _i;
	for (_i = 0; _i < sizeof(size_t) * 8 - 1; _i++) {
		if ((1 << (_i + 1)) > x) {
			break;
		}
	}
	return (size_t)(1 << _i);
}

int main() {

	printf("%d\n", getLessNearOfPower2(3));
	printf("%d\n", getLessNearOfPower2(7));
	printf("%d\n", getLessNearOfPower2(1));
	printf("%d\n", getLessNearOfPower2(11));
	printf("%d\n", getLessNearOfPower2(15));
	printf("sizeof(size_t) = %d \n", sizeof(size_t)); 

	printf("Hello world!\n");
	return 0;
}
