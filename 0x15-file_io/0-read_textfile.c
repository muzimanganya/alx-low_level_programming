#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b;
	int c;
	char *d;

	if (filename == NULL)
	return (0);
	c = open(filename, O_RDONLY);
	if (c == -1)
	return (0);
	d = malloc(sizeof(char) * letters);
	if (d == NULL)
	{
	close(c);
	return (0);
	}
	a = read(c, d, letters);
	close(c);
	if (a == -1)
	{
	free(d);
	return (0);
	}
	b = write(STDOUT_FILENO, d, a);
	free(d);
	if (b != a)
	return (0);
	return (b);
}
