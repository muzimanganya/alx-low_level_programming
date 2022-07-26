#include "main.h"
/**
 * append_text_to_file - reads a text file and prints it to the POSIX
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int c;

	b = 0;
	a = open(filename, O_RDWR | O_APPEND);
	if (a == -1)
	return (-1);
	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
	return (1);
	while (text_content[b] != '\0')
	b++;
	c = write(a, text_content, b);
	if (c == -1)
	return (-1);
	return (1);
}
