#include <stdio.h>

/* Gate descriptors for interrupts and traps */
struct gatedesc {
    unsigned gd_off_15_0 : 16;        // low 16 bits of offset in segment
    unsigned gd_ss : 16;            // segment selector
    unsigned gd_args : 5;            // # args, 0 for interrupt/trap gates
    unsigned gd_rsv1 : 3;            // reserved(should be zero I guess)
    unsigned gd_type : 4;            // type(STS_{TG,IG32,TG32})
    unsigned gd_s : 1;                // must be 0 (system)
    unsigned gd_dpl : 2;            // descriptor(meaning new) privilege level
    unsigned gd_p : 1;                // Present
    unsigned gd_off_31_16 : 16;        // high bits of offset in segment
};


/* *
 * Interrupt descriptor table:
 *
 * Must be built at run time because shifted function addresses can't
 * be represented in relocation records.
 * */
static struct gatedesc idt[256] = {{0}};

typedef unsigned long uintptr_t;
int main() {
	printf("sizeof(struct gatedesc) = %d\n", sizeof(struct gatedesc));
	printf("sizeof(idt) = %d\n", sizeof(idt));
	printf("sizeof(idt) - 1 = %d\n", (sizeof(idt) - 1));
	printf("(uintptr_t)idt = %d\n", (uintptr_t)idt);
	return 0;
}
