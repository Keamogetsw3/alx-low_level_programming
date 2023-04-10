#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t write;
	ssize_t read;
	char *buffer;
	
	if (filename == NULL)
		return (0);
		
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
		
	buffer = malloc(sizeof(char) * letters);
	if (buffer == -1)
		return (0);
		
	read = read(fd, buffer, letters);
	close(fd);
	if (read == -1)
	{
		free(buffer);
		return (0);
	}
	
	buf[i] = '\0';
	
	write = write(STDOUT_FILENO, buffer, read);
	close(fd);
	if (read == -1)
	{
		free(buffer);
		return (0);
	}
	
	free(buffer);
	close(fd);
	return (write);
} 
