#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = a;
    printf("a address = %p\n", a);
    printf("a[0] address = %p\n", &a[0]);
    printf("p address = %p\n", &p);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    p += 2;
    printf("*(p+2) value = %d\n", *p);


    return 0;
}
