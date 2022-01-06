#include <stdio.h>

int count(int a, int b) {
	int c = a;
	int d = b;
	return c + d;
}

void donothing() {
	int m = 1;
	int n = 2;
}

int callcount() {
	int a = count(1,2);
	int b = count(1,2);
}

void calldonothing() {
	donothing();
	donothing();
}

int main() {

	callcount();

	int x = 15;

	calldonothing();


	return 0;
}


