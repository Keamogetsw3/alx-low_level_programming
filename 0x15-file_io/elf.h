#ifndef ELF_H
#define ELF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void close_elf(int file_descriptor, const char *err_msg);
int main(int argc, char *argv[]);

#endif /*ELF_H*/
