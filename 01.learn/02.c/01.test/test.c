#include <stdio.h>

typedef struct A {} A;

int main()
{
    A a [10];
    A b;
    printf("a+0 = %p \t a+1 == %p \n", a+0, a+1);
    printf("address b = %p, \t sizeof(b) = %zu\n", &b, sizeof(b));
}





