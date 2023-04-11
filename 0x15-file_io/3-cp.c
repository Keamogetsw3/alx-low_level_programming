#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUF_SIZE 1024
/**                                                                                                
 * cp file_from file_to - program that copies content of a file 1 to file 2                  
 * @file: is the name of the file                                   
 * Return: 0 on success                                                               
 */
void print_error(int error_code, const char *format, const char *file)
{
   dprintf(STDERR_FILENO, format, file);
   exit(error_code);
}

int main(int argc, char *argv[])
{
    int fd_out;
    int fd_in;
    int wrt;

    if (argc != 3)
    {
        print_error(97, "Usage: %s cp file_from file_to\n", argv[0]);
    }
    fd_in = open(argv[1],  O_RDONLY);
    if (fd_in == -1)
    {
        print_error(98, "Error: Can't write to NAME_OF_THE_FILE%s\n", argv[1]);
    }
    fd_out = open(argv[2],  O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_out == -1)
    {
        print_error(99, "Error: Can't write to %s\n", argv[2]);
    }
    char buffer[BUF_SIZE];
    ssize_t rd;
    while ((rd = read(fd_in, buffer, BUF_SIZE)) > 0)
    {
        ssize_t wrt = write(fd_out, buffer, rd);
        if (wrt == -1)
        {
            print_error(99, "Error: Can't write to %s\n", argv[2]);
        }
        
    }
    if (wrt != rd)
    {
        print_error(99, "Error: Partial write to %s\n", argv[2]);
    }
    if (rd == -1)
    {
        print_error(98, "Error: Can't read from file %s\n", argv[1]);
    }
    if (close(fd_in) == -1)
    {
        print_error(100, "Error: Can't close fd %d\n", fd_in);
    }
    if (close(fd_out) == -1)
    {
        print_error(100, "Error: Can't close fd %d\n", fd_out);
    }
    return 0;
} 
