#include <stdio.h>

typedef unsigned int __uint32_t;

typedef __uint32_t	uint32_t;


int main() {
//    int *p = NULL;
//    printf("p的地址为%p\n", p);


//    int m = 3;
//    int p = *(*)(m);
//    printf("m = %d, *m = %p, **m = %p\n", m, *m, **m);

//    int *p = (int *)m;
//    int p1 = *(int *)m;
    //m = *(int *)m;
//    printf("m = %d, *p = %d, p1 = %p\n", m, p, p1);

    uint32_t m = 3;
    printf("m = %d\n", m);
    printf("*(int *)m = %p\n", *(uint32_t*)m);  
    return 0;
}
