#include <stdio.h>

void swap1(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 1, y = 2;
    printf("original, x = %d, y = %d\n", x, y);
    
    swap1(x, y);
    printf("swap1, x = %d, y = %d\n", x, y);
    
    swap2(&x, &y);
    printf("swap2, x = %d, y = %d\n", x, y);

    return 0;
}
