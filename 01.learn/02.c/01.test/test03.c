#include <stdio.h>

int main() {
    int v = 1;
    int *pi = &v;
    *pi = 3;
    printf("\tint v = 1;\n\tint *pi = &v;\n\t*pi = 3;\n");
    printf("*pi = %d, pi = %p, &pi = %p \n", *pi, pi, &pi);


//    printf("*pi = %d, pi = %d, &pi = %d", *pi, pi, &pi);
}

