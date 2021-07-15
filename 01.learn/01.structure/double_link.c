#include <stdio.h>
#include <stdlib.h>


struct list_entry{
	struct list_entry *prev, *next;
	int data;
};

typedef struct list_entry list_entry_t;

static inline void list_init(list_entry_t *elm) {
	elm->prev = elm->next = elm;
}

int main() {

	struct list_entry_t *p = (list_entry_t *)malloc(sizeof(struct list_entry_t));

	list_init(p);

	printf("test list\n");

	return 0;
}
