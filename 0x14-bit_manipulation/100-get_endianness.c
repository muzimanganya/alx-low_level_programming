#include "main.h"
/**
* get_endianness - checks endianness.
* Return: endian
*/
int get_endianness(void)
{
unsigned int a = 1;
char *b = (char *)&a;

if (*b)
return (1);
else
return (0);
}
