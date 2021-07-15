#include <stdio.h>

int main() {

	int arr[5] = {1,3,6,9,12};
	int *p = &arr;
	printf("arr = %d \n", arr);
	printf("arr[1] = %d \n", arr[1]);
	printf("arr + 1 = %d \n", arr + 1);
	printf("*arr = %d \n", (int *)arr);
	printf("&arr = 0x%x \n", &arr);
	printf("*p = %d \n", *p);
	printf("p = 0x%0x \n", p);
	printf("*(p + 1) = %d \n", *(p + 1));
	printf("*p + 1 = %d \n", *p + 1);
	
	return 0;
}
