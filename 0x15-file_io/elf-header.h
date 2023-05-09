#ifndef ELF-HEADER_H_
#define ELF-HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void close_elf(int elf);

#endif /* _ELF_HEADER_H_ */

