#include <stdio.h>

void main() {
	int c;
	while ((c = getchar()) != EOF && c != 70) {
		putchar(c);		
	}
}
