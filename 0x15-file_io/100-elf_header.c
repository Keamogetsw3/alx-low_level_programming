#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUF_SIZE 1024
/**
 * cp file_from file_to - program that copies the content of a file to another file
 * @file: is the name of the file
 * @format:
 * Return: 1 on success, -1 on failure
 */
 int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    char *file_from = argv[1];
    char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        exit(99);
    }

    char buffer[BUFFER_SIZE];
    ssize_t nread;

    while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        ssize_t nwritten = write(fd_to, buffer, nread);
        if (nwritten == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }

    if (nread == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}
