#include "main.h"
/**
 * _97 - error message
 * Return: void
 */
void _97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * _98 - error message
 * @NAME_OF_THE_FILE: file name
 * Return: void
 */
void _98(char *NAME_OF_THE_FILE)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", NAME_OF_THE_FILE);
	exit(98);
}
/**
 * _99 - error message
 * @NAME_OF_THE_FILE: file name
 * Return: void
 */
void _99(char *NAME_OF_THE_FILE)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", NAME_OF_THE_FILE);
	exit(99);
}
/**
 * _100 - error message
 * @FD_VALUE: file descriptor
 * Return: void
 */
void _100(int FD_VALUE)
{
	if (close(FD_VALUE) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", FD_VALUE);
		exit(100);
	}
}
/**
 * main - copies a textfile
 * @argc: no of cl args
 * @argv: filenames
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int fd, j, l, b;
	char buf[1024];

	if (argc != 3)
		_97();
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		_98(argv[1]);
	b = creat(argv[2], 0664);
	if (b < 0)
		_99(argv[2]);
	do {	j = read(fd, buf, 1024);
		if (j < 0)
			_98(argv[1]);
		l = write(b, buf, j);
		if (l < 0)
			_99(argv[2]);
	} while (j > 0);
	_100(fd);
	_100(b);
	return (0);
}
