#include <stdio.h>

struct test{
	int id1;
	int id2;
	int id3;
	int id4;
};


int main() {

	struct test t1 = {1,2,3,4};
	struct test *p1 = &t1;
	void *p2 = &t1;

	// define struct test array
	struct test arr[5] = {{1}};

	

	printf("t1.id1 = %d \n", t1.id1);
	printf("t1.id2 = %d \n", t1.id2);
	printf("t1.id3 = %d \n", t1.id3);
	printf("t1.id4 = %d \n", t1.id4);

	printf("-------------------------\n");
	arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = t1;

	printf("arr[4].id1 = %d \n", arr[4].id1);
	return 0;
}
