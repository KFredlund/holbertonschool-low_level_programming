#include "holberton.h"
/**
* read_textfile - A function that reads a text file
* and prints it to the POSIX standard ouput
* @filename: the file to be read
* @letters: number of letters it should read and print
*
* Return: Actual number of letters it could read/print
* if file cannot be opened, return 0
* if filename is Null, return 0, or if write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	ssize_t a, b;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	a = read(fd, buf, letters);
	if (a == -1)
		return (0);
	b = write(STDOUT_FILENO, buf, a);
	if (b == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	return (a);
}
