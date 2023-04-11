#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Displays the information contained in the ELF header at the
 *        start of an ELF file.
 * @aargc: Number of arguments passed into the program
 * @argv: Array of pointers to arguments passed.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
    int fd;
    unsigned char e_ident[EI_NIDENT];
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot open %s\n", argv[1]);
        exit(98);
    }

    if (read(fd, &e_ident, EI_NIDENT) != EI_NIDENT)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF magic\n");
        exit(98);
    }

    check_file(e_ident);

    if (lseek(fd, 0, SEEK_SET) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot reset file offset\n");
        exit(98);
    }

    if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
        exit(98);
    }

    closes_file(fd);

    print_magic(e_ident);
    print_class(e_ident);
    print_data(e_ident);
    print_version(e_ident);
    print_os_abi(e_ident);
    print_abi(e_ident);
    print_type(ehdr.e_type, e_ident);
    print_entry(ehdr.e_entry, e_ident);

    return (0);
}
