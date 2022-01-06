#include <stdio.h>




/* Represents true-or-false values */
typedef int bool;

/* Explicitly-sized versions of integer types */
typedef char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;

/* *
 *  * Pointers and addresses are 32 bits long.
 *   * We use pointer types to represent addresses,
 *    * uintptr_t to represent the numerical values of addresses.
 *     * */
typedef int32_t intptr_t;
typedef uint32_t uintptr_t;

/* size_t is used for memory object sizes */
typedef uintptr_t size_t;

/* used for page numbers */
typedef size_t ppn_t;


struct elfhdr {
    uint32_t e_magic;     
    uint8_t e_elf[12];
    uint16_t e_type;      
    uint16_t e_machine;   
    uint32_t e_version;   
    uint32_t e_entry;     
    uint32_t e_phoff;     
    uint32_t e_shoff;     
    uint32_t e_flags;     
    uint16_t e_ehsize;    
    uint16_t e_phentsize; 
    uint16_t e_phnum;     
    uint16_t e_shentsize; 
    uint16_t e_shnum;     
    uint16_t e_shstrndx;  
};

/* program section header */
struct proghdr {
    uint32_t p_type;   // loadable code or data, dynamic linking info,etc.
    uint32_t p_offset; // file offset of segment
    uint32_t p_va;     // virtual address to map segment
    uint32_t p_pa;     // physical address, not used
    uint32_t p_filesz; // size of segment in file
    uint32_t p_memsz;  // size of segment in memory (bigger if contains bss）
    uint32_t p_flags;  // read/write/execute bits
    uint32_t p_align;  // required alignment, invariably hardware page size
};




#define ELFHDR          ((struct elfhdr *)0x10000)      // scratch space



int main() {

	uintptr_t x = (uintptr_t)ELFHDR;

	printf("uintprt_t = %d \n", x);
	printf("uintprt_t = 0x%x \n", x);
	printf("uintprt_t = %b \n", x);

}















