#include <stdio.h>

typedef struct{
    char name[10];
    int age;
    int score;
} message;

int main() {

    message m1 = {"xiaoming", 19, 79};
    printf("m1.name = %s, m1.age = %d, m1.score = %d\n", m1.name, m1.age, m1.score);


    message *p = &m1;
    
    printf("p->name = %s, p->age = %d, p->score = %d\n", p->name, p->age, p->score);
    return 0;

}
