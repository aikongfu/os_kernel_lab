#include <stdio.h>

int main() {

	int *p = {1,2,3,4,5};
	int arr1[] = {1,2,3,4,5};
	int *p1 = &arr1;
	int *p2 = 3;
	
	printf("int *p = {1,2,3,4,5}; \n");
	printf("p = %d \n", p);
	printf("&p = 0x%x \n",  &p);
	printf("p + 1 = %d \n", p + 1);
	printf("p + 2 = %d \n", p + 2);
	printf("p - 1 = %d \n", p - 1);

	printf("int arr1[] = {1,2,3,4,5}; \nint *p1 = &arr1; \n");
	printf("*p1 = %d \n", *p1);
	printf("*p1 = %d, *(p1+1) = %d, *(p1+2) = %d, *(p1+3) = %d, *(p1+4) = %d \n", 
			*p1, *(p1+1), *(p1+2), *(p1+3), *(p1+4));

	printf("-----------------------\n");
	printf("*p2 = %d \n", *p2);
	// printf("p2 = %d \n", p2);

	return 0;
}
