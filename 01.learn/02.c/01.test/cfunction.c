#include <stdio.h>


int func1(int a, int b) {
	return a + b;
}

int func2() {
	int d = func1(2,3);
	int c = 100;
	return c;
}

int main() {

	func2();

	return 0;
}

