#include <stdio.h>

int main() {

	int arr = {1,3,6,9,12};

	int a1={5,4,3,2,1};

	int *p = &arr;
	printf("arr = %d \n", arr);
	printf("arr + 1 = %d \n", arr + 1);
	printf("*p = %d \n", *p);
	printf("a1 = %d \n", a1);
	
	return 0;
}
