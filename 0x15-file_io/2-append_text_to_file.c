#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;/*file descriptor*/
	int len;
	int wrt;/*write to standard output*/

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	wrt = write(fd, text_content, len);
	if (wrt == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
