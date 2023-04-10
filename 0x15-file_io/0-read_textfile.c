#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wrt;
	ssize_t rd;
	char *buffer;
	
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);	
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
	  close(fd);
	  free(buffer);
	  return (0);
	}
	wrt = write(STDOUT_FILENO, buffer, rd);
	close(fd);
	if (wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);
	}
        free(buffer);
	close(fd);
	return (wrt);
}
