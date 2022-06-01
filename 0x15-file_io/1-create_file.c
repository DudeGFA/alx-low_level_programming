#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be copied into file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
		}
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
