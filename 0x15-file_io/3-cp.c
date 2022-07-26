#include "main.h"
#define BYTES 1024
/**
 * main - Entry point
 * @argc : count
 * @argv : array arg
 * Return: (0) always
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int d;
	char byt[BYTES];

	d = 1;
	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
	exit(97);
	if (argv[1] == NULL)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
	exit(98);
	if (argv[2] == NULL)
	dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", argv[2]),
	exit(99);
	a = open(argv[1], O_RDONLY);
	b = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	c = read(a, byt, BYTES);
	if (c == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
	exit(98);
	while (c != 0)
	{
	d = write(b, byt, c);
	if (c == -1 || d != c)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	c = read(a, byt, BYTES);
	if (c == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
	exit(98);
	}
	d = close(a);
	if (d == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a), exit(100);
	d = close(b);
	if (d == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b), exit(100);
	return (0);
}
