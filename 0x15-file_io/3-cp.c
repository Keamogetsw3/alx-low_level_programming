#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUF_SIZE 1024
/**                             
 * cp file_from file_to - program that copies content of a file 1 to file 2
 * @file: is the name of the file                                   
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_o;
    int fd_i;
    int wrt;
    int rd;
    char buffer[BUF_SIZE];

    if (argc != 3)
    {
       dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
   exit(97); 
    }
    fd_i = open(argv[1],  O_RDONLY);
    if (fd_i == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
   exit(98);  
    }
    fd_o = open(argv[2],  O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_o == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
   exit(99);  
    }
    while ((rd = read(fd_i, buffer, BUF_SIZE)) > 0)
    {
        wrt = write(fd_o, buffer, rd);
        if (wrt == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
        if (wrt != rd)
        {
            dprintf(STDERR_FILENO, "Error: Partial write to %s\n", argv[2);
            exit(99);
        }
    }
    if (rd == -1)
    {
        print_error(98, "Error: Can't read from file %s\n", argv[1]);
    }
    if (close(fd_i) == -1)
    {
        print_error(100, "Error: Can't close fd %d\n", fd_i);
    }
    if (close(fd_o) == -1)
    {
        print_error(100, "Error: Can't close fd %d\n", fd_o);
    }
    
    return (0);
} 
