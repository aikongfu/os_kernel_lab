#include <stdio.h>

int main() {
    int arr[2][3] = {1,2,3,4,5,6};
    
    int i, j;
    printf("arr's value = [");
    for(i = 0; i < 2; i++){
        for (j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


    int (*p)[3];
    
    p = arr;

    printf("(*p)[0] = %d\n", (*p)[0]);

    p++;

    printf("(*p)[0] = %d\n", (*p)[0]);
    printf("(*p)[1] = %d\n", (*p)[1]);

    return 0;
}
