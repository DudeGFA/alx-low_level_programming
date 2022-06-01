#include "main.h"
/**
 * read_textfile - reads and writes a textfile
 * to standard output
 * @filename: file name
 * @letters: no of chars to be read and written
 * Return: no of written chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, j;
	char *buf;

	buf = malloc(letters * sizeof(char));
	if (buf == NULL || filename == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}
	j = read(fd, buf, letters);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);
	i = write(STDOUT_FILENO, buf, j);
	if (i < 0)
		return (0);
	return (i);
}
