#include "elf.h"

/**
 * main - entry point
 * @aargc: Number of arguments passed into the program
 * @argv: Array of pointers to arguments passed
 * Description: checks If the file is not an ELF file or not
 *
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char** argv)
{
	int fd;
	Elf64_Ehdr eheadr;
	ssize_t rd;/* read from file*/

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("File failed to open");
		exit (98);
	}

	rd = read(fd, &eheadr, sizeof(eheadr));
	if (n != sizeof(ehdr))
	{
		print_error("Failed to read ELF header");
		close(fd);
		exit (98);
	}

	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
		close(fd);
		exit (98);
	}

	print_elf_header(&eheadr);
	close(fd);
	return (0);

}

/**
 * print_error- print error message to stderr
 * @message: erroe message to print
 *
 * Return: nothing
 */
void print_error(const char *message)
{
    fprintf(stderr, "%s: %s\n", message, strerror(errno));
}
