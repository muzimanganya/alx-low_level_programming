#include "main.h"
/**
* binary_to_uint - convert binary
* @b: string
* Return: return
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int a = 0;
unsigned int c = 0;

if (b == NULL)
return (0);
while (b[a] != '\0')
{
if (b[a] != '1' && b[a] != '0')
return (0);
else if (b[a] == '1')
{
c <<= 1;
c += 1;
}
else
{
c <<= 1;
}
a++;
}
return (c);
}
