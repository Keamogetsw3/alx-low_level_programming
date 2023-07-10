#include "main.h"

/**
 * create_file - Read file and prints to POSIX standard outpu
 * @filename: Name of the file to creae
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;/*file descriptor*/
	int len;
	int wrt;/*write to standard output*/

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
