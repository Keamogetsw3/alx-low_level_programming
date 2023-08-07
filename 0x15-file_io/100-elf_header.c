#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <elf.h>

void close_elf(int file_descriptor, const char *err_msg);
int main(int argc, char *argv[]);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);

/**
 * close_elf - Closes the ELF file descriptor and exits with an error code.
 * @file_descriptor: The file descriptor of the ELF file.
 * @err_msg: The error message to display.
 *
 * Return: No return, the program exits.
 */
void close_elf(int file_descriptor, const char *err_msg)
{
    dprintf(STDERR_FILENO, "Error: Can't close file_descriptor %s\n", err_msg);
    close(file_descriptor);
    exit(98);
}

/**
 * main - entry point.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
    Elf64_Ehdr *header;
    int file_descriptor;
    int res;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
        return (98);
    }

    file_descriptor = open(argv[1], O_RDONLY);
    if (file_descriptor == -1)
        close_elf(file_descriptor, "Error: Can't read file");

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
        close_elf(file_descriptor, "Error: Can't allocate memory");

    res = read(file_descriptor, header, sizeof(Elf64_Ehdr));
    if (res == -1)
        close_elf(file_descriptor, "Error: Can't read file");

    free(header);
    close(file_descriptor);

    return (0);
}

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: Array containing the ELF magic numbers.
 *
 */
void check_elf(unsigned char *e_ident)
{
    int index;
    
    for (index = 0; index < 4; index++)
    {
        if (e_ident[index] != 127 && e_ident[index] != 'E' && e_ident[index] != 'L' && e_ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: Array containing the ELF magic numbers.
 *
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
