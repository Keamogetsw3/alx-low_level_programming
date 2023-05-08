#ifndef ELF_H
#define ELF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define EI_NIDENT (16)

typedef struct
{
    unsigned char e_ident[EI_NIDENT];
    uint32_t e_type;
    uint32_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint32_t e_ehsize;
    uint32_t e_phentsize;
    uint32_t e_phnum;
    uint32_t e_shentsize;
    uint32_t e_shnum;
    uint32_t e_shstrndx;
} Elf32_Ehdr;

#define ELFMAG        "\177ELF"
#define SELFMAG       4

typedef struct
{
    unsigned char e_ident[EI_NIDENT];
    uint64_t e_type;
    uint64_t e_machine;
    uint64_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint64_t e_flags;
    uint64_t e_ehsize;
    uint64_t e_phentsize;
    uint64_t e_phnum;
    uint64_t e_shentsize;
    uint64_t e_shnum;
    uint64_t e_shstrndx;
} Elf64_Ehdr;

void print_error(const char * message);

#endif /*ELF_H*/
