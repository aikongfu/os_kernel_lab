#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int sub;
    int *p1 = &a[2];
    int *p2 = &a[6];
    sub = p2 - p1;
    printf("&a[6] - &a[2] = %d\n", sub);
    printf("a = %p\n", a);
    printf("p1=%p\n", p1);
    printf("p2=%p\n", p2);
}
