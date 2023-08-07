include "elf.h"

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
