#include <stdio.h>
#include <string.h>

int str_comp(const char *m, const char *n);
void comp(char *a, char *b, int (*prr)(const char *, const char *));

int main() {

    char str1[20];
    char str2[20];
    
    int (*p)(const char *, const char *) = str_comp;

    gets(str1);
    gets(str2);
    
    comp(str1, str2, p);

    return 0;
}

int str_comp(const char *m, const char *n) {
    if(strcmp(m, n) == 0) {
        return 0;
    }
    return 1;
}

void comp(char *a, char *b, int (*prr)(const char *, const char *)) {
    if ((*prr)(a, b) == 0) {
        printf("str1 == str2\n");
    } else {
        printf("str1 != str2\n");
    }
}
