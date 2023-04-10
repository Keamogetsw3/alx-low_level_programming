#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content
{
	int fd;
	int write;
	int len_textcont = 0;
	
	if (filename == NULL)
		return (-1);
		
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
		
	if (text_content != NULL)
	{
	    for (text_content[len_textcont])
			len_textcont++;
	}
	
	write = write(fd, text_content, len_textcont);
	   if (write == -1){
	    return (-1);
	    close(fd);
	    }
	    
	close(fd);
	return (1);
}
		
