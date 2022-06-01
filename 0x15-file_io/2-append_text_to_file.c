#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be copied into file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, k;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
		}
		k = write(fd, text_content, i);
		if (k < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
