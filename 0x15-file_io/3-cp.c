#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - copies the content of a file1 to file2
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * @return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_1;
    int fd_2;
    ssize_t rd;
    ssize_t wrt;
    char buffer[BUF_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    fd_1 = open(argv[1], O_RDONLY);
    if (fd_1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((rd = read(fd_1, buffer, BUF_SIZE)) > 0)
    {
        wrt = write(fd_2, buffer, rd);
        if (wrt == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_1);
            close(fd_2);
            exit(99);
        }
    }

    if (rd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fd_1);
        close(fd_2);
        exit(98);
    }

    if (close(fd_1) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
        exit(100);
    }
    if (close(fd_2) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
        exit(100);
    }

    return (0);
}
