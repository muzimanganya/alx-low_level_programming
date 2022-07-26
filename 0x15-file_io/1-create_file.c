#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int c;

	a = b = c = 0;
	if (filename == NULL)
	return (-1);
	a = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
	return (-1);
	if (text_content != NULL)
	{
	while (text_content[b] != '\0')
	{
	b++;
	}
	c = write(a, text_content, b);
	}
	if (c == -1 || c != b)
	return (-1);
	return (1);
}
