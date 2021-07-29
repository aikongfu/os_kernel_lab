#include <stdio.h>
#include <stdlib.h>


struct list_entry {
	struct list_entry *prev, *next;
	int data;
};

typedef struct list_entry list_entry_t;


static inline void list_init(list_entry_t *elm) {
	elm->prev = elm->next = elm;
}


int main() {

	int a = 1;
	int b = 2;
	struct list_entry *p;

	p = (struct list_entry *)malloc(sizeof(struct list_entry));

	list_entry_t *p1;
 	p1 = (list_entry_t *)malloc(sizeof(list_entry_t));
	
	printf("sizeof(p) = %d\n", sizeof(p));
	printf("sizeof(p1) = %d\n", sizeof(p1));

	list_init(p);
	list_init(p1);

	struct list_entry *pp;
	pp = (struct list_enrty *)malloc(sizeof(struct list_entry));
	list_init(pp);
	pp->data = 3;

	int *pd = &pp->data;
	
	struct list_entry *pp2;
	pp2 = (struct list_entry *)(pd - 2);


	printf("test list\n");

	return 0;
}




