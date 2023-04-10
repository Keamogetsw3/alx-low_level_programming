#include "main.h"
/**
 * read_textfile - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write;
	int len_textcont = 0;
	
	if (filename == NULL)
		return (-1);
		
	fd = open(filename,  O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
		
	if (text_content != NULL)
	{
	    for (len_textcont = 0; text_content[len_textcont]; len_textcont++);
		write = write(fd, text_content, len_textcont);
	    if (write == -1){
	        return (-1);
	        close(fd);
	    }
	   
	close(fd);
	return (1);
} 
